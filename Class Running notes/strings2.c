//Pass by Value
/*
#include<stdio.h>
void read(char a[]){
    scanf("%[^\n]s",a);
}
void display(char a[]){
    printf("The entered string is:%s\n",a);
}
int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    char a[n];
    read(a);
    display(a);
    return 0;
}
*/

//Pass by ref
/*
#include<stdio.h>
void read(char *p){
    scanf("%s",p);
}
void display(char *p){
    printf("%s\n",p);
}
int main(){
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    char a[n];
    read(a);
    display(a);

}
*/
//fflush(stdin) --> Use this to clear the buffer when taking multiple read str
//Use pointer to print every char of string
//Method -1
/*
#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    printf("Enter the string\n");
    scanf("%[^\n]s",s);
    char *p=s;
    for(int i=0;i<strlen(s);i++){
        printf("%c",p[i]);
    }
}
*/
//Method -2
/*
#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    printf("Enter the string\n");
    scanf("%[^\n]s",s);
    char *p=s;
    for(;*p;p++){
        printf("%c",*p);
    }
}
*/

//Write a program to find the position of first occurence of the input char in a given string
/*
#include<stdio.h>
#include<string.h>
void read(char a[]){
    printf("Enter the str:\n");
    scanf("%[^\n]s",a);
}
int main(){
    char s[50];
    read(s);
    char ch;
    printf("Enter the char:\n");
    scanf("%*c%c",&ch);
    for(int i=0;s[i]!='\0';i++){
        if (s[i]==ch){
            printf("The char found at %d\n",i);
            return 0;
        }
    }
    printf("The given char is not present\n");
    return 0;
}
*/

//WAP to give the count of the given char in str
/*
#include<stdio.h>
#include<string.h>
void read(char a[]){
    printf("Enter the str:\n");
    scanf("%[^\n]s",a);
}
int main(){
    char s[50];
    read(s);
    char ch;
    printf("Enter the char:\n");
    scanf("%*c%c",&ch);
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if (s[i]==ch){
            count++;
        }
    }
    if(count ==0){printf("The given char is not present\n");}
    else{
        printf("The count is:%d\n",count);
    }
    return 0;
}
*/


//WAP to create a str only of aplhabets
// #include<stdio.h>
// int main(){
//     int i;
//     char s[20];
//     printf("Enter the str:\n");
//     scanf("%[^\n]s",s);
//     char s1[20];
//     for(int i=0;s[i]='\0';i++){
//         int i;
//         if((s[i]>='a'&& s[i]<='z')||( s[i]>='A'&& s[i]<='Z')){
//                 //s1+=s[i];
//                 printf("%c",s[i]);
//         }
//          printf("%c",s[i]);
//     }
//      printf("%c",s[i]);
//     return 0;
// }

/*
#include<stdio.h>
int main(){
    char s[20];
    printf("Enter the str:\n");
    scanf("%[^\n]s",s);
    char s1[20];
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='a'&& s[i]<='z')||( s[i]>='A'&& s[i]<='Z')){
                printf("%c",s[i]);
        }
    }
    return 0;
}
*/
//WAP to print only the digits present in the string
/*
#include<stdio.h>
int main(){
    char s[20];
    printf("Enter the str:\n");
    scanf("%[^\n]s",s);
    char s1[20];
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='1'&& s[i]<='9')){
                printf("%c",s[i]);
        }
    }
    return 0;
}
*/
