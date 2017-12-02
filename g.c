//program to find the greatest of all the three numbers



#include<stdio.h>


void main()
{   

int x,y,z;

printf("enter three numbers of your choice\n");

scanf("%d %d %d",&x,&y,&z);

if(x>y&&x>z)
 
{

printf("the great of all is %d\n",x);
}
else if(y>z&&y>x)
{
printf("the great of all is %d\n",y);

}
else 
{
printf("the great of all is %d\n",z);
}
}
