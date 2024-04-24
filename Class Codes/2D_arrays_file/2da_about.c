//different ways of 2d-array initialization
#include<stdio.h>
int main()
{

	//int a[4][2]={{1,2},{3,4},{5,6},{7,8},{9,10}};//outofbound initialization-shows warning
	//int a[][2]={1,2,3,4,5,6};//depending on the columns specified, no.of.eleemnts for each row is decided
	//int a[4][2]={{1,2},{3,4}};//partial array initialization-remaining positions are filled with 0
	int a[4][2]={{1},{2},{3},{4}};//takes each element for 1st column of every row
	for(int i=0;i<sizeof(a)/8;i++)//if beyond row size is given, then it shows junk value for that index
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
	return 0;
}