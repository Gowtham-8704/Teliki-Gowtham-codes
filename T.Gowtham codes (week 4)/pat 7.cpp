#include<stdio.h>
int main ( )
/* program to get the given pattern of stars as output */
{ 
int i,j,s,n;
printf("enter the value of n");
scanf("%d",&n);

for (i=0;i<n;i++)
{
	for(s=0;s<n-i-1;s++)
	printf(" ");
	for(j=0;j<i+1;j++)
	{ 
	printf("* ");
	}
	printf("\n");
}
}
