
#include <stdio.h>
int sum(int a,int b)
{
    if (b==0){return a;} //if b==1 return a+1
    else
        return 1+sum(a,b-1);
}

int diff(int a,int b)
{
    if (b==0){return a;} 
    else
        return diff(a-1,b-1);
}
int mul(int a,int b)
{
    if(b==1){return a;}
    else
        return a+mul(a,b-1);
}
int inverse(int n)
{
    if (n==1)
        printf("1\n");
    else 
        printf("%d\n",n)+inverse(n-1);
}
int main()
{
    int s=sum(5,3);
    printf("%d\n",s);
    printf("---------------\n");
    int k=diff(5,3);
    printf("%d\n",k);
    printf("---------------\n");
    inverse(5);
    printf("---------------\n");
    int m=mul(5,3);
    printf("%d\n",m);
    
}
