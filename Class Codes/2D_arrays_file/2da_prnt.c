#include<stdio.h>
//initialization and printing of 2-D array using array name
int main()
{
	int a[4][3]={{10,20,30},{40,50,60},{70,80,90},{100,110,120}};
	//printf("%p",(*(a+0)));
	printf("address of the array a[4][3]\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%p\t",&a[i][j]);
			// prints address  of 2-D array using "array name" 
		}
		printf("\n");
	}
	printf("\nvalues stored inside the array a[4][3]\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			// prints values of 2-D array using array[index i][index j] 
		}
		printf("\n");
	}
	printf("%d\n",*(*(a+1)+2));
	printf("%d\n",*(a[1]+2));
	printf("%d\n",*(a[0]+5));
	printf("%d\n",a[1][2]);
	printf("%d",a[1]);
	fflush(stdout);// just to clear the standard output buffer
	printf("\n");
	for(int i=0;i<4;i++)					// runs for 4 rows
	{
		printf("row %d address=%p\t",i,*(a+i));		//&a[i],*(a+i),(a+i)
		printf("row %d column values =\t",i);
		for(int j=0;j<3;j++) 				// runs for 3 columns
			printf("%d\t",*(*(a+i)+j));
			// prints values of 2-D array using base address with i and j
		printf("\n");
	}
	return 0;
}