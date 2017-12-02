#include<stdio.h>
void main()
{
	int marks;
	printf("Enter your marks:");
	scanf("%d",&marks);

	if(marks>100)
	printf("Not valid marks");

	else if(marks>=80)
	printf("your grade is A");

	else if(marks>=70)
	printf("your grade is B");

	else if(marks>=50)
	printf("your grade isC");

	else if(marks>=35)
	printf("your garde is D");

	else
	printf("your grade is E");
}
