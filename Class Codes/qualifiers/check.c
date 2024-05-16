#include<stdio.h>
int a=10;
int main()
{
	extern int a;
	int b=a;
	b=a;
	printf("%d",b);
}