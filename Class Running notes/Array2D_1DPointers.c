
#include <stdio.h>
int main()
{   
    int a[4][2]={{1,2},{3,4},{5,6},{7,8}};
    /*
    int a[][2]={1,2,3,4,5};
    for(int i=0;i<sizeof(a)/8;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }printf("\n");
    }
    */
  
   int (*p)[2]=a;
   for(int i=0;i<8;i++){
    printf("address=%p value=%d\n",&(*p)[i],(*p)[i]);
    //printf("address=%p value=%d\n",(p+i),*(p+i));
   }
   
}


