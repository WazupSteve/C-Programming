#include<stdio.h>
#include<string.h>
void readstr(char a[])
{
printf("enter a string: ");
scanf("%[^\n]s", a);
}
int findpos(char a[], char b)
{
  for(int i=0;a[i]!='\0';i++){
    if(a[i]==b){
        printf("%d",i);
        return 0;
    }
  }
}
void main()
{
char str[100], ch;
readstr(str);
printf("Enter Search element: ");
scanf("%*c%c", &ch);
int pos=findpos(str,ch);
}