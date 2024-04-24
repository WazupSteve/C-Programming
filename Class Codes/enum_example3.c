//***************************example 3**************************************
#include<stdio.h>
int main()
{
	enum Days{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
	
	int a[8]={ [Sunday]=10, [Monday]=20,[Tuesday]=30, [Wednesday]=40,[Thursday]=50,[Friday]=60,[Saturday]=70 };
	printf("a[%d]=%d\n",Sunday,a[Sunday]);
	
	return 0;
}