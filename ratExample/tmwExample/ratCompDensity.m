
function [p,log_p,fx,Best,SSE] = ratCompDensity(x,MCMCPar,Measurement,Extra)

% This function computes the density of each x value
SSE = Inf;
Best = Inf;

% Check whether to store the output of each model evaluation (function call)
if Measurement.N > 0
    if strcmp(MCMCPar.modout,'Yes')
        % Create initial ModPred
        fx = NaN(Measurement.N,size(x,1));
    end
end

coder.varsize('p',[Inf Inf],[1 1]);
coder.varsize('log_p',[Inf Inf],[1 1]);
p = [1];
log_p = [1];

% Loop over the individual parameter combinations of x

coder.varsize('fx',[Inf Inf],[1 1]);
fx = [];
for ii = 1:MCMCPar.seq

    [fx(:,ii),SSE] = ratFunc(x(ii,:),Extra);

    MCMCPar.Best(MCMCPar.Best>SSE)=SSE;
    Best= MCMCPar.Best;

    % And retain in memory
    p(ii,1) = -SSE;
    log_p(ii,1) = - Measurement.N/2 * log(SSE);
end


end

function [f,er] = ratFunc(x,E)
% Dummy test func
    f = 1; er = 1;


end