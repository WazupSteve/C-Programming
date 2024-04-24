#include<stdio.h>
/*void swap(int a, int b)
{
	printf("called swap function\n");
	int temp=a;
	a=b;
	b=temp;
	printf("swapped values inside function\n");
	printf("a=%d\t b=%d\n",a,b);
	
}
int main()
{
	int a=10,b=20;
	printf("before swaping a=%d\t b=%d\n",a,b);
	printf("calling swap function from main() function\n");
	swap(a,b);
	printf("control returned from swap function inside main()\n");
	printf("after swaping a=%d\t b=%d\n",a,b);
	return 0;
}
*/

void swap(int *p, int *q)
{
	printf("called swap function\n");
	int temp=*p;
	*p=*q;
	*q=temp;
	printf("swapped values inside function\n");
	printf("a=%d\t b=%d\n",*p,*q);
	
}
int main()
{
	int a=10,b=20,*p=&a,*q=&b;
	printf("before swaping a=%d\t b=%d\n",a,b);
	printf("calling swap function from main() function\n");
	swap(p,q);
	printf("control returned from swap function inside main()\n");
	printf("after swaping a=%d\t b=%d\n",a,b);
	printf("after swaping a=%d\t b=%d\n",*p,*q);
	return 0;
}