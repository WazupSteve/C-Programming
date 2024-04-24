/*#include<stdio.h>
int i=5;	//cannot specify auto int i here in global declaration
void f1(int i)	//cannot specify auto(storage class) int i here
{
	//auto int i=3;//cannot redeclare that is in the calling parameter
	i++;
}
int main()
{
	auto int i=9;
	printf("i=%d\n",i);
	f1(i);
	printf("i=%d",i);
	return 0;
}
*/
/*
#include<stdio.h>
int a=5;
int main()
{

	int a=2;
	printf("%d",a);
	return 0;
}
*/