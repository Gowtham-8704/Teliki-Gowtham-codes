#include<stdio.h>
int main (void)
/* C program for finding the percentage of the student given 5 subject marks */
{
	int a,b,c,d,e,x;
	printf("enter the values of a,b,c,d,e which are the marks of 5 subjects");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	x=a+b+c+d+e/5;
	/* x is the percentage of the student */
	printf("the percentage of the student is %d",x);
	
	return 0;
	
}
	
