#include<stdio.h>
int main ( )
/* c program to get the given pattern as output */
{ 
  int i,j,s,n;
  printf("enter the value of n");
  scanf("%d",&n);
  
  for (i=0;i<n;i++)
  { 
  for(s=0;s<i;s++)
  printf("  ");
  for(j=0;j<n-i;j++)
  { 
  printf("* ");
  }
  printf("\n");
  
  }
}

