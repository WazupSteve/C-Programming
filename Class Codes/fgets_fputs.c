#include<stdio.h>
/* char* fgets(char *char_array, int n, FILE *stream);
	success:returns Pointer to the string buffer
	failure: NULL on EOF or Error.
   int fputs(const char *s, FILE *stream);
	success:A non-negative number (we usually see 0)
	failure: EOF(-1) on error.\

NOTE: gets(char[]), puts(char[]) cannot be used for file operations (read/write from file)
*/
int main()
{
	FILE *rp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test.txt","r");
	FILE *wp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/output.txt","w");
	if(rp==NULL)
		printf("unsuccessfull file operation!!\n");
	else
	{
		printf("successfull file operation!! file starting address= %p\n",rp);	
		char buff[20];// char *buff; and char *buff[20] throws error
		printf("fgets=%p\n",fgets(buff,14,rp));
		printf("fputs=%d\n",fputs(buff,wp)); ///here play with buff,14,stdin and stdout
		fclose(rp);fclose(wp);
	}
	return 0;
}

/* // other approach2- to directly store a string in a file
fputs("welcome to file handling function",wp);
*/
	
		