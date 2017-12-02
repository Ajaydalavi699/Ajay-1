/* Print the Marksheet of Students of B-tech 1st Year*/
/* variable description*/
  /* rl -> Roll No
   s1 -> Subject1 Marks
   s2 -> Subject2 Marks
   s3 -> Subject3 Marks
   t  -> total
   per -> percentage
   nm -> name of student*/
 /*....................................................................................................................*/ 



#include<stdio.h>
void main()
{
  
  int rl=0,s1=0,s2=0,s3=0;
  float per=0,t=0;
  char nm[100];
 
  
  
  printf("Enter the Roll No: ");
  scanf("%d",&rl);
  fflush(stdin);
  printf("Enter Name: \n");
  scanf("%s",nm);
  
  printf("Enter Three Subject Marks :\n");
  scanf("%d%d%d",&s1,&s2,&s3);
  
  t=s1+s2+s3;
  per=t/3;
 printf(".............................................\n");
 
 
  
    printf("\tUniversity of DR.BABASAHEB AMBEDKAR\n");
    printf("\t\tLONERE,RAIGAD.\n");
    printf("\n\n");
    printf("\tRoll No: %d \t  Name : %s\n",rl,nm);
    printf("---------------------------------------------------\n");
    printf("\tSubject             Max      Min            Obt.Marks\n");
    printf("---------------------------------------------------\n");
    printf("\tM1                100      36              %d\n",s1);
    printf("\tcomputer p.       100      36              %d\n",s2);
    printf("\tBET               100      36              %d\n",s3);
    printf("\t---------------------------------------------------\n");
    printf("\t  Total :         %d\n",s1+s2+s3);
 
    printf("\tpercentage is %d\n",((s1+s2+s3)/3)  );
    printf("---------------------------------------------------\n");
    if(per>=80 )
    printf("...............FIRST CLASS.....................\n");
    
    if(per>=60&&per<80)
    printf("...............SECOND CLASS.....................\n");
    
    else
    printf("...............THIRD CLASS.....................");
    
}
/*........................................**********************.......................................................*/
