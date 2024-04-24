#include <stdio.h>
#include <string.h>
int main()
{   /*
    char c3[7]="amazon";
    char c4[10]="alibaba";
    //printf("%s",c4);
    //printf("%s",c3);
    char c[8]={'a','t','m','a'};
    for(int i=0;i<8;i++){printf("%c\n",c[i]);}
    printf("OUTSIDE");
    */
   /*
   char *p="pes";
   printf("%s",p);
   printf("%d",sizeof(p));
   */
  /*
   char c[4]="pes",b[15]="University";
   printf("%d\n",sizeof(c));
   strcpy(c,b);
   printf("%d\n",sizeof(c));
   printf("c=%s\n",c);
   printf("%d\n",sizeof(c));
   */
  //Here strcpy copies all the characters of c to b unless it encounters the \0, and we have specified only 4 bytes to c but if memory next to that is free the characters get copied,and while printing it until it encounters(\0) it tries to fetch the characters and if the memory near c is blocked then it prints only the first 4 characters.
  
    //Complete Initialization
    char a[]={'a','t','m','a','\0'};
   //printf("%s  %d",a,sizeof(a));
   char a1[]="atma";
   //printf("%s  %d",a,sizeof(a1));
    char c1[]="HELLO", c2[]="OLA";
    strncpy(c2,c1,1);
    printf("%s",c2);

}