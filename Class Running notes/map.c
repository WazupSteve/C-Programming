#include<stdio.h>
int n;
void map(void(*fp)(int *),int a[])
{
    for(int i=0;i<n;i++){
        fp(&a[i]);
    }
}
void add(int *ele)
{
    *ele+=1;
}
int main()
{
    printf("Enter tthe array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    map(add,a);
    printf("Updated Array\n");
     for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}