#define sio <stdio.h> //New change made create a short macro
#define ud "#include_example.h"   //to define a macro for the user-defined header file
#include ud
#include sio
int main()
{
	printf("checking the working of #define macro\n");
	printf("max range of unsigned int=%u",UINT_MAX);
	return 0;
}