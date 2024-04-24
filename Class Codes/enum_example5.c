//************************************example 5***********************************
#include<stdio.h>
enum ch
{
	a="Apple",b="Mango",c="Orange",// not an integral constant, compiler throws error
};
int main()
{
	enum ch d;
	printf("size of character enum is =%lu\n",sizeof(d));
	return 0;
}