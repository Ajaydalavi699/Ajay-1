 #include<stdio.h>
 void main (){
 float avg, sum=0;
 int i, mark[5];
 printf("enter the number\n");
 for(i=0;i<5;i++){
 scanf("%d",&mark[i]);
 }
 for(i=0;i<5;i++){
 sum= sum + mark [i];
 }
 avg=sum/5;
 printf("The sum of numbers is %f and sum is %f",avg, sum);
 }
