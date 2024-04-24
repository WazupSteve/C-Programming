//C program to demonstrate the usage of continue
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
			continue;//print is skipped when i=2, i=4

		printf("%d ",i);
	}
	printf("\n");
	return 0;
}

/*
Output:
1 3 5
*/
