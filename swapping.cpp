#include<stdio.h>
int main ( )
/* C program for swapping of two numbers */
{
	int a,b,c,d;
	printf("enter the values of a and b");
	scanf("%d %d",&a,&b);
	c=a;
	d=b;
	printf("the value of a after swapping is %d",d);
	printf("the value of b after swapping is %d",c);
	
	return 0;
}
