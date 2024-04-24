#include <stdio.h>
int sum_factors(int n);
int main()
{
	int number,sum;
	scanf("%d",&number);
	sum=sum_factors(number);
	printf("Sum of factors of a number %d is %d\n",number,sum); 
	return 0;
}
int sum_factors(int n)
{
	int sum=0;
	for(int i=1;i<=n;++i)
	{
		if(n%i==0)
{
	sum = sum+i;
}
}
return sum;
}
