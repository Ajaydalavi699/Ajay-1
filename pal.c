#include<stdio.h>
void main()

{
int n,rev=0,temp;


printf("enter a no. to be checked whether it is a palindrome number or not \n");
scanf("%d",&n); 

temp=n;
while(temp!=0)
{

rev=rev*10;
rev=rev+temp%10;
temp=temp/10;

}

if(n==rev)

printf("%d is a palindrome no.\n",n);
else
printf("%d is not a palindrome no.\n",n);


}
