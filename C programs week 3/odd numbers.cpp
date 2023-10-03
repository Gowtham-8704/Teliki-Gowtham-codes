#include<stdio.h>
int main ( )
/* C program  for printing all the odd numbers from 1 to given x */
{ int x; 
printf ("enter the value of x");
scanf("%d",&x);                       /* x is a number */
 for ( int i=1;i<=x;i++)
{ if (i%2!=0)
printf("%d",i);
}
 
}
