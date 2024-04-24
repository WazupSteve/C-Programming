//ASCENDING SORT
/*
#include <stdio.h>
void read(int a[],int n)
{
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void bsort(int a[],int n)
{
  for(int i=0;i<=n-2;i++){
    for(int j=0;j<=n-2-i;j++){
        if(a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }  
}
void disp(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
  }
int main()
{
    int n;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n");
    read(a,n);
    printf("Let's sort the array:\n");
    bsort(a,n);
    printf("Displaying sorted array:\n");
    disp(a,n);
    return 0;
}
*/
//DESCENDING ORDER OF SORTING
/*
#include <stdio.h>
void read(int a[],int n)
{
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void bsort(int a[],int n)
{
  for(int i=0;i<=n-2;i++){
    for(int j=0;j<=n-2-i;j++){
        if(a[j+1]>a[j]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }  
}
void disp(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
  }
int main()
{
    int n;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n");
    read(a,n);
    printf("Let's sort the array:\n");
    bsort(a,n);
    printf("Displaying sorted array:\n");
    disp(a,n);
    return 0;
}
*/
//Method of using pointers
#include <stdio.h>
void read(int *p,int n)
{
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
}
void bsort(int *p,int n)
{
  for(int i=0;i<=n-2;i++){
    for(int j=0;j<=n-2-i;j++){
        if(p[j]>p[j+1]){
            int temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }
  }  
}
void disp(int *p,int n){
    for(int i=0;i<n;i++){
        printf("%d\n",p[i]);
    }
  }
int main()
{
    int n;
    printf("Enter the length of array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n");
    read(a,n);
    printf("Let's sort the array:\n");
    bsort(a,n);
    printf("Displaying sorted array:\n");
    disp(a,n);
    return 0;
}