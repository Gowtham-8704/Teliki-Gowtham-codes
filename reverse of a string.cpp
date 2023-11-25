/* program to find the reverse of a string */
#include<stdio.h>
int main ( )
{
	int i,j,t;
	i=0;
	char str[40];
	printf("enter the string");
	gets(str);
	
	while(str[i]!='\0')
	{
		i++;
	}
	for(j=0;j<i/2;j++)
	{
		t=str[j];
		str[j]=str[i-j-1];
		str[i-j-1]=t;
	}
	printf("the final string after reversing is %s",str);
	
	return 0;
}