#include<stdio.h>

long int Factori(int n); // function declared
void main()
{

  int n,i, sqr =0, ch ;
 unsigned long long factoriall = 1;
  int fact;
  do{

  printf("\nAssignment No 8\n");
  printf("\n1. Square of the number");
  printf("\n2. factorial of the number without using function");
  printf("\n3. factorial of the number with using function");
  printf("\n4. Exit");
  
  printf("Enter the choice \t ");
  scanf("%d", &ch);
  switch(ch)
  {
    case 1:   
       		 printf("\n\t ENTER THE NO.:= ");
                 scanf("%d",&n);
                 sqr=n*n;
                 printf("\n\t SQUARE OF %d is %d .",n,sqr);
		
		 break;

   
     case 3:
                printf("Enter a number: ");
       		 scanf("%d",&n);
       		 fact= Factori(n);
   		
                 printf("Factorial of %d is %d", n, fact);
		break;
		
		
     case 2:      

    		printf("Enter an integer: ");
    		scanf("%d",&n);

    		// show error if the user enters a negative integer
    		if (n < 0)
      		  printf("Error! Factorial of a negative number doesn't exist.");

		else
    		{
       			 for(i=1; i<=n; ++i)
       			 {
        		    factoriall *= i;              // factorial = factorial*i;
        		 }
       		 printf("Factorial of %d = %llu", n, factoriall);
 	        }
    		break;

    default: printf("Exit the loop\n");
                  break;
  
     }
}while(ch<4); // do

} // main


long int Factori(int n){
         int i;
         long int factorial;
         factorial =1;
         for(i=1;i<=n;i++)
         factorial=factorial*i;
         return(factorial);
    }
