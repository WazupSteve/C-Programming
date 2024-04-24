#include<stdio.h>
//register int i=10;	//cannot give register for global variable
void f1(register int i)	//register int i can be given as dummy parameter
{
	register int j=20;// yes, can be given for local variable
	printf("j=%d\n",j);
	printf("i=%d\n",++i);
}
int main()
{
	register int i=10;
	printf("%d\n",i);
	f1(i);
	printf("%d\n",i);
	return 0;
}