//ISA Question probably
//Will the program throw the error?
//ANS: No
#include<stdio.h>
#define MAX 100
int main()
{
	#ifdef MAX
		int a=MAX;
		printf("%d\n",a); //100
	#endif
	#undef MAX //Undefine the macro 
	#ifdef MAX //No execution as Macro is undefined
		int b=MAX
		printf("%d\n",++b)  //Syntax and symantics is not being checked only if it is success then syntax and symantics matter
		//int b=MAX;
		//printf("%d\n",++b);
	#else
		int b=1;
		printf("%d\n",b);	//1
	#endif
	printf("a value outside ifdef=%d\n",a); //100
	//printf("MAX value outside ifdef=%d\n",MAX); //Error as undefined
	return 0;
}