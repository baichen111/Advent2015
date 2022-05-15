i:flip ("S S J";" ") 0: `:input.txt;
t:flip `start`end`distance!flip i;
kt:kt uj `end`start xcol kt:2!t;

perm:{(1 0#x){raze(1 rotate)scan'x,'y}/x}  /permutation function:https://code.kx.com/phrases/math/
p:perm distinct raze t[`start`end];

Distance:{   / Distance: calculate total distance for each route
    c::0;   / c is used to save accumulative distance
    {c+:value kt[2#x];1_x}\[{2<=count x};x];
    c
 };

min ans:Distance'[p];   / part1: 251

max ans   / part2: 898


