#include<stdio.h>
#include<math.h>
int main ( )
/* C program for finding the square root of a given number */
{ 
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    /* b is the square root of a */
    b=sqrt(a);
    printf("the square root value of a is %d",b);
    
    return 0;
}