#include<stdio.h>
int main()
{
auto int a=30;
{
auto int a=20;
{
auto int a;
printf("First time the value of abc is %d\n",a);
}
printf("Second time the value of abc is %d\n",a);
}
printf("Third time the value of abc is %d\n",a);
return 0;
}
