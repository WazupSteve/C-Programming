#include<stdio.h>
int main()
{   
    FILE *rp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Running notes/file handling/test1.txt","r");
    if(rp==NULL){printf("Unsuccessful File Opening\n");}
    else{
    int key;
    int a[10];
    printf("Enter the key value:");
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