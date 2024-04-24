/*
#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *ap[5];
    for(int i=0;i<5;i++){
        ap[i]=&a[i];
    }
    //Reading of elements from user
    printf("Reading\n");
    for(int i=0;i<5;i++){
        scanf("%d",ap[i]);

    }
    printf("Display\n");
    for(int i=0;i<5;i++){
        printf("%d",*ap[i]);

    }
}
*/
//Accept elements using array of pointers using fucntion calls
#include<stdio.h>
void read(int n,int *ap[n])
{
    for(int i=0;i<n;i++){
        scanf("%d",ap[i]);
    }
}

void display(int n,int *ap[n])
{
    for(int i=0;i<n;i++){
        printf("%d\n",*ap[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size n:\n");
    scanf("%d",&n);
    int a[n];
    int *ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }   
    read(n,ap);
    //printf("%d",*ap[2]);
    printf("0123456789\n");
    display(n,ap);
}