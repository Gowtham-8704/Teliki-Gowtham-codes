#include<stdio.h>
int main ( )
/* program to get the given pattern as output */
{ 
  int i,j,s,n;
  printf("enter the value of n");
  scanf("%d",&n);
  
  for (i=0;i<n;i++)
  {
  	for (s=0;s<n-1-i;s++)
  	printf("  ");
  	
  	for (j=0;j<2*i+1;j++)
  	{
	  printf("* ");
}
printf("\n");
  }
}
