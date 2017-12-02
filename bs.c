#include<stdio.h>
void main()
{
int a[3][3],b[3][3];
int i,j;
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
scanf("%d%d",&a[i][j],&b[i][j]);
}
}
for(i=1;i<=3;i++)
{
printf("\n");
for(j=1;j<=3;j++)
{
printf("\t%d",a[i][j]+b[i][j]);
}
}
}
