// classify triangle as scalene,equilateral or isosceles

#include <stdio.h>

int main()
{
	int a; int b; int c;
	int count = 0;
	scanf("%d %d %d", &a, &b, &c);
	if(a == b) ++count;
	if(b == c) ++count;
	if(c == a) ++count;
	if(count == 0) printf("scalene Triangle\n");
	if(count == 3) printf("Equilateral Triangle\n");
	if(count == 1) printf("isosceles Triangle\n");
	return 0;
	
}
