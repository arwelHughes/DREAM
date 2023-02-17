%% Test of DREAM with RAT
%clear

% Make the problem
%problem = r1ToProjectClass('original_dspc_bilayer.mat');
problem = r1ToProjectClass('defaultProject.mat');
%problem.setParameter(12,'fit',false);
controls = controlsDef();
[problem,results] = RAT(problem,controls);

% Split it up into the constituents....
[problemDef,problemDef_cells,problemDef_limits,priors,controls] = RatParseClassToStructs_new(problem,controls);

% Pack to get fitpars and constraints...
[problemDef,fitNames] = packparams(problemDef,problemDef_cells,problemDef_limits,controls.checks);

% Pull out our fitting parameters....
fitPars = problemDef.fitpars;
fitConstr = problemDef.fitconstr;

% Initialise the MCMC parameters....
% Recommended parameter settings
MCMCPar.seq = 3;                        % Number of Markov chains / sequences (for high dimensional and highly nonlinear problems, larger values work beter!!)
MCMCPar.DEpairs = 1;                    % Number of chain pairs to generate candidate points
MCMCPar.nCR = 3;                        % Number of crossover values used
MCMCPar.k = 10;                         % Thinning parameter for appending X to Z
MCMCPar.parallelUpdate = 0.9;           % Fraction of parallel direction updates
MCMCPar.eps = 5e-2;                     % Perturbation for ergodicity
MCMCPar.steps = inline('MCMCPar.ndraw/(20 * MCMCPar.seq)'); % Number of steps before calculating convergence diagnostics
MCMCPar.m0 = inline('10 * MCMCPar.n');  % Initial size of matrix Z
MCMCPar.pJumpRate_one = 0.20;           % Probability of selecting a jumprate of 1 --> jump between modes
MCMCPar.pCR = 'Yes';                    % Adaptive tuning of crossover values (Yes or No)
MCMCPar.Restart = 'No';                 % Restart run (Yes or No)
MCMCPar.modout = 'Yes';                 % Return model (function) simulations of samples Yes or No)?
MCMCPar.save = 'Yes';                    % Save output during the run (Yes or No)
MCMCPar.ABC = 'No';                     % Approximate Bayesian Computation or Not?


% Problem specific parameter settings
MCMCPar.n = length(fitPars);                    % Dimension of the problem (number of parameters to be estimated)
MCMCPar.ndraw = 5e5;                            % Maximum number of function evaluations
MCMCPar.T = 1;                                  % Each Tth sample is collected in the chains
MCMCPar.prior = 'LHS';                          % Latin Hypercube sampling (options, "LHS", "COV" and "PRIOR")
MCMCPar.BoundHandling = 'Reflect';              % Boundary handling (options, "Reflect", "Bound", "Fold", and "None");
MCMCPar.modout = 'Yes';                         % Return model (function) simulations of samples Yes or No)?
MCMCPar.lik = 3;                                % Define likelihood function -- Sum of Squared Error ** will overload this ***
MCMCPar.Best = Inf;                             % Need to start with an initial 'Best' or model crashes

Extra.problemDef = problemDef;
Extra.problemDef_cells = problemDef_cells;
Extra.problemDef_limits = problemDef_limits;
Extra.controls = controls;

% Define modelName
ModelName = 'ratFunc';

% Give the parameter ranges (minimum and maximum values)
ParRange.minn = fitConstr(:,1)';        % Note transpose - need to be row vectors..
ParRange.maxn = fitConstr(:,2)';

allData = problemDef_cells{2};
allY = [];
for i = 1:length(allData)
    thisData = allData{i};
    allY = [allY ; thisData(:,2)];
end
Measurement.MeasData = allY; %problemDef_cells{2}{:}(:,2);   % Contained in peoblemDef....
Measurement.N = length(Measurement.MeasData);

% Run DREAM
[Sequences,X,Z,output,fx] = RAT_dream_zs(MCMCPar,ModelName,Extra,ParRange,Measurement);

[chain,~,~] = getChain(Sequences,MCMCPar);

[~,fitNames] = packparams(problemDef,problemDef_cells,problemDef_limits,controls.checks);

h = figure(1); clf;
%plotBayesCorrFig(chain,results.fitNames,h)

plotmatrix(chain),

% Post-process run....
%postprocDREAM;











