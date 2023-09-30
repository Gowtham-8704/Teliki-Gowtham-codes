#include<stdio.h>
int main ( )
/* C program performimg all the arithmetic operators */
{
int a,b,c,d,e,f;
c=a+b;/*Addition operator*/
d=a-b;/*Subtraction operator*/
e=a*b;/*Multiplication operator*/
f=a/b;/*Division operator*/
printf("enter the two values a and b");
scanf("%d %d",&a,&b);
printf("the sum of two numbers is %d",c);
printf("the subtraction of two numbers is %d",d);
printf("the multiplication of two numbers is %d",e);
printf("the division of two numbers is %d",f);

return 0;
}
