#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    int *p=calloc(n,sizeof(int));
    if(p==NULL){
        printf("Unsuccessful allocation\n");
    }
    else{
        printf("Success Memory alloactaion\n");
        printf("Starting address=%p\n",p);
        printf("Enter the array elements:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        printf("Array elements are\n");
         for(int i=0;i<n;i++){
            printf("%d\n",p[i]);
        }
    }
    int m;
    printf("How many elements more would like to add?\n");
    scanf("%d",&m);
    if((m+n)>n){
        p=realloc(p,m+n);
        printf("Starting address=%p\n",p);
        printf("Enter the array elements:\n");
        for(int i=n;i<m+n;i++){
            scanf("%d",&p[i]);
        }
        printf("Array elements are\n");
         for(int i=0;i<m+n;i++){
            printf("%d\n",p[i]);
        }
        }
    /*else if((m+n)==m)
    {   p=realloc(p,m+n);
        printf("Array elements are\n");
        for(int i=0;i<m+n;i++){
            printf("%d\n",p[i]);
        }}
    */    
    else{
        p=realloc(p,0);
        printf("Unsucessful Memory allocation\n");
    }}

