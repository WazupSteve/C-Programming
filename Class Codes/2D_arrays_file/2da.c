#include<stdio.h>
// introduction to declaration and initialization of 2-D arrays
int main()
{
	int a[][2]={1,2,30,4,5,6};// declaration and initialization of 2-D arrays
	int m=3,n=2,b[0][3];// 2-D array b will be allocated zero bytes
	printf("2d arrays\n");
	for(int i=0;i<m;i++)//3 rows
	{
		for(int j=0;j<n;j++)//2 columns
		{
			printf("%p=%d\t",&a[i][j],a[i][j]);// printing address and values
		}
		printf("\n");
	}
	printf("size of a=%d\n",sizeof(a));//24 bytes
	printf("address of a=%p\n",&a);// address of 2-D array a[][2]
	printf("size of b=%d\n",sizeof(b));// 0 bytes. because b[0][3] --has zero rows
	printf("address of b=%p",&b);// some junk address, in here it shows the a[][2] adress itself
	return 0;
}
