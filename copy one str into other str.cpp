/* program to copy one string into another */
#include<stdio.h>
int main ()
{
	int i=0;
	char str1[40],str2[40];
	printf("enter the string1");
	gets(str1);
	for (i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("after copying the string 1 into string 2,string 2 is given by %s",str2);
	
}