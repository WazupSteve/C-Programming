#include<stdio.h>
int add(int x, int y, int z)
{
	return x+y+z;
}

int mul(int x, int y, int z)
{

	return x*y*z;
}

int main()
{

	printf("you have entered inside main function\n");
	int x,y,z;
	printf("enter the values of x, y, nad z\n");
	scanf("%d%d%d",&x,&y,&z);
//*************normal function calls************************************
	printf("calling addition function\n");
	int asum=add(x,y,z);
	printf("result of addition is %d",asum);
	printf("\ncalling multiplication function\n");
	int msum=mul(x,y,z);
	printf("result of addition is %d",msum);
//******************use of function pointers**********************************
	printf("\n\n**************using function pointers*************************\n");
	int (*cal)(int,int,int)=add;// function pointer declaration
	//cal=add;
	printf("\nsize of function pointer=%d",sizeof(cal));
	printf("\naddress of function pointer=%p",&cal);
	printf("\naddress of addition function=%p",cal);
	printf("\ncalling addition function using function pointers\n");
	//int casum=cal(x,y,z);
	printf("result of addition is %d",cal(x,y,z));//casum
	cal=mul;
	printf("\naddress of function pointer=%p",&cal);
	printf("\naddress of multiplication function=%p",cal);
	printf("\ncalling multiplication function using function pointers\n");
	//int msum=cal(x,y,z);
	printf("result of multiplication is %d",cal(x,y,z));//msum
	return 0;
}