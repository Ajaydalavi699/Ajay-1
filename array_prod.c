#include<stdio.h>
void main (){
int i;
float a[i],b[i],prod[i];
printf("enter the numbers\n");
for (i=0;i<5;i++){
scanf("%f%f",&a[i],&b[i]);
}
for (i=0;i<5;i++){
prod[i]=a[i]*b[i];
}
for (i=0;i<5;i++){
printf("product of numbers is %f\n",prod[i]);
}
}
