/*#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	printf("character entered=%c\n",c);
	printf("character ascii=%d",c);
	return 0;
}

#include<stdio.h>
int main()
{
	char c;
	c=getchar();	//stores the acsii value of the character
	putchar(c);	// ascii gets converted into character again
	return 0;
}

#include<stdio.h>
int main()
{
	char c;
	c=getchar();	
	printf("using printf=%c\n",c);
	putchar(c);	
	return 0;
}

#include<stdio.h>
int main()
{
	printf("%c",getchar());		
	return 0;
}

#include<stdio.h>
int main()
{
	putchar(getchar());		
	return 0;
}

#include<stdio.h>
int main () 
{ 
char c= getc(stdin); 
putc(c, stdout); 
return 0; 
}


#include<stdio.h>
void main () 
{ 

	putc(getc(stdin), stdout); 
	return ; 
}
*/
#include<stdio.h>
#include<conio.h>
void main () 
{ 

	char c=getch();
	getch();
	putch(c);
	return ; 
}


	