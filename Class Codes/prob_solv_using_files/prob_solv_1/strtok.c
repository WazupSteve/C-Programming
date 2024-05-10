#include<stdio.h>
#include<string.h>
//program on using strtok function
/*
syntax: char *strtok(char *str, const char *delim);

*/
int main()
{
	FILE *fp=fopen("matches.csv","r");
	if(fp==NULL)
		printf("failure\n");
	else
	{
		char str[500];
		char *tok;
		fgets(str,500,fp);
		/*
		fputs(str, stdout);
		tok=strtok(str,",");
		printf("%s\n",tok);
		tok=strtok(str,",");
		printf("%s\n",tok);
		*/

		while(fgets(str,500, fp)!=NULL)
		{
			tok=strtok(str,",");	
			while(tok!=NULL)
			{
				printf("\"%s\" ",tok);
				tok=strtok(NULL,",");
			}
			printf("\n");
		}
	}
	return 0;
}