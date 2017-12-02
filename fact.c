#include <stdio.h>
int fact(int n) 
{
int a;
if (n==1)
return 1;
else
a= n*fact(n-1);
return (a);
}
void main () 
{
int n, factorial, a;
scanf ("%d",&n);
fact(n);
factorial=fact(n);
printf("factorial is %d",factorial);
}

