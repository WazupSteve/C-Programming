#include<stdio.h>
#include<string.h>
//problem solving 1: To count the number of matches played in the year 2008

int main()
{
	FILE *fp=fopen("matches.csv","r");
	FILE *wp=fopen("output.txt","w");
	if(fp==NULL)
		printf("failure\n");
	else
	{	
		char *strptr;
		char str[500];int cnt=0;
		fgets(str,500,fp);
		while(fgets(str,500,fp)!=NULL)
		{
			strtok(str,",");
			strptr=strtok(NULL,",");
			if(!strcmp(strptr,"2008"))
			{
				printf("%s\n",strptr);
				cnt++;
			}
		}
		printf("the number of matches played in the year 2008 is =%d",cnt);
		fputs("the number of matches played in the year 2008 is =",wp);
		fprintf(wp,"%d",cnt);
	}
	return 0;
}