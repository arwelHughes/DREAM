
function [p,log_p,Best,SSE] = ratCompDensity_scaled(x,MCMCPar,Measurement,Extra)

% This function computes the density of each x value
SSE = Inf;
Best = Inf;

% Check whether to store the output of each model evaluation (function call)
% if Measurement.N > 0
%     if strcmp(MCMCPar.modout,'Yes')
%         % Create initial ModPred
%         fx = NaN(Measurement.N,size(x,1));
%     end
% end

% coder.varsize('p',[Inf 1],[1 0]);
% coder.varsize('log_p',[Inf 1],[1 0]);
% p = [1];
% log_p = [1];

% Loop over the individual parameter combinations of x

%coder.varsize('fx',[Inf Inf],[1 1]);
%fx = [];
p = zeros(MCMCPar.seq,1);
log_p = zeros(MCMCPar.seq,1);

limits = Extra.problemDef.fitconstr;

for ii = 1:MCMCPar.seq

    thisX = x(ii,:);

    for i = 1:length(thisX)
        unscaledX(i) = (thisX(i)*(limits(i,2)-limits(i,1)))+limits(i,1);
    end

    SSE = ratFunc(unscaledX,Extra);

    MCMCPar.Best(MCMCPar.Best>SSE)=SSE;
    Best= MCMCPar.Best;

    % And retain in memory
    p(ii,1) = -(SSE/2);
    log_p(ii,1) = - Measurement.N/2 * log(SSE);
end


end

% function [f,er] = ratFunc(x,E)
% % Dummy test func
%     f = 1; er = 1;
% 
% 
% end