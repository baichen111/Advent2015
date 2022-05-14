input:"ckczppom";
d:`decode`input!("0";input,string 0)
/ brute force iteration
f:{n:1+"I"$8_x[`input];    / function to iterate until find hash with starting "00000"
 parsed:5#raze string md5 x[`input];
 x[`decode]:parsed;
 x[`input]:(8#x[`input]),string[n];
 x};

first -2#f\[{not "000000"~x[`decode]};d]    / the second last input is the answer: 117946
