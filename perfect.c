#include<stdio.h>
void main(){
int i;
int h;
int sum;


for(i=100;i>5;i--){
sum=1;
printf("The no is %d\n",i);
   for(h=2;h<i;h++){
   
   if(i%h==0&&h!=i){
     sum = sum +h;
     }
   }   
   printf("The sum is %d\n",sum);

}

}
