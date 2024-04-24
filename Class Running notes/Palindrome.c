
#include <stdio.h>
int pal_check();
int main()
{   
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int sum=pal_check(n);
    if (sum!=n)
        printf("Not a plaindrome");
    else
        printf("Palindrome");
    
}
int pal_check(int c)
{
    int rem=0,sum=0;
    while(c){
        rem=c%10;
        c=c/10;
        sum=(sum*10)+rem;
    }
    return sum;

}



//METHOD-2
