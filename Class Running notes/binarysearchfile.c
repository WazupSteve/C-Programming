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
   int l=0;int h=9;
    while(l<h)
    {
        int mid=(l+h)/2;
        if(key==a[mid]){printf("The key found at %d",mid+1);break;}
        else if(key>a[mid]){l=mid+1;}
        else(h=mid-1);
    }

    }
}