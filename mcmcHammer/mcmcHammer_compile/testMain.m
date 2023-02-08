function chain = testMain()

% global problemDef problemDef_cells problemDef_limits controls


% Load in the test inputPars
% inputPars = load('inputPars');
% inputPars = inputPars.inputpars;
% 
% problemDef = inputPars.problemDef;
% problemDef_cells = inputPars.problemDef_cells;
% problemDef_limits = inputPars.problemDef_limits;
% controls = inputPars.controls;

problem = r1ToProjectClass('defaultProject.mat');
%problem = r1ToProjectClass('original_dspc_bilayer.mat');


controls = controlsDef();

% Split it up into the constituents....
[problemDef,problemDef_cells,problemDef_limits,priors,controls] = RatParseClassToStructs_new(problem,controls);

%problemDef_limits.nbs(1,2) = 7e-6;

[problem,result] = reflectivity_calculation_wrapper(problemDef,problemDef_cells,problemDef_limits,controls);


disp('debug')
[problemDef,paramNames] = packparams(problemDef,problemDef_cells,problemDef_limits,controls.checks);

fitPars = problemDef.fitpars;

initVal = fitPars(:);
for i = 1:length(fitPars)*2
    shakeVal = randn(1,length(fitPars))./100;
    nextLine = fitPars + (shakeVal.*fitPars);
    initVal = [initVal , nextLine(:)];
end

% 
% ball = randn(length(fitPars),30)*0.1;
% ball(:,3) = ball(:,3) * 30;
% mball = bsxfun(@plus,fitPars,ball);

logpr = @(x) logPrior(x);
logl = @(x) logLike(x);

p.BurnIn = 0.4000;
p.Parallel = 0;
p.ProgressBar = 1;
p.StepSize = 2;
p.ThinChain = 10;

extras{1}= problemDef;
extras{2} = problemDef_cells;% 
extras{3} = problemDef_limits;
extras{4} = controls;

tic
clc
m = gwmcmc_compile_mex(initVal,50000,p,extras);
toc

disp('debug');

ecornerplot(m,'names',paramNames);

chain = m(:,:)';

end



% function LogLike = logLike(x)
% 
% global problemDef problemDef_cells problemDef_limits controls
% 
% problemDef.fitpars = x;
% problemDef = unpackparams(problemDef,controls);
% 
% [problem,result] = reflectivity_calculation_wrapper(problemDef,problemDef_cells,problemDef_limits,controls);
% chiSq = problem.calculations.sum_chi;
% LogLike = log(exp(-chiSq/2));
% 
% end
% 
% 
% function logPrior = logPrior(m)
% 
% %global problemDef problemDef_cells problemDef_limits controls
% 
% 
% % Prior information
% %
% % Here we formulate our prior knowledge about the model parameters. Here we use
% % flat priors within a hard limits for each of the 3 model parameters.
% % GWMCMC allows you to specify these kinds of priors as logical expressions.
% 
% % e.g. logprior =@(m) (m(1)>-5)&&(m(1)<0.5) && (m(2)>0)&&(m(2)<10) && (m(3)>-10)&&(m(3)<1) ;
% 
% 
% nPars = length(m);
% try
% fitConstr = problemDef.fitconstr;
% catch
%     disp('uh oh');
% end
%     
% fitPars = m;
% 
% for i = 1:length(fitPars)
%     try
%         thisConstr = fitConstr(i,:);
%     catch
%         disp('fitconstr missing');
%     end
%     thisLogical(i) = (thisConstr(1)<m(i)) && (thisConstr(2)>m(i));
% end
% 
% logPrior = any(thisLogical);
% %logPrior = thisLogical;
% 
% end








