#include<stdio.h>
int trail_zero(int n){
 int count = 0;
 int i;
 for(i=5; n/i>=1; i=i*5){
  count = count + (n/i);
  }
  return count;
 }
 int main(){
  int t, num, zeroes;
  scanf("%d", &t);
  while(t--){
   scanf("%d", &num);
   zeroes = trail_zero(num);
   printf("%d\n", zeroes);
   }
   return 0;
   }  
