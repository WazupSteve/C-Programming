#include<stdio.h>
void f1(int a,int b);
int main()
{
	auto int a=10;
	int b=20;
	f1(a,b);
	printf("value a=%d, value b=%d\n",a,b);
	return 0;
}
void f1(int a,auto int b)//cannot pass auto int as formal parameter
{
	auto int i=5,j=10;
	a=a+i;printf("inside function call, the value a=%d\n",a);
	b=b+j;printf("inside function call, the value b=%d\n",b);
}
