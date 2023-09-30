#include<stdio.h>
#include<math.h>
int main ( )
/* C program for finding the cube of a number */
{
	int a,b;
	printf("enter the value of a");
	scanf("%d",a);
	/* b is the cube of a */
	b=pow(a,3);
	printf("the value of cube of a is %d",b);
	
	return 0;
}