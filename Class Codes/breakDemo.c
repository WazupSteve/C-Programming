//C program to demonstrate the usage of break

#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
			break;//breaks from loop when i=2

		printf("%d ",i);
	}
	printf("\n");
	return 0;
}
/*
Output is 1*/
