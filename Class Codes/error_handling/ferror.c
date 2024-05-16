#include<stdio.h>
#include<errno.h>
#include<string.h>
/* The ferror() function tests the error indicator for a 
specified stream and returns nonzero if and only if 
the error indicator is set for the stream.*/
//NOTE: ferror() and errno are different
int main()
{
  	FILE *fp=fopen("check1.txt","r");
  	char str[] = "welcome to c programming";
	fputs(str,fp);
	printf("%d\n",ferror(fp));
  	if (ferror(fp))
  	{
		printf("error no is %d\t",errno); 
		printf("Message from errno:%s\n",strerror(errno));
		perror("error_message");
     	printf("write error\n");
  	}
	return 0;
}