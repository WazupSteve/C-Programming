#include <stdio.h>
int main()
{   /*
    int var=10,*p=&var;
    var+=5;
    printf("var=%d\n",var);
    *p=*p+5;
    printf("new var=%d",var);
    */
   /*
   int a[5]={10,20,30,40,50},*p=&a[0];
   for(int i=0;i<5;i++,p++){
    *p=*p+10;
   }
   for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
    //Here the pointer address changes each and every time and reaches the last address
   }
   */
  //ALTERNATE METHOD//
  /*
  int a[5]={10,20,30,40,50},*p=&a[0];
   for(int i=0;i<5;i++){
    a[i]=*(p+i)+10;
   }
   for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
   }
   //Here the pointer has the starting address itself and it does not change after the execution also
   */
  /*
  int a[5]={10,20,30,40,50},*p=&a[0];
   for(int j=0;j<5;j++){
   for(int i=0;i<5;i++){
    (*p)++;
   }
   *p++;}
   for(int i=0;i<5;i++){
    printf("%d\n",a[i]);
   }
   */
  /*
  int a=10,b=20;
  int *p1=&a,*p2=&b;
  int *k;
  printf("variable name a,b= %d %d\n",a,b);
  printf("pointer name p1,p2= %d %d\n",*p1,*p2);
  k=p1;
  p1=p2;
  p2=k;
  printf("After Swap Pointer:%d %d\n",*p1,*p2);
  printf("After Swap variables:%d %d",a,b);
  */
 /*
  int a=10,b=20;
  int *p1=&a,*p2=&b;
  printf("variable name a,b= %d %d\n",a,b);
  printf("pointer name p1,p2= %d %d\n",*p1,*p2);
  int k;
  k=*p1;
  *p1=*p2;
  *p2=k;
  printf("After Swap Pointer:%d %d\n",*p1,*p2);
  printf("After Swap variables:%d %d",a,b);
  */
  int a[5]={10,20,30,40,50};
  int *p=&a[0];
  /*
  printf("The *p values using d: %d\n",*p);
  //printf("The *p values using p: %p\n",*p);
  printf("The address of p using pointer: %p\n",p);
  printf("The address of p: %p\n",&a);
  */
 /*
 for(int i=0;i<5;i++){
  //printf("%d\n",p[i]);
  //printf("%d\n",i[p]);
  //printf("%d\n",*(p+i)); ///Value of A using pointer
 }
 */
for(int i=0;i<5;i++){
    //printf("%p\n",&p[i]);
    //printf("%p\n",&i[p]);
    //printf("%p\n",p+i); //Address of A using Pointer
    printf("%d\n",*p++);
}
printf("%p\n",p);



}