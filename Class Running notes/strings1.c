#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    
    //char s[20];
    //METHOD-1
    /*
    printf("Enter the string:");
    scanf("%[^\n]s",s);
    printf("%s",s);
    */
   // METHOD-2
    /*
    gets(s);
    puts(s);
    */
   //USER DEFINED STRCPY
   /*
   char s1[20],s2[20];
   printf("Enter the string:");
   gets(s1);
   int i;
   for(i=0;s1[i]!='\0';i++){
    s2[i]=s1[i];
   }
   s2[i]='\0';
   printf("%s",s2);
   */
  //User define obj for strchr
  /*
  char s[20],s1;
  printf("Enter the string:\n");
  scanf("%s",s);
  printf("Enter the char:\n");
  scanf("%*c%c",&s1);
  for(int i=0;s[i]!='\0';i++){
    //if(s[i]==s1){printf("%p",&s[i]);return 0;}
    if(s[i]==s1)
    {   
        printf("Character found");
        return 0;
    }
  }
  printf("Not Found");
  */



//USER DEFINED FUNCTION FOR STRCMP
/*
char s[100],s2[100];
gets(s);
gets(s2);
if(strlen(s)!=strlen(s2))
{
    printf("Not equal");
    return 0;
}
else
{
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=s2[i]){
            printf("Not Equal");
            return 0;
        }
    }
    {printf("They are equal");}
}
*/

//USER DEFINED Function for STRCMPI
/*
char s[100],s2[100];
gets(s);
gets(s2);
if(strlen(s)!=strlen(s2))
{
    printf("Not equal");
    return 0;
}
else
{
    for(int i=0;i<strlen(s);i++){
        if(toupper(s[i])!=toupper(s2[i])){
            printf("Not Equal");
            return 0;
        }
    }
    {printf("They are equal");}
}

}
*/
