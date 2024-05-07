//File opening
/*
#include<stdio.h>
int main()
{
	FILE *fp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test.txt","w");
	if(fp==NULL)
		printf("failure!! coudn't open the file!! address=%p\n",fp);
	else
	{
		printf("success!! file is opened! address=%p",fp);
		fclose(fp);
	}
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	FILE *rp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test.txt","r");
	FILE *wp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/ak1_output.txt","w");
	if(rp==NULL)
		printf("unsuccessfull file operation!!\n");
	else
	{
		printf("successfull file operation!! file starting address= %p\n",rp);	
		char buff[20];// char *buff; and char *buff[20] throws error
		while(fgets(buff,20,rp)!=NULL){
		printf("fputs=%d\n",fputs(buff,wp)); }///here play with buff,14,stdin and stdout
		fclose(rp);fclose(wp);

	}
	return 0;
}
*/
#include<stdio.h>
int main()
{   
    FILE *rp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/data1.txt","r");
    if(rp==NULL){printf("Unsuccessful");}
    else{
    int key;
    int a[10];
    scanf("%d",&key);
    for(int i=0;i<10;i++)
    {
        fscanf(rp,"%d",&a[i]);
    }
    fclose(rp);
    for(int i=0;i<10;i++)
    {
        if(a[i]==key){printf("Key found at position:%d",i+1);}
    }

    }
}