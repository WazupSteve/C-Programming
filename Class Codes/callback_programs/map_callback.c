#include<stdio.h>
int n;
void add(int *ele)
{
	 *ele=*ele+1;
}
void callc(void (*fp)(int*),int a[])
{
	for(int i=0;i<n;i++)
		fp(&a[i]);
}
int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("map function imitation to add 1 to every array element using callback\n");
	callc(add,a);
	printf("updated array elements are\n");
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}