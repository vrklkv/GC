int: v;
int: e;
array[1..e,1..2] of int: E; 
array[0..v-1] of var 0..400: c;

constraint forall(i in 1..e)(c[E[i,1]]!=c[E[i,2]]);
constraint max(c)<=400;
constraint c[0] == 0;
solve minimize max(c);

output [show(max(c)+1), "\n"];
output [show(c[i])++" "| i in 0..v-1];
