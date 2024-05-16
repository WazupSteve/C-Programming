#include<stdio.h>
int main()
{
	printf("date is=%s\n",__DATE__); // date in MMM DD YYYY
	printf("time is=%s\n",__TIME__); // time in HH:MM:SS
	printf("file name is=%s\n",__FILE__);	//gives the current file name
	printf("current line number is=%d\n",__LINE__);	//gives the current line number
	if(__STDC__)		//to check whether the compiler compiles with the ANSII standard or not
		printf("compiled with ANSII standard\n");
	return 0;
}