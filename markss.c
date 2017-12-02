#include<stdio.h>
void main()



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
 
    printf("percentage is %d\n",per  );
    printf("---------------------------------------------------\n");
 
}
