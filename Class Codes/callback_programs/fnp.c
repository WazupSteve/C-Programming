#include<stdio.h>
void display()
{
	printf("you have entered inside display function\n");
}
int main()
{
	printf("you have entered inside main function\n");
	//display();
	//*******function pointer implementation******
	void (*fnp)();//declaration of function pointer
	fnp=display;
	fnp();
	return 0;
}