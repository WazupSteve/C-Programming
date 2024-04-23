```c
typedef struct node 
{
int a;
struct node *ptr;
}
```

To define large array of structures - but there are no continuous memory allocation.
So we cant use large array of structures as for this case there is no continious memory allocation.
**Basic Linked List**
A basic Linked-list has two parts namely info part and the ``*link`` part.
```C
s1.link = &s2
s2.link = &s3
s3.link = &s4
s4.link = NULL
```
## Dynamic Memory Management

`` n *head = malloc(sizeof(m))`` - allocates the size of m number of bytes 
This is a structure pointer which has memory allocated. This single pointer holds the memory of the next element.
``head-->a`` - gives the values of the next element by accessing.

As a better practice always link the last element of the array to NULL. This is done to ensure that there are no cases of dangling pointer which can cause issues in the codebase.
So for now this is a single value pointer which holds the address of the next element. 
This can be invoked multiple number of times based on the number inputs we want.

```c
head-->a=10;
head-->link=NULL;
```
### Different types of Linked Lists

1) **Singly Linked List -** Linked only in one direction.
2) **Doubly Linked List** - Linked in both directions.
3) **Circular Linked List -** The last element of the list is linked to the first element of the list.

For our syllabus - we have only insertion in the frontend and frontend deletion.
Rest all topics are removed from the syllabus.

```
Important for ISA and ESA
Imitate a linked list 
Add , Insert and delete.
```

Operations that can be performed are :
1) Insertion
2) Deletion
3) Search - Linear and Binary Search
4) Display
5) Merge
6) Concatenate

Create a structure called node , linking pointer as link , make a Single Linked List 

```c
#include<stdio.h>
typedef struct node
{
int ele;
struct node *link
}n;

int main(){
int op;
scanf("%d",&op);
switch(op)
{
case 1:printf("Insert the node\n")break;
case 2:printf("Add a node\n")break;
case 3:printf("Delete a node\n")break;
case 4:printf("Exit\n")break;
default("Enter the proper value for op \n")
}
return 0;
}
```