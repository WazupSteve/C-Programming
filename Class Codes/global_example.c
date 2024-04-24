#include<stdio.h>
int a=2;
void f1()
{
	a++;
}
int main()
{
	printf("%d\n",a);
	f1();
	printf("%d",a);
	return 0;
}
