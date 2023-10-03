#include<stdio.h>
int main ( )
/* C program to find whether the triangle is scalene,iscosceles or equilateral given the sides of the traingle */
{
	int a,b,c;
	/* a,b,c are the sides of the triangle */
	printf("enter the values of a,b and c ");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a==b&&b==c)
	printf("the triangle is equilateral");
	
	else if (a==b&&b!=c||b==c&&c!=a||a==c&&c!=a)

    else 
    printf("the given triangle is scalene");
    
    return 0;
    
}
