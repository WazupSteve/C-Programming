/*
#include<stdio.h>
void display()
{
    printf("Inside display function\n");
}
int main()
{
    void(*fp)()=display;
    fp();
}
*/
//L-1
/*
#include<stdio.h>
int add(int a,int b)
{
    int sum=a+b;
    return sum;
}
int mul(int a,int b)
{
    int mul=a*b;
    return mul;
}
int main()
{
    int a,b;
    printf("Enter the values a and b\n");
    scanf("%d %d",&a,&b);
    int(*addp)(int,int)=add;
    printf("Add is %d\n",addp(a,b));
    int(*mulp)(int,int)=mul;
    //addp=mul;
    printf("Mul is %d\n",mulp(a,b));
}
*/
#include<stdio.h>
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
    printf("Enter the values a and b\n");
    scanf("%d %d",&a,&b);
    int(*fp)(int,int)=add;
    printf("Add is %d\n",fp(a,b));
    fp=mul;
    printf("Mul is %d\n",fp(a,b));
    printf("Mul size is %d bytes\n",sizeof(fp));
    printf("Address of the function pointer is:%p\n",&fp);
    printf("Address of the function is:%p\n",fp);
}