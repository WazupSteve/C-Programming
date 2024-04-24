#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int *p=calloc(n,sizeof(int));
    if(p==NULL){
        printf("Unsuccessful allocation\n");
    }
    else{
        printf("Success Memory alloactaion\n");
        printf("Starting address=%p\n",p);
        printf("Array elements are\n");
        for(int i=0;i<n;i++){
            printf("%d\n",p[i]);
        }
        printf("Enter the array elements:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        printf("Array elements are\n");
         for(int i=0;i<n;i++){
            printf("%d\n",p[i]);
        }
    }
}