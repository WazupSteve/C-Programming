#include<stdio.h>
//bubble sort using arrays, and
//bubble sort using pointers
//remove the comments in int main() to check for sorting using pointers
void read(int b[],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);

}
void display(int b[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d\n",b[i]);

}
void bubblesort(int a[],int n)
{
	for(int i=0;i<=n-2;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void bubblesort_ptr(int *p,int n)
{
	for(int i=0;i<=n-2;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{
			if(p[j]>p[j+1])
			{
				int temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}

int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
	read(a,n);
	printf("*******Bubble sort ********\n");
	bubblesort_ptr(a,n);

	/*printf("*******Bubble sort using pointers********\n");
	bubblesort_ptr(a,n);*/

	display(a,n);
	return 0;
}
