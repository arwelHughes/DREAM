% GWMCMC_COMPILE_SCRIPT   Generate MEX-function gwmcmc_compile_mex from
%  gwmcmc_compile.
% 
% Script generated from project 'gwmcmc_compile.prj' on 08-Feb-2023.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.TargetLang = 'C++';
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'gwmcmc_compile'.
ARGS = cell(1,1);
ARGS{1} = cell(4,1);
ARGS{1}{1} = coder.typeof(0,[Inf Inf],[1 1]);
ARGS{1}{2} = coder.typeof(0);
ARGS_1_3 = struct;
ARGS_1_3.BurnIn = coder.typeof(0);
ARGS_1_3.Parallel = coder.typeof(0);
ARGS_1_3.ProgressBar = coder.typeof(0);
ARGS_1_3.StepSize = coder.typeof(0);
ARGS_1_3.ThinChain = coder.typeof(0);
ARGS{1}{3} = coder.typeof(ARGS_1_3);
ARGS_1_4 = cell([1 4]);
ARGS_1_4_1 = struct;
ARGS_1_4_1.contrastBacks = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.contrastBacksType = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.TF = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_1.resample = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.dataPresent = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.numberOfContrasts = coder.typeof(0);
ARGS_1_4_1.geometry = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_1.contrastShifts = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.contrastScales = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.contrastNbas = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.contrastNbss = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.contrastRes = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.backs = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.shifts = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.sf = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.nba = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.nbs = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.res = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.params = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.numberOfLayers = coder.typeof(0);
ARGS_1_4_1.modelType = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_1.contrastCustomFiles = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.fitpars = coder.typeof(0,[1 Inf],[0 1]);
ARGS_1_4_1.otherpars = coder.typeof(0,[Inf  1],[1 0]);
ARGS_1_4_1.fitconstr = coder.typeof(0,[Inf  2],[1 0]);
ARGS_1_4_1.otherconstr = coder.typeof(0,[Inf  2],[1 0]);
ARGS_1_4{1} = coder.typeof(ARGS_1_4_1);
ARGS_1_4_2 = cell([1 14]);
ARG_1 = coder.typeof(0,[1 2]);
ARGS_1_4_2{1} = coder.typeof({ARG_1}, [1 1]);
ARG_2 = coder.typeof(0,[Inf  5],[1 1]);
ARGS_1_4_2{2} = coder.typeof({ARG_2}, [1 1]);
ARG_3 = coder.typeof(0,[1 2]);
ARGS_1_4_2{3} = coder.typeof({ARG_3}, [1 1]);
ARG_4 = coder.typeof(0,[1 2]);
ARGS_1_4_2{4} = coder.typeof({ARG_4}, [1 1]);
ARG_5 = coder.typeof(0);
ARGS_1_4_2{5} = coder.typeof({ARG_5}, [1 1]);
ARG_6 = coder.typeof(0);
ARGS_1_4_2{6} = coder.typeof({ARG_6}, [1 1]);
ARG_7 = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_2{7} = coder.typeof({ARG_7}, [1 1]);
ARG_8 = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_2{8} = coder.typeof({ARG_8}, [1 1]);
ARG_9 = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_2{9} = coder.typeof({ARG_9}, [1 1]);
ARG_10 = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_2{10} = coder.typeof({ARG_10}, [1 1]);
ARG_11 = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_2{11} = coder.typeof({ARG_11}, [1 1]);
ARG_12 = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_2{12} = coder.typeof({ARG_12}, [1 1]);
ARG_13 = coder.typeof('X',[1 Inf],[0 1]);
ARGS_1_4_2{13} = coder.typeof({ARG_13}, [1 1]);
ARG_15 = coder.typeof('X',[Inf Inf],[1 1]);
ARG_14 = coder.typeof({ARG_15}, [1 3]);
ARGS_1_4_2{14} = coder.typeof({ARG_14}, [1 1]);
ARGS_1_4{2} = coder.typeof(ARGS_1_4_2,[1 14]);
ARGS_1_4{2} = ARGS_1_4{2}.makeHeterogeneous();
ARGS_1_4_3 = struct;
ARGS_1_4_3.params = coder.typeof(0,[1 2]);
ARGS_1_4_3.backs = coder.typeof(0,[1 2]);
ARGS_1_4_3.scales = coder.typeof(0,[1 2]);
ARGS_1_4_3.shifts = coder.typeof(0,[1 2]);
ARGS_1_4_3.nba = coder.typeof(0,[1 2]);
ARGS_1_4_3.nbs = coder.typeof(0,[1 2]);
ARGS_1_4_3.res = coder.typeof(0,[1 2]);
ARGS_1_4{3} = coder.typeof(ARGS_1_4_3);
ARGS_1_4_4 = struct;
ARGS_1_4_4.para = coder.typeof('X',[1 6]);
ARGS_1_4_4.proc = coder.typeof('X',[1 9]);
ARGS_1_4_4.display = coder.typeof('X',[1 4]);
ARGS_1_4_4.tolX = coder.typeof(0);
ARGS_1_4_4.tolFun = coder.typeof(0);
ARGS_1_4_4.maxFunEvals = coder.typeof(0);
ARGS_1_4_4.maxIter = coder.typeof(0);
ARGS_1_4_4.populationSize = coder.typeof(0);
ARGS_1_4_4.F_weight = coder.typeof(0);
ARGS_1_4_4.F_CR = coder.typeof(0);
ARGS_1_4_4.VTR = coder.typeof(0);
ARGS_1_4_4.numGen = coder.typeof(0);
ARGS_1_4_4.strategy = coder.typeof(0);
ARGS_1_4_4.Nlive = coder.typeof(0);
ARGS_1_4_4.nmcmc = coder.typeof(0);
ARGS_1_4_4.propScale = coder.typeof(0);
ARGS_1_4_4.nsTolerance = coder.typeof(0);
ARGS_1_4_4.calcSld = coder.typeof(0);
ARGS_1_4_4.repeats = coder.typeof(0);
ARGS_1_4_4.nsimu = coder.typeof(0);
ARGS_1_4_4.burnin = coder.typeof(0);
ARGS_1_4_4.resamPars = coder.typeof(0,[1 2]);
ARGS_1_4_4.updateFreq = coder.typeof(0);
ARGS_1_4_4.updatePlotFreq = coder.typeof(0);
ARGS_1_4_4_checks = struct;
ARGS_1_4_4_checks.params_fitYesNo = coder.typeof(0);
ARGS_1_4_4_checks.backs_fitYesNo = coder.typeof(0);
ARGS_1_4_4_checks.shifts_fitYesNo = coder.typeof(0);
ARGS_1_4_4_checks.scales_fitYesNo = coder.typeof(0);
ARGS_1_4_4_checks.nbairs_fitYesNo = coder.typeof(0);
ARGS_1_4_4_checks.nbsubs_fitYesNo = coder.typeof(0);
ARGS_1_4_4_checks.resol_fitYesNo = coder.typeof(0);
ARGS_1_4_4.checks = coder.typeof(ARGS_1_4_4_checks);
ARGS_1_4{4} = coder.typeof(ARGS_1_4_4);
ARGS{1}{4} = coder.typeof(ARGS_1_4,[1 4]);
ARGS{1}{4} = ARGS{1}{4}.makeHeterogeneous();

%% Invoke MATLAB Coder.
codegen -config cfg gwmcmc_compile -args ARGS{1}

