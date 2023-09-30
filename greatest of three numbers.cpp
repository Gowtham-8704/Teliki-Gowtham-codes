#include<stdio.h>
int main ( )
/* Program to find the greatest of three numbers */
{
	int a,b,c;
	printf("enter the three numbers a,b and c");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b&&a>c)
	printf("the greatest of three numbers is a");
	
	else if (b>c)
	printf("the greatest of three numbers is b");
	
	else
	printf("the greatest of three numbers is c");
	
	return 0;
}