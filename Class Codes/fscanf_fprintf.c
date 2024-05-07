#include<stdio.h>
/*int fscanf(file_ptr,const char *format,address);
success: no.of values read
failure: -1  which is EOF
*/

/*int fprintf(file_ptr, const char *format,arguments);
success: no.of. characters written
failure:EOF
*/

//a simple program to read from one file and write into another file using fscanf & fprintf
int main()
{

	FILE *rfp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test.txt","r");
	FILE *wfp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/output.txt","w");
	if(rfp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",rfp);
	else
	{
		printf("success!! file is opened! address=%p\n",rfp);
		char ch;
		while(fscanf(rfp,"%c",&ch)!=EOF)  //fscanf(stdin,"%c",&ch);
		{
			fprintf(wfp,"%c",ch); //fprintf(stdout,"%c",ch); //If u want to get the output on the terminal
			//fprintf(stdout,"%c",ch);
		}
		fclose(rfp);
		fclose(wfp);
	}
	return 0;
}
/* //other approach-1
fscanf(rfp,"%c",&ch);
while(!feof(rfp))  //feof(rfp)!=-1 or feof(rfp)!=EOF does not work, goes for infinite execution
		{
			fprintf(wfp,"%c",ch);
			fscanf(rfp,"%c",&ch);
		}
*/

