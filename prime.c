#include<stdio.h>
 void main()
 {
 int n,m;
 printf("enter a no. ");
 scanf("%d",&n);
 for(m=2;m<=n;m++)
 {
 if(n%m==0)
 {
 printf("the no. is not prime ");
 
 break;
 }
 if(n%m!=0)
 {
 printf("the no is prime");
 
 break;
 }
 }
 }
