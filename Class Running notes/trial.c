//Size given by user and naive str matching
/*
#include<stdio.h>
#include<string.h>
void read(char a[]){
    printf("Enter the text:\n");
    scanf("%[^\n]s",a);

}
int pattern_match(char text[],char pat[]){
    int m=strlen(pat), n=strlen(text),i,j;
    for(i=0;i<=n-m;i++){
        for(j=0;j<m && text[i+j]==pat[j];j++);
        if(j==m){return i;}
    }
    return -1;
}
int main()
{   int m,n;
    printf("Enter the sizes of text and pattern:\n");
    scanf("%d %d",&n,&m);
    fflush(stdin);
    char text[n];
    char pat[m];
    read(text);fflush(stdin);
    read(pat);
    printf("\n pos=%d",pattern_match(text,pat));
    return 0;
}
*/

//REad and write str
/*
#include<stdio.h>
void read(char a[]){
    scanf("%[^\n]s",a);
}
void display(char a[]){
    printf("%s\n",a);
}
int main()
{
    char str[100];
    printf("Enter the string\n");
    read(str);
    display(str);
}
*/

//Structs
/*
#include<stdio.h>
#include<string.h>
struct r_area
{
    int length;
    int breadth;
};
int main()
{
    struct r_area  a;    
    printf("Enter the length of rec:");
    scanf("%d",&a.length);
    printf("Enter the breadth:");
    scanf("%d",&a.breadth);
    printf("The area is %d sq unit",a.length*a.breadth);
}
*/
//S= abc abcdaba
//S2= abc aaabbcd
#include <stdio.h>
#include <string.h>

void sortWord(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (word[i] > word[j]) {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
}

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin); 
    
    char *token = strtok(s, " \n"); 
    while (token != NULL) {
        printf(" current word that is sotred == %s \n ", token);
        sortWord(token); 
        printf("%s ", token); 
        token = strtok(NULL, " \n"); 
    }
    
    return 0;
}