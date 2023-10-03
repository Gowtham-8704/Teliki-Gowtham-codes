#include<stdio.h>
int main ( )
/* C program to find the day given the number as input */
{
	int x;
	/* x is a number */                  /* 7=Sunday */
	                                    /* 1= Monday */
	                                    /* 2=Tuesday */
	                                    /* 3=wednesday */
	                                    /* 4=Thursday */
	                                    /* 5=Friday */
	                                    /* 6=Saturday */
	printf("enter the value of x");
	scanf("%d",&x);
	printf("%d", x);
	
	
	if (x==1)
	printf("the day is monday");
	
	else if (x==2)
	printf("the day is tuesday");
	
	else if (x==3)
	printf("the day is wednesday");
	
	else if (x==4)
	printf("the day is thursday");
	
	else if (x==5)
	printf("the day is friday");
	
	else if (x==6)
	printf("the day is saturday");
	
	else
	printf ("the day is sunday");
	
	return 0;

}
