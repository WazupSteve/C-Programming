/*
#include <stdio.h>
void read(int b[],int n){
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
}
int bs(int a[],int n,int key){
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2 ;
        if (key==a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else
            h=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    int a[n];
    read(a,n);
    printf("Enter the key value:\n");
    int key;
    scanf("%d",&key);
    int pos=bs(a,n,key);
    if(pos==-1){printf("Key Not found!\n");}
    else
        printf("key found at the index position %d\n",pos);
    return 0;
}
*/
// Binary Search using recursion!!!!
#include <stdio.h>
void read(int a[],int n)
{
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int BinRec(int a[],int l,int h,int key)
{
    if (l>h)
        return -1;
    else{
        int mid =(l+h)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            return BinRec(a,mid+1,h,key);
        }
        else{
            return BinRec(a,l,mid-1,key);
        }
    }
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
    int bi=BinRec(a,0,n-1,k);
    printf("%d",bi);
}