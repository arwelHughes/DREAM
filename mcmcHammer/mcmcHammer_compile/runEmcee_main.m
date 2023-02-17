

problemDefInput = r1ToProjectClass('defaultProject.mat');
%problemDefInput = r1ToProjectClass('original_dspc_bilayer.mat');


controls = controlsDef();

% Split it up into the constituents....
[problemDef,problemDef_cells,problemDef_limits,priors,controls] = RatParseClassToStructs_new(problemDefInput,controls);

p.BurnIn = 0.4000;
p.Parallel = 0;
p.ProgressBar = 1;
p.StepSize = 2;
p.ThinChain = 10;

[outProblemStruct,problem,result,bayesResults] = runEmcee(problemDef,problemDef_cells,problemDef_limits,controls,priors,p);

result = parseResultToStruct(problem,result);

if isfield(outProblemStruct,'fitpars')
    result.bestFitPars = outProblemStruct.fitpars;
end


result = mergeStructs(result,bayesResults);


[~,fitNames] = packparams(problemDef,problemDef_cells,problemDef_limits,controls.checks);
result.fitNames = fitNames;

outProblemDef = RATparseOutToProjectClass(problemDefInput,outProblemStruct,problem,result);

