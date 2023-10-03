#include<stdio.h>
int main ( )
/* C program to print the even numbers from 1 to given number x */
{
	int x;
	printf("enter the value of x");
	scanf("%d",&x);
	
	for (int i=1;i<=100;i++)
	{if (i%2==0)
	printf("%d",i);
	}
}
