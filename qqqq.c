/*PROGRAM TO FIND SUM OF DIGITS OF A GIVEN NUMBER*/

#include<stdio.h>
void main()
{


/*declaring variables*/

int i,n;
int sum=0, temp;

 printf("enter a number to find sum of its digits\n");
    scanf("%d",&n);
 
 while(n!=0){
 temp=n%10;
 sum+=temp; 
 n=n/10;
 }   
  printf("sum of the digits of a given number is%d\n",sum);
  
  
 
     
   
   
   
     
}

/*.....................................................................................................................*/
