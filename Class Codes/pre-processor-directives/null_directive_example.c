#include<stdio.h>
//demonstration of using null directive with the help of conditional directives
#define MIN 30
int main()
{
	#ifdef MIN
		# 
	#else
		#define MIN 10
		printf("new MAX i defined\n") //compilation error is ignored incase of 
		//conditional compilation where else part becomes false here, so any junk
		//added here will not give any error
	#endif
	printf("MIN value=%d",MIN);
	return 0;
}
	