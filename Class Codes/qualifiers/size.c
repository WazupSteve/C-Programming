#include<stdio.h>
#include<limits.h>
int main()
{
	unsigned short int a; short int b;
	printf("size of short int=%d\n",sizeof(short int));
	printf("max range of short int=%d\n",SHRT_MAX);
	printf("min range of short int=%d\n",SHRT_MIN);
	printf("unsigned range of short int=%u\n\n",USHRT_MAX);

	printf("size of int=%d\n",sizeof(int));
	printf("max range of int=%d\n",INT_MAX);
	printf("min range of int=%d\n",INT_MIN);
	printf("unsigned range of int=%u\n\n",UINT_MAX);

	printf("size of long int=%d\n",sizeof(long int));
	printf("max range of int=%d\n",LONG_MAX);
	printf("min range of int=%d\n",LONG_MIN);
	printf("unsigned range of int=%u\n\n",ULONG_MAX);

	printf("size of long long int=%d\n",sizeof(long long int));
	printf("max range of int=%lld\n",LLONG_MAX);
	printf("min range of int=%lld\n",LLONG_MIN);
	printf("unsigned range of int=%llu\n",ULLONG_MAX);

	for(int i=0;i<=255;i++)
		printf("%c",i);
	printf("\n\nprinting signed character\n");
	for(int i=-128;i<=127;i++)
		printf("%c",i);
}
