/* program to check whether a given string is palindrome or not */
#include<stdio.h>
int main ( )
{
	int i,j;
	i=0;
	char str[40];
	printf("enter the string");
	gets(str);
	
	while(str[i]!='\0')
	{
		i=i++;
	}
	if(for(j=0;j<i/2;j++))
	{
		str[j]=str[i-1-j];
		printf("the given string is palindrome");
	}
	
	else
	{
		printf("the given string is not a palindrome");
	}
}