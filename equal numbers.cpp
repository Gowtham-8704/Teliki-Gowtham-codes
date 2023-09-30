#include<stdio.h>
int main ( )
/* C program for checking whether three numbers are equal or not */
{ 
    int x,y,z;
    printf("enter the three numbers x,y and z");
    scanf("%d %d %d",&x,&y,&z);
    
    if (x==y&&y==z)
    printf("the entered three numbers are equal");
    
    else 
    printf("the three numbers are not equal");
    
    return 0;
}