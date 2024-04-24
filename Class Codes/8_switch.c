// classify triangle
#include <stdio.h>

int main()
{
	int a; int b; int c;
	int count = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a == b) ++count;
	if(b == c) ++count;
	if(c == a) ++count;
	switch(count)
	{
		case 0: printf("scalene\n"); break;
		case 3: printf("equi\n"); break;
		case 1: printf("iso\n"); break;
	}
}












