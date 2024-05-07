#include<stdio.h>
//to read from one file and write into another file using getc & putc functions
/*	int getc(FILE *)
		success: ascii value of character read
		failure: EOF
*/
/*
	int putc(ch,FILE*fp)
		success:ascii value of character written
		failure: EOF
*/
int main()
{
	FILE *rp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test.txt","r");
	FILE *wp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/output.txt","w");
	if(rp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",rp);
	else
	{
		printf("success!! file is opened! address=%p\n",rp);
		char ch;
		while((ch=getc(rp))!=EOF)  
		{
			putc(ch,wp);
		}
		fclose(rp);
		fclose(wp);
	}
	return 0;
}


/* //other approach1
ch=getc(rp);
while(ch!=EOF) 
{
	putc(ch,wp);
	ch=getc(rp);
}
*/