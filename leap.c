#include<stdio.h>
int main()
{
int a;
printf("Enter the year to be checked\n");
scanf("%d",&a);
if(a%4==0)
{
printf("Entered year is a leap year\n");
}
else
{
printf("Entered year is not a leap year\n");
}
}
