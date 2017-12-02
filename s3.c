#include<stdio.h>
void main()
{
int a[10],b[10],i;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
printf("array [a]");
}
for(i=0;i<10;i++)
{
b[i]=a[i];
printf("%d%d",i,b[i]);
}
}
