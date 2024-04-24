#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=malloc(sizeof(int));
    printf("Enter the value to be stored\n");
    scanf("%d",p);//This is diff
    printf("Entered value is %d",*p);
    
}