#include<stdio.h>
int main ( )
/* c program to find the maximum,minimum,average of numbers read in array */
{
	int a[5],i,n,m,l,avg,sum;
	printf("enter the value of n");
	scanf("%d",&n);
    printf("enter array elements");	
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	/* let the maximum of the numbers be m */
	/* let us consider a[0] as m*/
	m=a[0];
	
	for (i=0;i<n;i++)
	{
		if(m<a[i])
		{
			m=a[i];
		}
		
		
	}
	printf("the max of  numbers is %d",m);
	/* let the least of numbers be l */
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(l>a[i])
		{
			l=a[i];
		}
	}
	printf("the min of numbers is %d",l);
    /*let a be the avg of numbers */
    sum =a[0];
    for (i=1;i<n;i++)
    {
    	sum=sum+a[i];
	}
	avg=sum/5;
	printf("the avg of numbers is %d",avg);
	return 0;
}
    
    
    
