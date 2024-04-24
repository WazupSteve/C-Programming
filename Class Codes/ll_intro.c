#include<stdio.h>
//example of structure inside another structure
/*
typedef struct Complex
{
	int a;
	struct Simple
	{
		int b;
		float f;
	}si;
}co;

int main()
{
	//co cmplx={.a=10,.si.b=40,.si.f=30.456};
	co cmplx;
	cmplx.a=10;cmplx.si.b=20;cmplx.si.f=30.456;
	printf("a=%d\n",cmplx.a);
	printf("b=%d\n",cmplx.si.b);
	printf("f=%f\n",cmplx.si.f);
	return 0;
}
*/

/*
// example of a integer pointer inside a structure
typedef struct Complex
{
	int a;
	char *p;
	int *q; //int *q=&a; cannot be done, because a has no memory created
}co;

int main()
{
	co cmplx={.a=10, .p="welcome"};
	//cmplx.p="welcome";//throws warning & terminates, but *cmplx.p="welcome"(*p="welcome")is only possible through assignment shown in the above line
	cmplx.q=&cmplx.a;// so assign the address after creating structure variable cmplx
	printf("a=%d\n",cmplx.a);
	printf("*p=%s\n",cmplx.p);
	printf("*q=%d\n",*cmplx.q);
	return 0;
}
*/


/*
//example to create a self pointer to a structure
typedef struct node
{
	int a;
	struct node *ptr;
}n;

int main()
{
	n s;
	printf("size=%d",sizeof(struct node));
	s.a=100;
	s.ptr=&s;
	printf("address of s=%p\n",&s);
	printf("a=%d\n",s.a);
	printf("*ptr=%p\n",s.ptr);
	return 0;
}
*/