#include<stdio.h>
#include"ud.h"
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	int sum=pal_check(n);
	if(sum!=n)
		printf("not a palindrome\n");
	else
		printf("palindrome\n");
	return 0;




}
