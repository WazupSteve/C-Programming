#include<stdio.h>
#pragma warn -rvl // hide return value warning
#pragma warn -par //hide parameter never used warning
//#pragma warn -rch //hide unreachable code warning

int f1()	//-rvl : to hide the warning of not returning any value
{
	printf("not returning any value\n");
	//return;
}

int f2()	//-par: to hide the warning of not accepting the parameter passed
{
	printf("not reciving the passed parameter in function f2\n");
	return 5;
}

int f3()	//-rch : to hide the warning of not reachable codes
{
	printf("\nentered inside function f3\n");
	return 2;
	printf("trying to reach this statement after return statement\n");
}

int main()
{
	printf("return value of function f1=%d\n",f1());
	printf("f2 not designed to accept parameter=%d",f2(3));
	printf("tyring to fetch non reachable code of f3=%d",f3());
	return 0;
}
	
	
	