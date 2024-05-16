#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE *fp=fopen("file.txt","r");
	//printf("error no is %d and the error message is %s\n",errno,strerror(errno));
	//printf("error no is %d\n",errno);
	perror("MY MESSAGE");
	perror(""); //This works but this doesn't work perror();
	
	//Not in syllabus for curiosity
	/*
	for(int i=0;i<43;i++)
	{
		errno=i;
		printf("error no is %d\t",errno);
		perror("MESSAGE");//perror:- means print error
	}
	*/
	return 0;
}
