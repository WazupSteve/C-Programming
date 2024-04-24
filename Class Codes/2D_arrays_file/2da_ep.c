#include<stdio.h>
//using single element pointer to point 2-D arrays
int main()
{
	int a[3][2]={{1,2},{3,4},{5,6}};
	int *p=&a[0][0]; //declare a pointer and assign starting address of 2-D array
	
	printf("printing array row & column address using single element pointers\n");
	printf("using single for loop for 4*3=12 values of array a[4][3]\n");
	for(int i=0;i<6;i++)// runs for 4*3=12 values i.e a[4][3]
		printf("%p\t%d\n",(p+i),*(p+i));
	printf("*****printing 2D array address and value using &a[i][j], and a[i][j] respectively******\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
			printf("address=%p value=%d\t",&a[i][j],a[i][j]);
		printf("\n");
	}
	
	printf("\n");
	//------or you can print the values in the below way as well---------
	printf("printing array row & column address and their values using single element pointers\n");
	printf("with 2 for loops. logic is = p+current row index*(#total colums)+current column index\n");
	for(int i=0;i<3;i++)// runs for rows 0 to 3 i.e 4 rows
	{
		for(int j=0;j<2;j++)// runs for 0 to 2 i.e 3 columns
		{
			printf("%p = %d   ",(p+(i*2)+j),*(p+(i*2)+j));// using #column value i.e 3 
		}
		printf("\n");
	}
	return 0;
}