#include<stdio.h>
int main ( )
/* C program for conversion of days into years */
{ 
    int a,b;
    /* a is the number of days */
	printf("enter the value of a");
	scanf("%d",&a);
	/* 1year has 365 days in general */
	b=a/365;
	printf("no of years for given number of days is %d",b);
	
	return 0;
}