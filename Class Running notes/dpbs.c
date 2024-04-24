//Using Array of pointers logic without Double pointers
/*
#include<stdio.h>
void read(int n, int *ap[n])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",ap[i]);
    }
}
void bs(int n, int *ap[n])
{
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(*ap[j]>*ap[j+1]){
                int *temp=ap[j];
                ap[j]=ap[j+1];
                ap[j+1]=temp;
            }
        }
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
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n], *ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }
    read(n,ap);
    printf("After reading!\n");
    display(n,ap);
    printf("After display!\n");
    bs(n,ap);
    printf("After bs!\n");
    display(n,ap);
    printf("Let us check b value\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
*/
//Using array of pointers using double pointers
/*
#include<stdio.h>
void swap(int **dp,int **dp2)
{  
    int *temp=*dp;
    *dp=*dp2;
    *dp2=temp;

}
void read(int n, int *ap[n])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",ap[i]);
    }
}
void bs(int n, int *ap[n])
{
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(*ap[j]>*ap[j+1]){
                swap(&ap[j],&ap[j+1]);
            }
        }
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
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n], *ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }
    read(n,ap);
    printf("After reading!\n");
    display(n,ap);
    printf("After display!\n");
    bs(n,ap);
    printf("After bs!\n");
    display(n,ap);
    printf("Let us check b value\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
*/

//LET US NOW AFFECT the original array
#include<stdio.h>
void swap(int **dp,int **dp2)
{  
    int **temp=dp;
    dp=dp2;
    dp2=temp;

}
void read(int n, int *ap[n])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",ap[i]);
    }
}
void bs(int n, int *ap[n])
{
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(*ap[j]>*ap[j+1]){
                swap(&ap[j],&ap[j+1]);
            }
        }
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
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n], *ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }
    read(n,ap);
    printf("After reading!\n");
    display(n,ap);
    printf("After display!\n");
    bs(n,ap);
    printf("After bs!\n");
    display(n,ap);
    printf("Let us check b value\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}