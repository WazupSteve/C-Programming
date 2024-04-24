#include<stdio.h>
// 2-d array display using 1-D pointers
int main()
{
	int a[4][2]={{1,2},{3,4},{5,6},{7,8}};
	int (*p)[2]=a;//or &a[0],but &a[0][0] gives you warning as initialization fo incompatible pointer type
	printf("\nwhat is this (*p)[col_size]? --> its a 1-D pointer used for 2-D arrays in this example \n");
	printf("adress using p[row_index]\n %p\t%p\t%p\t%p\n",&a[0],&a[1],p[2],&p[3][0]);// prints address of each row same as &p[0],&p[1]
	printf("\n");
	printf("value of each row's 1st column using *p[row_index]\n %d\t%d\t%d\t%d\n",*p[0],*p[1],*p[2],a[3][0]);//gives value of 1st columns of each row
	//but *p[i][j] will give error.. so only *p[i] to fetch 1st column of each row
	printf("\n");
	printf("\n");
	printf("printing the addresses of 2-D array elements i.e a[4][2] using 1-D pointers i.e (*(p+i)+j)  same as &a[i][j]\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
			printf("%p\t",(*(p+i)+j));// same as &a[i][j]
		printf("\n");
	}
	printf("\n");
	printf("printng the values of 2-D array array elements i.e a[4][2] using \n*(*(p+i)+j) or *(*(a+i)+j)  or a[i][j]  or p[i][j]  or i[a][j]  or i[p][j]\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t",i[p][j]);//same as   *(*(p+i)+j)    *(*(a+i)+j)    
		}
		printf("\n");
	}
	printf("\nprinting the values of 2-D array array elements i.e a[4][2] using (*)p[index_value]\n");
	printf("for this a single for-loop with total elemnt count is used i.e total elements are 4*2=8\n\n");
	printf("\n***remember!!! writing *p[row_index] is different from writing (*p)[col_index]******\n\n");
	for(int i=0;i<8;i++)	
	{
			printf("address =%p value=%d\n",&(*p)[i],(*p)[i]);//same as (*(a+i)+j), *(*(a+i)+j)
			
			//printf("value=%d\n",*p[i]);//prints only 1st column values becoze its *p[row_index]:-remember to change for loop condition to i<4 for this
	}
	printf("\n");
	
	//********************************************************
	//printf("%d",(*p)[0][0]);//error: subscripted value is neither array nor pointer nor vector
	return 0;
}