function [out,SSE] = ratFunc(params, extra)

% RAT wrapper function for DREAm_zs..

% Get the parameters needed for RAT
problemDef = extra.problemDef;
problemDef_cells = extra.problemDef_cells;
problemDef_limits = extra.problemDef_limits;
controls = extra.controls;


problemDef.fitpars = params;
problemDef = unpackparams(problemDef,controls);

[problem,result] = reflectivity_calculation_wrapper(problemDef,problemDef_cells,problemDef_limits,controls);


% disp('debug');
SSE = problem.calculations.sum_chi;


% Return the actual curve.... will have to think about how to do
% multi-contrasts...
out = result{1}{:}(:,2);

end