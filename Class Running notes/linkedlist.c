/*
#include<stdio.h>
typedef struct node
{
    int a;
    struct node *ptr;
}n;

int main()
{
    n s;
    s.a=100;
    s.ptr=&s.a; //Warning bcz it is the structure pointer but u are assigning the address of the int data type
    printf("Add of s=%p\n",&s);
    printf("a=%d\n",s.a);
    printf("ptr=%p\n",s.ptr);
    printf("*ptr=%d\n",*s.ptr);
}
//Write the top part in CW
*/


#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int ele;
    struct node *link;
}n;

int main()
{
    int op;
    while(1){
    printf("1: Insert\n2: Delete\n3: Display\n4: Exit\nEnter your choice:\n");
    scanf("%d",&op);
    switch(op)
    {   
        case 1:printf("Insert a node\n");break;
        case 2:printf("Delete a node\n");break;
        case 3:printf("Display a node\n");break;
        case 4:printf("Exit\n");exit(0);
        default:printf("Enter the proper value\n");break;
        

    }
    }
}