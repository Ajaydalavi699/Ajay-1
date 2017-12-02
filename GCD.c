#include<stdio.h>
int long gcd(int a,int b);
int main()
{
int a,b;
printf("enter value a,b");
scanf("%d%d",&a,&b);
//printf("%d",gcd(a,b));
gcd(a,b);
}
int long gcd(int a,int b)
{
while(a!=b)
{
if(a>b)
a=a-b;
if(b>a)
b=b-a;
}
printf("GCD=%d",a);
}
