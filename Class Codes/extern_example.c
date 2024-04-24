/*#include<stdio.h>

void f1()
{
	extern int i;//gives undefined reference, because the power of i stays local to int main
	printf("%d\n",i);
}
int main()
{
	int i;	//just extern i gives warning and says it will be converted to int
	f1();
	//i++;
	printf("%d",i);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	extern int i;
	printf("value=%d",++i);
	return 0;
}
int i=30;
*/

/*
#include<stdio.h>
int i=40;
void f1()
{
	extern int i; //global variable being used as an external variable
	printf("under function f1, the value i=%d\n",++i);
}

int main()
{
	extern int i;//global variable being used as an external variable
	printf("inside main, the value i=%d\n",i);
	f1();
	printf("2nd time inside main, the value i=%d\n",i);
	return 0;
}

*/

#include<stdio.h>
void f1(extern int i)// cannot specify the storage class as extern in called function
{
	extern int i;//redeclaration, if call be value, and undefined reference if int i=10 is declared in int main() function
	printf("%d",i);
}
int main()
{
	int i=10;
	f1(i);
	printf("%d",i);
	return 0;
}


/*
#include<stdio.h>
int i=10;
void f1()
{
	extern int i;//global variable can be identified as extern variabl even inside user-defined functions
	printf("value=%d\n",++i);
}
int main()
{

	extern int i;i++;//global variable can be identified as external variable in main() function
	printf("i value=%d\n",i);
	f1();
	return 0;
}
*/
