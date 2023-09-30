#include<stdio.h>
int main ( )
/* C program for finding the percentage and grade of a student according to his marks in five subjects */
/* p=physics marks */
/* c=chemistry marks */
/* b=biology marks */
/* m= mathematics marks */
/* C= computer marks */
/* P=percentage*/
/* g= grade*/
{
	int p,c,b,m,C,P;
	printf("enter the values of p,c,b,m,C");
	scanf("%d %d %d %d %d",&p,&c,&b,&m,&C);
	
	/* always*/ P=p/5+c/5+b/5+m/5+C/5;
	printf("the percentage of the student is %d",P);
	
	if (P>=90)
	printf("the grade of the student is A");
	
	else if (90<=P>=80)
	printf( "the grade of the student is B");
	
	else if (80<=P>=70)
	printf("the grade of the student is C");
	
	else if (70<=P>=60)
	printf("the grade of the student is D");
	
	else if (60<=P>=40)
	printf("the grade of the student is E");
	
	else
	printf("the grade of the student is F");
	
return 0;
}
	
	
