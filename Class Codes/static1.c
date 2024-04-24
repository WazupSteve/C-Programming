#include<stdio.h>
static int j=100;
void f1()
{
	static int i=10;//can be initialized, but by default it is 0
	printf("value of i=%d\n",i++);
}
int main()
{
	f1();
	f1();
}