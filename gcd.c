#include<stdio.h>
void main ()
{
int a, b,i;
printf("enter the no.");
scanf("%d%d",&a,&b);
for (i=1;i<=a||i<=1; i++){
if (a%i==0 && b%i==0)
printf("GCD is %d",i);

}
