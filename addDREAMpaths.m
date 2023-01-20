% Adds the paths fo testing DREAM

dreamRoot = pwd;

dreamPaths = {...
    fullfile(dreamRoot,'functions');...
    fullfile(dreamRoot,'postProcessing')};

for i = 1:length(dreamPaths)
    addpath(dreamPaths{i});
end

