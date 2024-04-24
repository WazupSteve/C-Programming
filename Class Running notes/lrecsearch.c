#include <stdio.h>
void read(int a[],int n)
{
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int lrec(int a[],int i,int n,int key)
{   
    if(i==n)
        return -1;
    if(a[i]==key)
        return i;
    else 
        return lrec(a,i+1,n,key);

}
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    read(a,n);
    int k;
    printf("Enter the key value:\n");
    scanf("%d",&k);
    int li=lrec(a,0,n-1,k);
    printf("%d",li);
}