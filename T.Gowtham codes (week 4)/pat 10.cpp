#include<stdio.h>
int main ( )
/* program for getting the given pattern as output */
{ 
 int i,j,s,n;
 printf("enter the value of n");
 scanf("%d",&n);
  
  for (i=0;i<n;i++)
  { 
   for (j=0;j<i+1;j++)
   {
   	printf("* ");
   }
   printf("\n");
  }
for (i=0;i<n;i++)
{
	for (j=0;j<n-i;j++)
	{
	printf("* ");
}
printf("\n");
}
}
