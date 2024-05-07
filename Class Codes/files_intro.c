#include<stdio.h>
//a simple program to open and close a file, and to print address on success and failure cases
//file_name including path----->absolute path
//just the file name------->relative path. The file should be present in the current directory
int main()
{
	FILE *fp=fopen("C:/c program files/Unit-4/file_handlers/fscanf_fprintf/check.txt","r");
	if(fp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",fp);
	else
	{
		printf("success!! file is opened! address=%p",fp);
		fclose(fp);
	}
	return 0;
}