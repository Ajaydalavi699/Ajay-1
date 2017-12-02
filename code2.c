#include<stdio.h>
int fact(int m);
int main()
{
	int i,j,k,n,m,no,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		no=fact(m);
		for(j=no;j>=0;j/=10)
		{
			k=j%10;
			if(k==0)
			c++;
		}
		printf("\n%d",c);
		c=0;
	}
	return 0;
}
int fact(int m)
{
	if(m==1)
	return 1;
	else
	return(m*fact(m-1));
}
 
