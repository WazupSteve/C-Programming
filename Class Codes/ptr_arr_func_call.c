#include<stdio.h>

void read(int n,int *ap[n])
{

	for(int i=0;i<n;i++)
		scanf("%d",ap[i]);

}

void write(int n,int *ap[n])
{
	for(int i=0;i<n;i++)
		printf("%d\n",*ap[i]);
}

int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],*ap[n];
	printf("maping array address to array of pointers\n");
	for(int i=0;i<n;i++)
	{
		ap[i]=&a[i];
	}
	printf("enter the array elements\n");
	read(n,ap);
	printf("entered the array elements are\n");
	write(n,ap);
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}