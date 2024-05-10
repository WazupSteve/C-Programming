#include<stdio.h>
int calc(int(*fp)(int,int),int a,int b)
{
    return fp(a,b);
}
int add(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\t",calc(add,a,b));
    printf("Mul=%d\t",calc(mul,a,b));
}