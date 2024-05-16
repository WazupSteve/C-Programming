#include<stdio.h>
//C-I: Variable is constant 
/*
int main()
{
	const int i=10;
	//i++; //Error increment of read-only variable 'i'
	int *p=&i;// discards 'const qualifier 
	++*p;//the value of i can be updated using pointers, but not directly
	printf("i value through p=%d\n",*p);
	//i+=10;//this gives an error because const variable acnnot be updated directly
	printf("i value using i=%d\n",i);
}
*/

//C-II: Pointer is constant
/*
#include<stdio.h>
int main()
{
	int a=10,b=20;
	const int *p=&a;
	printf("%d\n",*p);
	//(*p)++;//can increment only address not the value, this throws error, but not *p++;
	//*p=a+5;// error: assignment to read-only location
	printf("%p\n",p);
	p++;
	printf("%p\n",p);//address after incrementation
	p=&b;
	printf("%d\t %p\n",*p,p);
	printf("%d",a);
}
*/


#include<stdio.h>
int main()
{
	int a[]={10,20,30};
	const int *p=a;
	for(int i=0;i<3;i++)
	{
		//printf("%d\t",*p++);//or use *(p+i)//increment the pointer address and then fetch the value
		printf("%d\t",*(p+i));
	}
	return 0;
}