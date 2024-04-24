#include<stdio.h>
void read_2d(int n;int (*p)[n],int,int n);
void write_2d(int n;int (*p)[n],int,int n);
int main()
{
	int m,n;
	printf("enter the no.of rows & columns\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	int (*p)[n]=a;
	read_2d(a,m,n);
	write_2d(a,m,n);
	printf("display array elements using pointers\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%p=a[%d][%d]=%d\t",(*(p+i)+j),i,j,*(*(p+i)+j));//p[i][j]
		}
		printf("\n");
	}
	
}
void read_2d(int n;int (*p)[n],int m,int n)//int a[][n]
{
	printf("enter the array elements\n");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&p[i][j]);
}
void write_2d(int n;int (*p)[n],int m,int n)
{
	printf("entered array elements are\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%p=a[%d][%d]=%d\t",(*(p+i)+j),i,j,*(*(p+i)+j));
		}
		printf("\n");
	}
}