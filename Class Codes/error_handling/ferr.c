#include <stdio.h>
 // to identify ferror
/*
1) int ferror(FILE *stream)
	stream − This is the pointer to a FILE object that identifies the stream.
	return value-The ferror() function returns a nonzero value to indicate an error on the given stream. 
		A return value of 0 means that no error has occurred.

*/
/*
int main(void)
{
  	FILE *fp=fopen("check1.txt","w");
  	char *str = "welcome to c";
  	fprintf(fp, "%s\n", str);// doesnt throw error on just giving % and not the format specifier
	//printf("%d",ferror(fp));
  	if (ferror(fp))
  	{
     		printf("write error\n");
     		clearerr(fp); //clearerr is not in the syllabus! Still Let's explore
  	}
	printf("no errors enountered\n");
  	if (fclose(fp))
		perror("fclose error");
	
	return 0;
}
*/
int main(void)
{
  	FILE *fp=fopen("check1.txt","w");
  	char *str = "welcome to c";
  	fprintf(fp, "%s\n", str);// doesnt throw error on just giving % and not the format specifier
	printf("%d",ferror(fp));
  	if (ferror(fp))
  	{
     		printf("write error\n");
     		clearerr(fp); //clearerr is not in the syllabus! Still Let's explore
			printf("%d\n",ferror(fp));
  	}
	printf("no errors enountered\n");
	//fclose(fp)
  	if (fclose(fp))
		perror("fclose error");
	
	return 0;
}