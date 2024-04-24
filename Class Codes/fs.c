#include<stdio.h>
int main()
{

	int i=10;
	float f=45.369;
	double d=23.568;
	char c='A';
	printf("i=%d\n",i);
	printf("i in float=%f\n",i);
	printf("i in char=%c\n",i);
	printf("i in double=%lf\n",i);
	printf("***********Float**********\n");
	printf("f=%f\n",f);
	printf("f in int=%d\n",f);
	printf("f in char=%c\n",f);
	printf("f in double=%lf\n",f);
	printf("***********character**********\n");
	printf("c=%c\n",c);
	printf("c in int=%d\n",c);
	printf("c in float=%f\n",c);
	printf("c in double=%lf\n",c);
	printf("***********octal value**********\n");
	int o=0653;
	printf("o=%o\n",o);
	printf("o in int=%d\n",o);
	printf("o in char=%c\n",o);
	printf("o in float=%f\n",o);
	printf("o in double=%lf\n",o);
	printf("***********hexadecimal**********\n");
	int h=0xF;
	printf("h=%x\n",h);
	printf("h in int=%d\n",h);
	printf("h in char=%c\n",h);
	printf("h in float=%f\n",h);
	printf("h in double=%lf\n",h);
	return 0;
}