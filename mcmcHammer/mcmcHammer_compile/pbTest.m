function pbTest

clc

pct = 0;
textBar(pct);

pct = 0.5;
textBar(pct)

for i = 1:100
    textBar(i/100);
    drawnow
    pause(0.1);
end


end
