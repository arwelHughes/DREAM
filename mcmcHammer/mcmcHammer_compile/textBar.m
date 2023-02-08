function textBar(pct)

persistent pCr init lastLength

pct = pct*100;

totalBarLength = 20;
lastLength = 20;

if isempty(init)
    init = 1;
    pCr = '';
else
    pCr = repmat('\b',1,length(totalBarLength)-1);
end


newBarLogic = ones(1,totalBarLength);

newLength = floor((pct/100) * totalBarLength);
newBarLogic(1:newLength) = 0;


str = '';
not = '* ';
done = '. ';
for i = 1:totalBarLength
    thisBarPoint = newBarLogic(i);
    if thisBarPoint
        ch = done;
    else
        ch = not;
    end
    str = [str ch];
end

del = repmat('\b',1,(lastLength*2)+14);

message = sprintf('pct: %g [%s] \n',pct,str);
lastLength = length(message);
%fprintf(del);
fprintf(message);

end