#include<stdio.h>
int pal_check(int c)
{
	int rem,sum=0;
	while(c)
	{
		rem=c%10;
		c=c/10;
		sum=sum*10+rem;
	}
	return sum;
}