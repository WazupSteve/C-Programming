#include<stdio.h>
int add(int x, int y)
{
	return x+y;
}

int mul(int x, int y)
{
	return x*y;
}

int calc(int (*fnp)(int, int),int x, int y)
{
	return fnp(x,y);

}
int main()
{
	printf("entered inside main function\n");
	printf("sum=%d",calc(add,1,2));
	printf("sum=%d",calc(mul,1,2));
	return 0;
}