//ISA Question
#include<stdio.h>
#define MAX 10
int main()
{
	#ifdef MAX
		#  //This is a null directive, if block cannot be empty wheras else block can be 
			//Do nothing						
	#endif
	#undef MAX
	#ifndef MAX //If not defined
		#define MAX 30
		int b=MAX;
		printf("b=%d\n",b);
	#else
		int b=MAX;
		printf("b=%d",b);
	#endif
	//printf("%d",MAX);
	return 0;
}