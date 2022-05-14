i:"I"$"x" vs' read0`:input.txt
f:{
    a:x*y;b:y*z;c:x*z;
    min(a;b;c)+2*a+b+c
  }
show sum f ./:i   / part1: 1586300

show sum {(x*y*z)+sum 2*2#asc l:(x;y;z)} ./:i / part 2: 3737498