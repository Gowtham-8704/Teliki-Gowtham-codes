#include<stdio.h>
int main ( )
/* C program for converting a given number in kilometer to different conversions */
/* kilometer =km */ 
/* meter=m */
/* centimeter=cm */
/* milli meter = mm */
{
	int a,b,c,d;
	/* a is a number in km*/
	printf("enter the value of a");
	scanf("%d",&a);
	/* 1km=1000m;1m=1km/1000*/
	b=a/1000;
	printf("the value of a in meter is %d",b);
	/*1m=100cm;1cm=1m/100*/
	c=b/100;
	printf("the value of a in cm is %d",c);
	/*1cm=10mm,1mm=1cm/10*/
	d=c/10;
	printf("the value of a in millimeter is %d",d);
	
	return 0;
}