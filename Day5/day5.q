i:read0`:input.txt
f:{
    vowls:"aeiou";
    strs:("ab";"cd";"pq";"xy");
    (3<=count where x in vowls)&(any x = prev x)&0=any count each ss[x;]each strs
 }
show count where f'[i]; / part1:258



/ part2
s:"qjhvhtzxzqqjkmpb"; /for testing only

wrapup:{ 
 d1:`b`str!(();x);  / initialize a dictionary for 1st function d11's iteration
 d11:{       /  function  to check 1st requirement
    x[`b],:not 0=count ss[2_x[`str];2#x[`str]];
    x[`str]:1_x[`str];
    x
 }/[{not 0=count x[`str]};d1];    

 d2:`b`str!(();x);  / initialize a dictionary for 2nd function d22's iteration
 d22:{        / function to check 2nd requirement
    x[`b],:(3#x[`str])~reverse 3#x[`str];
    x[`str]:1_x[`str];
    x
 }/[{3<=count x[`str]};d2];
 (any d11[`b])&any d22[`b]
 };

count where wrapup'[i]  / part2: 53

