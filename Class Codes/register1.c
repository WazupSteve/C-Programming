#include<stdio.h>
//register int c=10;
void f1(register int a);
int main()
{
	int a=10;
	f1(a);
	return 0;
	
}
void f1(register int a)
{
	a++;printf("a=%d",a);
}