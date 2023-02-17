function [x,p_x] = par_dream(prior,pdf,N,T,d)
% Differential evolution Adaptive Metropolis (DREAM) algorithm

% Default algorithmic parameters
[delta,c,c_star,n_CR,p_g] = deal(3,0.1,1e-12,3,0.2);        

% Preallocate chains and density
x = nan(T,d,N);
p_x = nan(T,N);

% Crossover values and select. prob
CR = [1:n_CR]/n_CR;
p_CR = ones(1,n_CR)/n_CR;

% Variable selection prob. crossover..
[J,n_id] = deal(zeros(1,n_CR));

% R-matrix: index of chains for DE
for i = 1:N
    R(i,1:N-1) = setdiff(1:N,i);
end


% Create initial population..
X = prior(N,d);

% Compute density initial population..
for i = 1:N
    p_X(i,1) = pdf(X(i,1:d));
end

% Store initial states and density...
x(1,1:d,1:N) = reshape(X',1,d,N);
p_x(1,1:N) = p_X';


% Dynamic part: evolution of N chains...
for t = 2:T

    [~,draw] = sort(rand(N-1,N));                           % Permute [1,....,N-1] N times
    dX = zeros(N,d);                                        % Set N jump vectors to zero...
    lambda = unifrnd(-c,c,N,1);                             % Draw N lambda values..
    std_X = std(X);                                         % Compute std each sampling dimension...

    for i = 1:N                                             % Create proposals...
        D = randsample([1:delta],1,'true');                 % Select delta (equal select. prob.)
        a = R(i,draw(1:D,i)); b = R(i,draw(D+1:2*D,i));     % Extract a and b ~= i
        id(i) = randsample(1:n_CR,1,'true',p_CR);           % Select index of crossover value
        z = rand(1,d);                                      % Draw d values from U[0,1]
        A = find( z < CR(id(i)));                           % Derive subset A selected dimensions
        d_star = numel(A);                                  % How many dimensions sampled?

        if (d_star == 0)                                    % A must contain at least one value....
            [~,A] = min(z);
            d_star = 1;
        end

        gamma_d = 2.38/sqrt(2*D*d_star);                    % Calculate jump rate
        g = randsample([gamma_d 1],1,'true',[1-p_g p_g]);   % Select gamma: 80/20 mix [default 1]
        dX(i,A) = x_star*randn(1,d_star) + ...
            (1+lambda(i))*g*sum(X(a,A)-X(b,A),1);           % Compute ith jump diff. evol.
        Xp(i,1:d) = X(i,1:d) + dX(i,1:d);                   % Compute ith proposal
    end

    % *This will be a parfor*
    for i = 1:N                                             % Accept / reject proposals
        p_Xp(i,1) = pdf(Xp(i,1:d));                         % Calculate density ith proposal
        p_acc = min(1,p_Xp(i,1)./p_X(i,1));                 % Compute acceptance probability
        if p_acc > rand                                     % p-acc > U[0,1]?
            X(i,1:d) = Xp(i,1:d); p_X(i,1) = p_Xp(i,1);     % True : accept proposal
        else
            dX(i,1:d) = 0;                                  % Set jump back to zero for p_CR
        end
        J(id(i)) = J(id(i)) + sum((dX(i,1:d)./std_X).^2);   % Update jump distance crossover idx
        n_id(id(i)) = n_id(id(i)) + 1;                      % How many times idx crossover used
    end

    x(t,1:d,1:N) = reshape(X',1,d,N); p_x(t,1:N) = p_X';    % Append current X and density

    if t<T/10
        p_CR = J./n_id;
        P_CR = p_CR/sum(p_CR);
    end

    [X,p_X] = check(X,mean(log(p_x(ceil(t/2):t,1:N))));

end

end