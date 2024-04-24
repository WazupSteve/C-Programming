#include <stdio.h>
typedef struct Complex{
    int a;
     int *q;
     struct Complex *ppp;
}co;
int main() {
   co cmplx;
   cmplx.a=100;
   printf("%d\n",sizeof(struct Complex));
   printf("%p",&cmplx.a);
      return 0;
}