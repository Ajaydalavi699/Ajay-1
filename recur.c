#include<stdio.h>
int fact(int);



 void main(){
 int n,ans;
 printf("enter a number \n");
 scanf("%d",&n);
 ans=fact(n);
 printf("factorial=%d\n",ans);
 }
 
  int fact(int x){
  
  int f;
  if(x==0)
  {
  return 1;
  }
   else {
   f=x*fact(x-1);//recursion
   return f;
   }
   }
