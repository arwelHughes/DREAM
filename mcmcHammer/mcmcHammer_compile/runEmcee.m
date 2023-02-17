function  [problemDef,outProblem,result,bayesResults] = runEmcee(problemDef,problemDef_cells,problemDef_limits,controls,allPriors,p)


% Run the GWMCMC algorithm.
%
% GWMCMC is an implementation of the Goodman and Weare 2010 Affine invariant 
% ensemble Markov Chain Monte Carlo (MCMC) sampler.

% Pack the fitpars into their own array
[problemDef,paramNames] = packparams(problemDef,problemDef_cells,problemDef_limits,controls.checks);

% Initialise the start position...
fitPars = problemDef.fitpars;
initVal = fitPars(:);
for i = 1:length(fitPars)*2
    shakeVal = randn(1,length(fitPars))./100;
    nextLine = fitPars + (shakeVal.*fitPars);
    initVal = [initVal , nextLine(:)];
end

% Need to set up the priors at this point... TODO
%
%
% -----------------------------------------------


% Input parameters
% eventually get these from controls...
p.BurnIn = 0.4000;
p.Parallel = 0;
p.ProgressBar = 1;
p.StepSize = 2;
p.ThinChain = 10;
mcccount = 50000;

% Group the relevant inputs....
extras{1} = problemDef;
extras{2} = problemDef_cells;% 
extras{3} = problemDef_limits;
extras{4} = controls;

% Run the sampler....
m = gwmcmc_compile_mex(initVal,50000,p,extras);

% Re-format m into a more conventional chain
chain = m(:,:)';
means = mean(chain,1);

% Now make the outputs....
output.results.mean = means;
output.chain = chain;
output.s2chain = [];
output.sschain = [];
output.bestPars = means;
output.data = [];

% Process the outputs....
problem = {problemDef ; controls ; problemDef_limits ; problemDef_cells};
[problemDef,outProblem,result,bayesResults] = processBayes_newMethod(output,problem);

%result = parseResultToStruct()

end