#include<stdio.h>
int main ( )
/* C program for finding what type of triangle it is given the sides of triangle */
/* a,b,c are the sides of the traingle */
{
	int a,b,c;
	printf("enter the three values a,b and c");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a==b&&b==c)
	printf("the traingle is equilateral");
	
	else if (a==b&&b!=c||b==c&c!=a||a==c&&c!=b)
	printf("the traingle is isosceles");
	
	else 
	printf ("the traingle is scalene");
	
	return 0;

	
}