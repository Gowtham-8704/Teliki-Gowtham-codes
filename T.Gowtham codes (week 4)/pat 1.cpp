#include<stdio.h>
int main ( )
/* program to get the output as given pattern */
{
	int i,j,n;
	printf("enter the value of n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
