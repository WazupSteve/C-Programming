//Accept the Books, Enter the book id,give the % change in price to be made,print the update price
/*
#include<stdio.h>
typedef struct 
{
    int bid;
    char auth_n[50];
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
void update(int sbid,float per, b *bsp){
    int np=0;
    np=bsp[sbid-1].price + (per/100)*bsp[sbid-1].price ;
    bsp[sbid-1].price=np;

}
int main()
{
    int n;
    scanf("%d",&n);
    b bs[n];
    read(n,bs);
    int sbid;
    printf("Enter the id number:");
    scanf("%d",&sbid);
    float per;
    printf("Enter the percentage change in the price:");
    scanf("%f",&per);
    update(sbid,per,bs);
    printf("The updated price is:%f",bs[sbid-1].price);

    
}
*/
#include<stdio.h>
typedef struct 
{
    int bid;
    char auth_n[50];
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
void update(int sbid,float per, b *bsp){
    int np=0;
    np=bsp[sbid-1].price + (per/100)*bsp[sbid-1].price ;
    bsp[sbid-1].price=np;

}
int main()
{
    int n;
    scanf("%d",&n);
    b bs[n];
    read(n,bs);
    int sbid;
    printf("Enter the id number:");
    scanf("%d",&sbid);
    float per;
    printf("Enter the percentage change in the price:");
    scanf("%f",&per);
}