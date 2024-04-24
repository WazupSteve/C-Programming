/*
#include<stdio.h>
typedef struct 
{
    int bid,num;
    char auth_n[20];
    float price;
}b;

int main()
{   int n;
    printf("enter the size:");
    scanf("%d",&n);
   b bs[3];
   for(int i=0;i<n;i++){
    printf("Enter the book[%d] details:\n",i+1);
    printf("Enter Book id:");
    scanf("%d",&bs[i].bid);
    printf("Enter Author Name:");
    scanf("%[^\n]s",bs[i].auth_n);
    fflush(stdin);
    printf("Enter price:");
    scanf("%f",&bs[i].price);
   }

    
   printf("---------------------------------________________________________-------------------");
   for(int i=0;i<n;i++){
    printf("The book[%d] details:\n",i+1);
    printf("Booking id:%d\n",bs[i].bid);
    printf("Author name:%s\n",bs[i].auth_n);
    printf("Price:%f\n",bs[i].price);
   }
}
*/


//Using functions for this question
/*
#include<stdio.h>
typedef struct 
{
    int bid,num;
    char auth_n[20];
    float price;
}b;

void read(int n,b bs[n]){
    for(int i=0;i<n;i++){
    printf("Enter the book[%d] details:\n",i+1);
    printf("Enter Book id:");
    scanf("%d",&bs[i].bid);
    fflush(stdin);
    printf("Enter Author Name:");
    scanf("%[^\n]s",bs[i].auth_n);
    fflush(stdin);
    printf("Enter price:");
    scanf("%f",&bs[i].price);
   }
}
void display(int n,b bs[n]){
    for(int i=0;i<n;i++){
    printf("The book[%d] details:\n",i+1);  //p[i]->bid
    printf("Booking id:%d\n",bs[i].bid);    //
    printf("Author name:%s\n",bs[i].auth_n);
    printf("Price:%f\n",bs[i].price);
   }
    
}
int main()
{
    int n;
    printf("Enter the size of the struct:");
    scanf("%d",&n);
    b bs[n];
    read(n,bs);
    printf("---------------------------------________________________________-------------------\n");
    display(n,bs);
}
*/

//USING Pointers
#include<stdio.h>
typedef struct 
{
    int bid,num;
    char auth_n[20];
    float price;
}b;
void read(int n,b *bsp)
{
for(int i=0;i<n;i++){
    printf("Enter the book[%d] details:\n",i+1);
    printf("Enter Book id:");
    scanf("%d",&(bsp+i)->bid);
    fflush(stdin);
    printf("Enter Author Name:");
    scanf("%[^\n]s",(bsp+i)->auth_n);
    fflush(stdin);
    printf("Enter price:");
    scanf("%f",&(bsp+i)->price);
   }
}
void display(int n,b *bsp){
    for(int i=0;i<n;i++){
    printf("The book[%d] details:\n",i+1);
    printf("Booking id:%d\n",bsp[i].bid);   
    printf("Author name:%s\n",bsp[i].auth_n);
    printf("Price:%f\n",bsp[i].price);
   }
    
}
int main()
{
    int n;
    printf("Enter the size of the struct:");
    scanf("%d",&n);
    b bs[n];
    read(n,bs);
    printf("---------------------------------________________________________-------------------\n");
    display(n,bs);
}