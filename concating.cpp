/* program to concat two strings without using functions */
#include<stdio.h>
int main ( )
{
	int i,j;
	i=0;j=0;
	char str1[40],str2[40];
	printf("enter the string1");
	gets(str1);
	printf("enter the string2");
	gets(str2);
	
	while(str1[i]!='\0')
	{
	   i=i++;
	}
	for(j=0;str2[j]!='\0';j++)
	{
		str1[i+j]=str2[j];
	}
	printf("the string1 after concating with string2 is %s",str1);
	
	return 0;
}