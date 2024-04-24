#include<stdio.h>
//there are multiple examples here, 
//remove and add the multi-line comment only for specific execution
int main()
{
	int a=10,b=20,*p=&a, *q=&b,*t=NULL;
	printf("before swaping a=%d\t, b=%d\n",a,b);
	printf("after swaping using pointers\n");
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("using variables a=%d\t b=%d\n",a,b);
	printf("using pointers a=%d\t b=%d\n",*p,*q);
	return 0;
}
/*
int main()
{
	int a=10,b=20,*p=&a, *q=&b,*t=NULL;
	printf("before swaping a=%d\t, b=%d\n",a,b);
	printf("after swaping using pointers\n");
	t=p;
	p=q;
	q=t;
	printf("a=%d\t b=%d\n",a,b);
	printf("a=%d\t b=%d\n",*p,*q);
	return 0;
}

int main()
{
	int a=10,b=20,*p=&a, *q=&b,*t=NULL;
	printf("before swaping a=%d\t, b=%d\n",a,b);
	printf("after swaping using pointers\n");
	//*t=*p;//this is not possible, program terminates ubruptly,
	//*p=*q;//this is not possible, program terminates ubruptly
	//*q=*t;//this is not possible, program terminates ubruptly
	int d=*p; printf("d=%d\n",d);//this is possible	
	printf("a=%d\t b=%d\n",a,b);
	printf("a=%d\t b=%d\n",*p,*q);
	return 0;
}

int main()
{
	int a=10,b=20,*p=&a;
	*p=*p+5;
	(*p)++;
	printf("%d",a);
	return 0;
}
*/