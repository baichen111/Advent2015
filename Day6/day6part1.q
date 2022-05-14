i:read0 `:input.txt;
/ pre-process input text
i:{ssr[x;"through";""]}each i;
i:{ssr[x;"turn off";"off"]}each i;
i:{ssr[x;"turn on";"on"]}each i;
t:flip ("*JJ JJ";",") 0: {ssr[x;" ";","]}each i;

/ part 1
m:1000 1000#0;  / 1000 by 1000 matrix with 0
cal:{  
    xr:y[1]+til 1+y[3]-y[1]; / x-axis range
    yr:y[2]+til 1+y[4]-y[2]; / y-axis range
    idx:(cross/)(xr;yr);  / a list of coordinate positions at which the light will change
    val::(0 1)y[0]~"on";
    b::"toggle"~y[0];            / check if instruction is "toggle"
    {v:$[b;`long$not .[x;y];val]; / if instruction is "toggle",then toggle it, otherwise val
     .[x;y;:;v]}/[x;idx]        / the initial x is m matrix
 };


mm:cal/[m;t]; / final matrix
count where 1=raze mm  / part1: 400410
 




