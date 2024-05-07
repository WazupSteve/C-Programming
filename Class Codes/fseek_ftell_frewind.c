#include<stdio.h>
/* fseek( FILE* pointer, long offset (displacement), int whence (pointer position))
	pointer position: SEEK_SET   0   beginning of the file
			  SEEK_CUR   1   current position in the file
 			  SEEK_END   2   end of the file
	displacement: +ve or -ve number of bytes to skip forward or backward
	on success:returns 0
	on failure:returns non-zero value
   ftell(FILE *pointer)
	success:0 or positive integer  (i.e count of character position the pointer is away from the beginning of the file)
	failure: -1 on error
   rewind(FILE *pointer): rewinds the pointer to the beginning of the file
	no-return value.
*/
int main()
{
	FILE *rwp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test.txt","r+");
	if(rwp==NULL)
		printf("unsuccessfull!!\n");
	else
	{
		printf("success!!\n");
		char ch;
		ch=getc(rwp);
		ch=getc(rwp);
		ch=getc(rwp);
		//printf("fseek=%d\n",fseek(rwp,5,SEEK_END));
		printf("fseek=%d\n",fseek(rwp,5,SEEK_SET));
		printf("ftell=%d\n",ftell(rwp));
		
		ch=getc(rwp);printf("%c\n",ch);
		rewind(rwp);//don't use printf for this, gives error saying invalid use for void expression
		printf("ftell=%d",ftell(rwp));
	
	}
	return 0;
}
		
		