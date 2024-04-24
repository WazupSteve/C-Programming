#include<stdio.h>
enum one
{
	red, blue, green,
};
int main()
{
	enum one
	{
		red, blue=4, green,
	};
	printf("%d",blue);
	return 0;
}