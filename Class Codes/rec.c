#include<stdio.h>
// addition,subtraction,multiplication of 
// 2 numbers using recurssions, 
//factorial of a given number (n>0)
//binary search and Linear Search using recurssions
int sum(int a,int b)
{
	if(b==0)
		return a;
	return 1+sum(a,b-1);
}
int diff(int a,int b)
{
	if(b==0)
		return a;
	return diff(a-1,b-1);
}

int mult(int a,int b)
{
	if(b==1)
		return a;
	else
		return a+mult(a,b-1);
}
int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
void read(int n;int a[n],int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
int BinRec(int a[],int l,int h,int key)
{
	int mid;
	if(l>h)	
		return -1;
	mid=(l+h)/2;
	if(a[mid]==key)
		return mid;
	else if (key>a[mid])
		return BinRec(a,mid+1,h,key);
	else
		return BinRec(a,l,mid-1,key);
	
}
int LSRec(int a[],int i,int n,int key)
{
	if (i==n)	
		return -1;
	if(a[i]==key)	
		return i;
	else
		return LSRec(a,i+1,n,key);
}
int main()
{
	int n;
	/*int a=5,b=3;
	printf("%d + %d = %d\n",a,b,sum(a,b));
	printf("%d - %d = %d\n",a,b,diff(a,b));
	printf("%d * %d = %d\n",a,b,mult(a,b));
	printf("enter a number to find its factorial\n");
	scanf("%d",&n);
	printf("factorial = %d\n",fact(n));*/
	printf("enter the array size\n");scanf("%d",&n);
	int a[n];printf("enter the array elements\n");
	read(a,n);
	printf("enter the key element to be searched\n");
	int key;scanf("%d",&key);
	printf("***********binary Search using Recurssions\n");
	int pos=BinRec(a,0,n-1,key);
	if(pos!=-1)
		printf("key element found at index position %d\n",pos);
	else
		printf("key element not found\n");
	printf("***********Linear Search using Recurssions\n");
	pos=LSRec(a,0,n,key);
	if(pos!=-1)
		printf("key element found at index position %d\n",pos);
	else
		printf("key element not found\n");
	return 0;
}