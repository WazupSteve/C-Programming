#include<stdio.h>
//void read_2d(int n;int [][n],int m,int n);//(int m, int n,int [][n]
void write_2d(int n;int [][n],int m,int n);
void read_2d(int m,int n,int [m][n]);
int main()
{
	int m,n;
	printf("enter the no.of rows & columns\n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	//read_2d(a,m,n);
	read_2d(m,n,a);
	write_2d(a,m,n);
	return 0;
}
//void read_2d(int n;int a[][n],int m,int n)
void read_2d(int m,int n,int a[m][n])
{
	printf("enter the array elements\n");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
}
void write_2d(int n;int a[][n],int m,int n)
{
	printf("entered array elements are\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%p=a[%d][%d]=%d\t",(*(a+i)+j),i,j,*(*(a+i)+j));
		}
		printf("\n");
	}
}
