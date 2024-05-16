#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	short int a[5]={1,2,3,4,5}; //works good
	short int A;
	int b;
	long int c;
	float d;
	unsigned char e;
	printf("size of short int array=%lu\n",sizeof(a));
	printf("size of short int A=%lu\n",sizeof(A));
	printf("size of int b=%lu\n",sizeof(b));
	printf("size of long int c=%lu\n",sizeof(c));
	printf("maximum value that can be stored in the following qualifiers\n");
	printf("unsigned int max range=%u\n",UINT_MAX);
	printf("signed int max range=%d\n",INT_MAX);
	printf("signed int min range=%d\n\n",INT_MIN);

	printf("unsigned short int max range=%u\n",USHRT_MAX);
	printf("signed short int max range=%d\n",SHRT_MAX);
	printf("signed short int min range=%d\n\n",SHRT_MIN);

	printf("unsigned long int max range=%lu\n",ULONG_MAX);
	printf("signed long int max range=%ld\n",LONG_MAX);
	printf("signed long int min range=%ld\n\n",LONG_MIN);

	printf("unsigned long long int max range=%llu\n",ULLONG_MAX);
	printf("signed long long int max range=%lld\n",LLONG_MAX);
	printf("signed long long int min range=%lld\n\n",LLONG_MIN);

	printf("unsigned char max range=%u\n",UCHAR_MAX);
	printf("char min range=%d\n",CHAR_MIN);
	printf("char max range=%d\n\n",CHAR_MAX);

	//printf("unsigned float max range=%f\n",UFLT_MAX);//error
	printf("signed float max range=%e\n",FLT_MAX);
	printf("signed float min range=%e\n\n",FLT_MIN);
	return 0;
}