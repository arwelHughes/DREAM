function [outCR,L] = GenCR(MCMCPar,pCR)
% Generates CR values based on current probabilities

% How many candidate points for each crossover value?
L = multrnd_compile(MCMCPar.seq * MCMCPar.steps,pCR); 
L2 = [0 cumsum(L)];

% Then select which candidate points are selected with what CR
r = randperm(MCMCPar.seq * MCMCPar.steps);

CR = zeros(MCMCPar.seq * MCMCPar.steps,1);
coder.varsize('CR',[Inf 1],[1 0]);

% Then generate CR values for each chain
for zz = 1:MCMCPar.nCR
    
    % Define start and end 
    i_start = L2(1,zz) + 1; i_end = L2(1,zz+1);
    
    % Take the appropriate elements of r
    idx = r(i_start:i_end);
    
    % Assign these indices MCMCPar.CR(zz)
    CR(idx,1) = zz/MCMCPar.nCR;
    
end

% Now reshape CR
outCR = reshape(CR,MCMCPar.seq,MCMCPar.steps);