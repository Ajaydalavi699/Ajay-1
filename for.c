#include <stdio.h>
void main()
{
int n,fact=1;
int a,i=1;
printf("enter value of n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
fact=fact*i;
}
printf("%d",fact);
a=n*n;
printf("sqaure of the no.=%d",a);
}
