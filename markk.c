/* Print the Marksheet of Students of B-tech 1st Year*/
/* variable description*/
  /* rl -> Roll No
   s1 -> Subject1 Marks
   s2 -> Subject2 Marks
   s3 -> Subject3 Marks
   t  -> total
   per -> percentage
   nm -> name of student*/
  



#include<stdio.h>
void main()
{
  
  int rl,s1,s2,s3,t;
  float per;
  char nm[100];
 
  
  
  printf("Enter the Roll No: ");
  scanf("%d",&rl);
  fflush(stdin);
  printf("Enter Name: \n");
  scanf("%s",nm);
  
  printf("Enter Three Subject Marks :\n");
  scanf("%d%d%d",&s1,&s2,&s3);
  
  t=s1+s2+s3;
  per=(t/300)*100;
  if(per>=75)
 printf("sir you have got 1st class score");
  else if( per>=60)
 printf("sir you have got 2nd class score");
else if( per>=48)
printf("sir you have got 3rd class score");
     else if (per>=36)
    printf("sir you have very less score");
   else
    printf("oops..!!   Fail\n");
   
    printf("\t\tUniversity of DR.BABASAHEB AMBEDKAR\n");
    printf("\n\n");
    printf("Roll No: %d \t  Name : %s\n",rl,nm);
    printf("---------------------------------------------------\n");
    printf("Subject             Max      Min            Obt.Marks\n");
    printf("---------------------------------------------------\n");
    printf("M1                100      36              %d\n",s1);
    printf("computer p.       100      36              %d\n",s2);
    printf("BET               100      36              %d\n",s3);
    printf("---------------------------------------------------\n");
    printf("  Total :         %d\n",t);
 
    printf("percentage is %f\n",per  );
    printf("---------------------------------------------------\n");
 
}
