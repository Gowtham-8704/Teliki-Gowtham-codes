/* Program to find the length of the given string without using strlen function */
#include<stdio.h>
int main ()
{
	int l,i;
	char str[40];
	printf("enter the string");
	gets(str);
	printf("%s",str);
	/* let l be the length of the string */
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("the length of the string is %d",i-1);
	
}