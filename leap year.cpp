#include<stdio.h>
int main ( )
/* C program to find whether a given year is leap year or not */
{
	int x;
	/* x is a year */
	printf("enter the value of x");
	scanf("%d",&x);
	if (x%4==0&&(x%400==0||x%100!=0))
	printf("x is a leap year");
	
	else 
	printf("x is not a leap year");
	
	return 0;
}