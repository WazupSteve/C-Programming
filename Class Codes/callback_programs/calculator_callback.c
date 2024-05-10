#include<stdio.h>
int add(int x, int y, int z)
{
	return x+y+z;
}

int mul(int x, int y, int z)
{

	return x*y*z;
}
int calculator(int (*fnp)(int , int , int ), int a, int b, int c)// or another variable name can also be used for fnp or left blank
{

	return fnp(a,b,c);
}
int main()
{

	printf("you have entered inside main function\n");
	int x,y,z;
	printf("enter the values of x, y, nad z\n");
	scanf("%d%d%d",&x,&y,&z);

	printf("\n\n**************implementing callback*************************\n");
	//remember how the function pointer is created
	// int (*fnp)(int, int, int)=add;
	//int sum=fnp(x,y,z);//calling the add function using function pointer
	//int sum=calculator(add,x,y,z);//calling function for user-defined callback function
	printf("sum is=%d",calculator(add,x,y,z));//sum
	
	
	return 0;
}