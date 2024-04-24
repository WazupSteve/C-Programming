#include<stdio.h>
//Iterative Linear Search and Binary Search
void read(int b[],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);

}
void ls(int c[],int n, int keys)
{
	for(int i=0;i<n;i++)
	{
		if(c[i]==keys)
		{
			printf("key element found at position %d",i+1);
			return;
		}
	}
	printf("key element not found\n");
}

int bs(int a[],int n,int key)
{
	int l=0,h=n-1;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(key==a[mid])
			return mid;
		else if(key>a[mid])
			l=mid+1;
		else
			h=mid-1;
	}
	return -1;
}

int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
	read(a,n);
	printf("enter the key element to be searched\n");
	int key;scanf("%d",&key);
	printf("linear search\n");
	ls(a,n,key);
	printf("binary search\n");
	int pos=bs(a,n,key);
	if(pos==-1)
		printf("key not found\n");
	else
		printf("key found at index postion=%d\n",pos);
	return 0;
}