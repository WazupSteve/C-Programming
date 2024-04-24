#include<stdio.h>
int main()
{
	int n;	
	printf("enter n\n");
	scanf("%d",&n);
	for(int i=1;n;i++)
	{
		if(i%2==0)
			printf("%d\n",i);
		if(i>=n)
			break;
			
	}
	printf("next set of statements\n");
	return 0;
}
	