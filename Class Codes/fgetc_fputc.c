#include<stdio.h>
/* inline functions: parsed by the compiler
macros: are expanded by the pre-processor. 
	Macros do not return a value,and are usefull for small reusable codes.
	Macros, recieve source code at compile time (i.e compile time environment)
functions: recieves value as parameters and are evaluated at run-time, and returns 
	   a value to the surrounding expressions.
*/

/* int fgetc(FILE *fp); ///they are not macros, 
	on success:Next byte from the input stream
	on failure: EOF on error.
   int fputc(int c,FILE *fp);
	success: ascii value of the Character that is written
	failure: EOF on error.

*/
int main()
{
	FILE *rp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test.txt","r");
	FILE *wp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/output.txt","w");
	if(rp==NULL)
		printf("unsuccessfull!!");
	else
	{
		printf("success!!\n");
		char ch;
		while((ch=fgetc(stdin))!=EOF)
		{
			fputc(ch,wp); //Play with stdin and stdout
		}
		fclose(rp);fclose(wp);
	}
	return 0;
}
		