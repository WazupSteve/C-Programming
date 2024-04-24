/*
#include <stdio.h>
int main()
{
    extern int i;
    printf("Value=%d\n",i++);
    printf("Value=%d\n",i++);
    return 0;
}
int i=30;
*/

/*
#include <stdio.h>
void f1(){
    int i=10;
    printf("Value=%d\n",i++);
}
int main()
{
    f1();
    f1();
    return 0;
}
*/
//Output is 10 and 10 bcz the fucntion span is over so the variable dies and therefore it doesn't work any more.

/*
#include <stdio.h>
void f1(){
    static int i=10;
    printf("Value=%d\n",i++);
}
int main()
{
    f1();
    f1();
    return 0;
}
*/
//Output is 10 and 11
/*
///REGISTER VAR
#include<stdio.h>
//register int j=20;// Error
//void f1(register int j){return;}
int main()
{
    register int i=40;
    return 0;
}
*/

