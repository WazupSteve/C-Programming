#include<stdio.h>
int main()
{   
    FILE *rp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test1.txt","r");
    FILE *wp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/bsout.txt","w");
    if(rp==NULL){printf("Unsuccessful File Opening\n");}
    else{
    int a[10];
    for(int i=0;i<10;i++)
    {
        fscanf(rp,"%d",&a[i]);
    }
    fclose(rp);
    for(int i=0;i<=8;i++)
    {
        for(int j=0;j<=8-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
        fprintf(wp,"%d\n",a[i]);
    }

    }
}