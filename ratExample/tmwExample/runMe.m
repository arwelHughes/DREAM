%% Test of DREAM with RAT
clear
% addpath(fullfile(pwd,'functions'));

% Pull out our fitting parameters....
fitPars = [0.5 0.5 0.5];
fitConstr = [0 1 ; 0 1 ; 0 1];

% Initialise the MCMC parameters....
% Recommended parameter settings
MCMCPar.seq = 9;                        % Number of Markov chains / sequences (for high dimensional and highly nonlinear problems, larger values work beter!!)
MCMCPar.DEpairs = 1;                    % Number of chain pairs to generate candidate points
MCMCPar.nCR = 3;                        % Number of crossover values used
MCMCPar.k = 10;                         % Thinning parameter for appending X to Z
MCMCPar.parallelUpdate = 0.9;           % Fraction of parallel direction updates
MCMCPar.eps = 5e-2;                     % Perturbation for ergodicity
MCMCPar.steps = 0; % inline('MCMCPar.ndraw/(20 * MCMCPar.seq)'); % Number of steps before calculating convergence diagnostics
MCMCPar.m0 = 0; %inline('10 * MCMCPar.n');  % Initial size of matrix Z
MCMCPar.pJumpRate_one = 0.20;           % Probability of selecting a jumprate of 1 --> jump between modes
MCMCPar.pCR = 'Yes';                    % Adaptive tuning of crossover values (Yes or No)
MCMCPar.Restart = 'No';                 % Restart run (Yes or No)
MCMCPar.modout = 'Yes';                 % Return model (function) simulations of samples Yes or No)?
MCMCPar.save = 'Yes';                   % Save output during the run (Yes or No)
MCMCPar.ABC = 'No';                     % Approximate Bayesian Computation or Not?
MCMCPar.m0 = 0;

coder.varsize('MCMCPar.m',[Inf Inf],[1 1]);
MCMCPar.m = 0;

coder.varsize('MCMCPar.CR',[Inf Inf],[1 1]);
MCMCPar.CR = cumsum((1/MCMCPar.nCR) * ones(1,MCMCPar.nCR));


% Problem specific parameter settings
MCMCPar.n = length(fitPars);                    % Dimension of the problem (number of parameters to be estimated)
MCMCPar.ndraw = 5e4;                            % Maximum number of function evaluations
MCMCPar.T = 1;                                  % Each Tth sample is collected in the chains
MCMCPar.prior = 'LHS';                          % Latin Hypercube sampling (options, "LHS", "COV" and "PRIOR")
MCMCPar.BoundHandling = 'Reflect';              % Boundary handling (options, "Reflect", "Bound", "Fold", and "None");
MCMCPar.modout = 'No';                         % Return model (function) simulations of samples Yes or No)?
MCMCPar.lik = 3;                                % Define likelihood function -- Sum of Squared Error ** will overload this ***
MCMCPar.Best = Inf;                             % Need to start with an initial 'Best' or model crashes

Extra = [];

% Define modelName
ModelName = 'ratFunc';

% Give the parameter ranges (minimum and maximum values)
ParRange.minn = fitConstr(:,1)';        % Note transpose - need to be row vectors..
ParRange.maxn = fitConstr(:,2)';

Measurement.MeasData = ones(100,1);
Measurement.N = length(Measurement.MeasData);

% Run DREAM
[Sequences,X,Z,out_CR,out_R_stat,out_AR,fx] = RAT_dream_zs(MCMCPar,Extra,ParRange,Measurement);
output.CR = out_CR;
output.R_stat = out_R_stat;
output.AR = out_AR;

% Post-process run....
%postprocDREAM;











