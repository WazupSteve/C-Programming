//WAP to find the pattern matched in the str
//M-1
/*
#include<stdio.h>
#include<string.h>
void read(char a[]){
    printf("Enter the text:\n");
    scanf("%*c%[^\n]s",a);

}
int pattern_match(char text[],char pat[]){
    int m=sizeof(pat), n=sizeof(text),i,j;
    for(i=0;i<=n-m;i++){
        for(j=0;j<m && text[i+j]==pat[j];j++)
        if(j==m){return i;}
    }
    return -1;
}
int main()
{   int m,n;
    printf("Enter the sizes of text and pattern:\n");
    scanf("%d %d",&n,&m);
    char text[n];
    char pat[m];
    read(text);fflush(stdin);
    read(pat);
    printf("%d",pattern_match(text,pat));
}
*/



//M-2
#include<stdio.h>
#include<string.h>
void read(char s[]){
    scanf("%[^\n]s",s);
}
int t_p_match(char t[],char p[]){
    int m=strlen(p),j;
    int n=strlen(t);
    for(int i=0;i<=n-m;i++){
        for(j=0;j<m && t[i+j]==p[j];j++);
        if(j==m)
            return i;
    }
    return -1;
    
}
int main()
{
    char text[100],pat[100];
    printf("Enter the text string:\n");
    read(text);
    printf("Enter the pattern string:\n");fflush(stdin);
    read(pat);
    int pos=t_p_match(text,pat);
    if(pos>=0){
        printf("Pattern found at %d",pos);
    }
    else  
        printf("Pattern not found\n");
    return 0;
}