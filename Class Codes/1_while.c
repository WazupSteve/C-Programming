#include <stdio.h>

int main()
{
// exclude code from compilation
#if 0
// version 1
	int n = 5;
	while(n)
		printf("%d ", n);
		n = n - 1;
#endif
#if 0
// version 2
// terrible
	int n = 5;
	while(n){printf("%d ", n);
		n = n - 1;}
#endif
#if 0
// version 3
// indent your program
// always use a block
	int n = 5;
	while(n)
	{
		printf("%d ", n);
		n = n - 1;
	}
// output : 5 4 3 2 1
#endif
#if 0
// version 4
	int n = 5;
	while(n)
	{
		printf("%d ", n--); // 5 4 3 2 1
	}
#endif
#if 0
// version 5
	int n = 5;
	while(n)
	{
		printf("%d ", --n); //  4 3 2 1 0
	}
#endif
#if 0
// version 6
	int n = 5;
	while(n--)
	{
		printf("%d ", n); //  4 3 2 1 0
	}	
#endif

#if 0
// version 7
	int n = 5;
	while(--n)
	{
		printf("%d ", n); //  4 3 2 1  
	}	
#endif
// version 8
	int n = 5;
	int f = 1;
	while(n--)
	{
		f *= n;
	}
	printf("res : %d\n", f);

	return 0;
}

























