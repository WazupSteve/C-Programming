/*
#include <stdio.h>
void read(int b[],int n){
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
}
void search(int b[],int n,int k){
    for(int i=0;i<n;i++){
        if (b[i]==k){printf("Position is:%d\n",i+1);return;}
    }
    printf("Key Element is not found!");
    
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
    search(a,n,key);
}
*/
///Try for multiple occurances and print all those occurrences
///Refer to class notes for the code
//#MEthod-1
/*
#include <stdio.h>
void read(int b[],int n){
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
}
void search(int b[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        if (b[i]==k){
            count+=1;
            printf("Position is:%d\n",i);}
    }
    if(count==0){printf("Key not found!");}
    
    
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
    search(a,n,key);
} 
*/


//METHOD-2

#include <stdio.h>
void read(int a[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int ls(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){return i+1;}
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    read(a,n);
    int k;
    printf("Enter the value u are searching for:");
    scanf("%d",&k);
    ///Variation 1
    /*
    if(ls(a,n,k)==-1){
        printf("Om NAMAH SHivaya!\n");
    }
    else
        printf("Pos is %d",ls(a,n,k));
    */
   int pos=ls(a,n,k);
   if(pos==-1){printf("Hi!");}
   else{printf("Pos is %d",pos);}

}
