//************************************example 4***********************************
#include<stdio.h>
enum ch
{
	a='A',b='B',c='F',
};

int main()
{
	enum ch d;
	printf("size of character enum is =%lu\n",sizeof(enum ch));
	d=a;
	printf("value check=%c\n",d);
	for(int i=d;i<=c;i++)
	{
		printf("value=%c\n",i);// replace it with %c to get the character
	}
	return 0;
}