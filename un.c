#include<stdio.h>
void main(){
int i;
printf("Enter the length of the number you want to input:");
scanf("%d",&i);
float hell[i];
int sequ[i];
float sequ2[i];
int c;
printf("Enter the no line by line:\n");
for(c=0;c<i;c++){

scanf("%f",&hell[c]);


}
int seq;

printf("Trying for AP:\n");
for(seq=0;seq<i-1;seq++){
sequ[seq]=hell[seq+1]-hell[seq];
printf("%d\t",sequ[seq]);
}
for(seq=0;seq<i-2;seq++){
if(sequ[seq]==sequ[seq+1]){

}
else{
printf("Not");
break;
}

}
printf(" AP");



double sequu;
float gpp[i];
printf("\n");
printf("Trying for GP:\n");
for(seq=0;seq<i-1;seq++){
gpp[seq]=hell[seq+1]/hell[seq];
printf("%f\t",gpp[seq]);
}

for(seq=0;seq<i-2;seq++){
if(gpp[seq]==gpp[seq+1]){

}
else{
printf("Not");
break;
}


}


printf(" GP\n");








}
