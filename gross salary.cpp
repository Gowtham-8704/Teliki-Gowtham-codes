#include<stdio.h>
int main ( )
/* g= gross salary*/
/* b=basic salary*/
/* h=HRA*/
/* d=DA*/
/*t=TA*/
{
	int g,b,h,d,t,r;
	d=b*48/100;
    t=b*8/100;
/* always */ g=b+h+d+t;
    printf("enter the value of b");
    scanf("%d",&b);
    /* depending on the region the h keeps changing */
    printf("enter your region r as 1 or 2 or 3 or 4");
    scanf("%d",&r);                                            /* 1=intropolan*/
                                                               /* 2=Tier 1 */
                                                               /* 3=Tier 2 */
                                                               /* 4=Tier 3 */
    
    if(r==1)
    {h=b*27/100;
    printf("the gross salary is %d",g);
	}
	
	else if (r==2)
	{h=b*24/100;
	printf("the gross salary is %d",g);
	}
	
	else if (r==3)
	{
		h=b*16/100;
		printf("the gross salary is %d",g);
	}
	
	else 
	{ 
	   h=12*b/100;
	   printf("the gross salary is %d",g);
	}
	
	return 0;
}