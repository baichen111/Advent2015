
/ e.g. x:"111221"
LookAndSay:{ 
    g:(distinct';count')@\:(where not x=prev x) cut x;
    raze {string[x],y}'[last g;first g]
 };

ans1:LookAndSay/[40;"1113122113"];   / part1: 360154




ans2:LookAndSay/[50;"1113122113"] / part2: 5103798