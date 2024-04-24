//Read and write and in 2D Arrays using pointers
#include <stdio.h>
void read_2d(int m, int n, int(*p)[n]){
    printf("Enter the array elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&p[i][j]);          //&i[p][j] or (*(p+i)+j)
        }
    }
}
void print_2d(int m, int n, int(*p)[n]){
    printf("The array elements are :\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           printf("%d\n",*(*(p+i)+j));
        }
    }
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int (*p)[n]=a;
    read_2d(m,n,a);
    print_2d(m,n,a);
}