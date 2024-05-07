#include<stdio.h>
int Linear_search(int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		//printf("entered if\n");
		if(a[i]==key)
			return i;
	}
	//printf("end for loop\n");
	return -1;
}
int main()
{
	int n;printf("enter the array size\n");scanf("%d",&n);
	int a[n];printf("accepting the array elements\n");
	FILE* fp=fopen("ae.txt","r");
	for(int i=0;i<n;i++)
		fscanf(fp,"%d",&a[i]);
	fclose(fp);
	printf("accepted array elements are:\n");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nenter the key element to be searched\n");
	int key;scanf("%d",&key);
	printf("\n**** Linear Search**********\n");
	int pos=Linear_search(a,n,key);
	if(pos>=0)
		printf("key element found at position %d\n",pos);
	else
		printf("key element not found\n");
	return 0;
}
	