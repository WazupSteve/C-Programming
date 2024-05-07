//binary search program using FILE*
#include<stdio.h>
/*int binary_search(int n;int a[n],int n,int ele)//non-recursive
{
	int pos=-1,low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==ele)
			return mid;
		else if(ele<a[mid])	
			high=mid-1;
		else
			low=mid+1;
	}
	return pos;
}*/

int rbs(int a[],int low,int high,int ele)//recursive binary search
{
	int mid;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==ele)
			return mid;
		else if(ele<a[mid])
			return rbs(a,low,mid-1,ele);
		else
			return rbs(a,mid+1,high,ele);
	}
	else
		return -1;
}
	
int main()
{
	int n;printf("enter the array size\n");scanf("%d",&n);
	int a[n];
	FILE *fp=fopen("array_elements.txt","r");
	for(int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
	printf("enter the element to be searched\n");
	int ele,pos;
	scanf("%d",&ele);
	printf("***performing binary Search*****\n");
	pos=binary_search(a,n,ele);
	//pos=rbs(a,0,n-1,ele);
	if(pos>=0)
		printf("element found at position %d",pos);
	else
		printf("element not found\n");
	return 0;
}
