/* program to compare two strings and check whether they are equal or not */
#include<stdio.h>
int main ( )
{
	int i,j,p;
	i,j=0;
	char str1[40],str2[40];
	printf("enter string 1");
	gets(str1);
	printf("enter string 2");
	gets(str2);
	  
	  while(str1[i]!='\0')
	  {
	   i=i++;
	  }
	  
	  while(str2[i]!='\0')
	  {
	  	j=j++;
	  }
	  
	  if(i!=j)
	  {
	  	printf("the two strings are not equal");
	  }
	  
	  else
	  {
	   for (p=0;str1[p]!='\0';p++)
	   {
	   	if(str1[p]=str2[p])
	    {
	    	printf("the two strings are  equal");
		}
	
	    else 
	    { 
	     printf("the two strings are not equal");
		}
	   }
	  }
	  
	  return 0;
}