#include<stdio.h>
void main(){
int a,b,comp;
printf("enter values of a and b\n");
scanf("%d %d ",&a,&b);
printf("before swapping a=""%d" "b=%d",a,b);
comp=a;
a=b;
b=comp;
printf("after swapping a=%d b=%d",a,b);


}
