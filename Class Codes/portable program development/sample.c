#include<stdio.h>
int main()
{
	#ifdef __MINGW32__
		printf("this code is running on Windows Machine\n");
		printf("enter two characters\n");
		char a,b;scanf("%c",&a);fflush(stdin);scanf("%c",&b);
		printf("entered characters are\n");
		printf("%c\t%c",a,b);
	#endif
	#ifdef __UNIX__
		printf("this code is running on UNIX Machine\n");
		printf("enter two characters\n");
		char a,b;scanf("%c",&a);fflush(stdin);scanf("%c",&b);
		printf("entered characters are\n");
		printf("%c\t%c",a,b);
	#endif
	return 0;
}
		