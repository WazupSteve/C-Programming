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
My code:
```c
#include<stdio.h>
typedef struct node
{
int ele;
struct node *link
}n;

n* insert(n *head)
{
n* new=malloc(sizeof(n));
printf("enter the value \n");
scanf("%d",&new-->ele);
new-->link=NULL;
if(head==NULL)
{
	head==new;
}
else
{
	new-->link = head;
	head = new;
}
return head;
}

n* delete(n* head){
if(head==NULL)
{
	printf("empty linked list \n");
}
else
{
	printf("element %d deleted \n",head-->ele);
	head = head-->link;
}
return head;
}

void display(n *head){
if(head==NULL);
{
	printf("Linked List Empty");
}
else
{
	n *p = head;
//p is a structure pointer which is pointing to the the address where head is pointing to
	while(p!=NULL)
		{
			printf("%d \t",p-->ele);
			p = p-->link; 
		//so if the p-->link is NULL then the loop terminates and displays ll
		}
	}
}//no need to return head for the display the

n* delete_ll(n* head)
{
	head = NULL;
	printf("linked list deleted \n");
}

int main(){
int ch;
n *head=NULL;
for(int i=1;i<=ch;i++){
printf("1. Insert \n");
printf("2. Delete \n");
printf("3. Display \n");
printf("4. Delete Linked List \n");
printf("5. Exit \n");
printf("enter your choice \n");
scanf("%d",&ch);
switch(&ch)
{
case 1: head = insert(head);break;
case 2: head = delete(head);break;
case 3: display(head);break;
case 4: head = delete_ll(head);break;
case 5: exit(0);break;
default : ("Enter the proper value for ch \n");
}
}
return 0;
}
```

New code:
```c
#include<stdio.h>
typedef struct node
{
int ele;
struct node *link
}n;

n *head=NULL;

void insert(n *head)
{
n* new=malloc(sizeof(n));
printf("enter the value \n");
scanf("%d",&new-->ele);
new-->link=NULL;
if(head==NULL)
{
	head==new;
}
else
{
	new-->link = head;
	head = new;
}
}

void delete(n* head){
if(head==NULL)
{
	printf("empty linked list \n");
}
else
{
	printf("element %d deleted \n",head-->ele);
	head = head-->link;
}
}

void display(n *head){
if(head==NULL);
{
	printf("Linked List Empty");
}
else
{
	n *p = head;
//p is a structure pointer which is pointing to the the address where head is pointing to
	while(p!=NULL)
		{
			printf("%d \t",p-->ele);
			p = p-->link; 
		//so if the p-->link is NULL then the loop terminates and displays ll
		}
	}
}//no need to return head for the display the

void delete_ll(n* head)
{
	head = NULL;
	printf("linked list deleted \n");
}

int main(){
int ch;
for(int i=1;i<=ch;i++){
printf("1. Insert \n");
printf("2. Delete \n");
printf("3. Display \n");
printf("4. Delete Linked List \n");
printf("5. Exit \n");
printf("enter your choice \n");
scanf("%d",&ch);
switch(&ch)
{
case 1: insert(head);break;
case 2: delete(head);break;
case 3: display(head);break;
case 4: delete_ll(head);break;
case 5: exit(0);break;
default : ("Enter the proper value for ch \n");
}
}
return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int ele;
    struct node *link; // Added a semicolon here
} n;

// Function prototypes
n* insert(n *head);
n* delete(n *head);
void display(n *head); // Changed return type to void
n* delete_ll(n* head);

int main() {
    int ch;
    n *head = NULL;

    do {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Delete Linked List\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                head = insert(head);
                break;
            case 2:
                head = delete(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                head = delete_ll(head);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Enter the proper value for ch\n");
        }
    } while (1);

    return 0;
}

n* insert(n *head) {
    n* new = malloc(sizeof(n));
    printf("Enter the value: ");
    scanf("%d", &new->ele);
    new->link = NULL;
    if (head == NULL) {
        head = new;
    } else {
        new->link = head;
        head = new;
    }
    return head;
}

n* delete(n* head) {
    if (head == NULL) {
        printf("Empty linked list\n");
    } else {
        printf("Element %d deleted\n", head->ele);
        head = head->link;
    }
    return head;
}

void display(n *head) {
    if (head == NULL) {
        printf("Linked List Empty\n");
    } else {
        n *p = head;
//p is a structure pointer which is pointing to the the address where head is pointing to
        while (p != NULL) {
            printf("%d \t", p->ele);
            p = p->link;
    //so if the p-->link is NULL then the loop terminates and displays ll
        }
        printf("\n"); // Add a newline for clarity
    }
}

n* delete_ll(n* head) {
    // Free memory for each node in the linked list
    while (head != NULL) {
        n* temp = head;
        head = head->link;
        free(temp);
    }
    printf("Linked list deleted\n");
    return NULL; // Return NULL as there's no head for an empty list
}

```

# Union :
Union is a data structure.
```c
union sample
{
int a;//4
char c;//1
int d[10];//40
//45 bytes alloted for this
//we can end up getting 48 bytes due to padding in C-language
};
```
When we try  to check ``sizeof(sample)`` and the maximum memory among the member of union gets allotted as the memory. Here in the above example its 40bytes.
We can access only the variable latest assignment done in the union.

dot(.) operator for value and (-->)operator for pointers. Follows the same rules as structures.

We can overwrite for the same variable and it gets retained if its done consecutively.

It can also be done using typdef by:
```c
typedef union sample
{
int a;
char c;
int d[10];
}s;
```

Class code Example:

```c
#include<stdio.h>
//introduction to union, nested union example
union sample
{
	int a;
	char c;
	int d[10];
};

int main()
{
	//union sample s={10,'B',{20,30,40,50}};//observe output for this kind of initialization
	union sample s;
	printf("size of union sample=%d Bytes\n",sizeof(s));
	s.a=10;
	printf("a=%d\n",s.a);
	s.c='B';
	printf("c=%c\n",s.c);
	printf("a=%d\n",s.a);//The value of s.a is lost and prints a junk value
	s.d[0]=20,s.d[1]=30,s.d[2]=40,s.d[3]=50;
	//union sample s={.d={10,20,30,40}};
	for(int i=0;i<4;i++)
		printf("%d\t",s.d[i]);
	return 0;
}
```

```c
int main()
{
	union sample s={10,'B',{20,30,40,50}};//observe output for this kind of initialization
	union sample s;
	printf("size of union sample=%d Bytes\n",sizeof(s));
	//s.a=10;
	printf("a=%d\n",s.a);
	//s.c='B';
	printf("c=%c\n",s.c);
	printf("a=%d\n",s.a);//The value of s.a is lost and prints a junk value
	//s.d[0]=20,s.d[1]=30,s.d[2]=40,s.d[3]=50;
	//union sample s={.d={10,20,30,40}};
	for(int i=0;i<4;i++)
		printf("%d\t",s.d[i]);
	return 0;
}
```

When we do this , this gives a warning , if we take only ``union sample s={10,'B'}``
then only the first one is considered as the input. At a time it stores only one.
If we exclude the warning it excludes the second one and prints only the first one.
For the array part, when we try to print ``s.d`` then , d[0]=a and the output is like [10,0,0....]
All the other elements of the array are not initialized and by default it is set to zero.

This is the output for :
```c
union sample s={10,'B'};
```

```
size of union sample=40 Bytes
a=10
c=

a=10
10	0	0	0	

=== Code Execution Successful ===
```

Alternate approach:
```c
#include<stdio.h>
//introduction to union, nested union example
union sample
{
	int a;
	char c;
	int d[10];
};

int main()
{
	union sample s={.d = {20,30,40,50}};

	printf("a=%d\n",s.a);
	s.c ='B';

	printf("c=%c\n",s.c);
	printf("a=%d\n",s.a);//The value of s.a is lost and prints a junk value
	//union sample s={.d={10,20,30,40}};
	for(int i=0;i<4;i++)
		printf("%d\t",s.d[i]);
	return 0;
}
```
Code output is as follows:
```
size of union sample=40 Bytes
a=20
c=B
a=66
66	30	40	50	

=== Code Execution Successful ===
```

```c
//---nested unions example 1
typedef union sample1
{
	int i;
	union complex
	{
		double j;
		double k;
	};
}sam;

int main()
{
	
	sam s={10,200.256};    //observe output for all these instances seperately
	//sam s={.j=200.256};  //observe output for all these instances seperately
	//sam s={200.256};     //observe output for all these instances seperately    
	printf("sizeof union s=%d\n",sizeof(sam));
	printf("i=%d\n",s.i);
	printf("j=%f\n",s.j);
	return 0;
}
```
This is the output for the above code:
```
sizeof union s=8
i=10
j=0.000000


=== Code Execution Successful ===
```

For `` sam s={.j=200.256}``
The output is :
```
sizeof union s=8
i=652835029
j=200.256000


=== Code Execution Successful ===
```

For `` sam s={200.256} ``
```
sizeof union s=8
i=200
j=0.000000
```

For 
```c
int main()  
{  
  sam s={200.256};     //observe output for all these instances seperately  

    printf("sizeof union s=%d\n",sizeof(sam));  
    printf("i=%d\n",s.i);  
    printf("j=%f\n",s.j);  
    return 0;  
}
```

COMPLETE ALL THE TYPES OF CASES FOR THE NESTED UNIONS EXAMPLE 1 AND ADD THE CASES HERE

# Nested Unions - Example 2:
```c
//---nested unions example 2
typedef union sample1
{
	int i;
	union complex
	{
		double j;
	};
}sam;

int main()
{
	printf("sizeof union s=%d\n",sizeof(sam));
	sam s;
	s.i=100;
	printf("i=%d\n",s.i);
	s.j=200.256;
	printf("j=%f\n",s.j);
	return 0;
	}
```

```c
//examples on nested union/struct combo  
#include<stdio.h>  
  
//example 1  
struct sample  
{  
    int i;  
    union complex  
    {  
       double j;  
    };  
};  
int main()  
{  
    struct sample s;  
    printf("size of struct s=%d\n",sizeof(s));  
    printf("size of struct member s.i=%d\n",sizeof(s.i));  
    printf("size of struct member s.j=%d\n",sizeof(s.j));  
    return 0;  
}
```
The output of the above code is :
```
size of struct s=16
size of struct member s.i=4
size of struct member s.j=8
```

## Example 2:

```c
//example 2  
struct sample  
{  
    int i;  
    union complex  
    {  
       char c;  
       float j;  
    };  
};  
int main()  
{  
    struct sample s={10,'w',200.434};  
    printf("size of struct s=%d\n",sizeof(s));  
    printf("size of struct member s.i=%d\n",sizeof(s.i));  
    printf("size of union member s.c=%d\n",sizeof(s.c));  
    printf("size of union member s.j=%d\n",sizeof(s.j));  
    printf("i=%d\n",s.i);  
    printf("c=%c\n",s.c);  
    printf("j=%f\n",s.j);  
    return 0; 
}
```

```
size of struct s=8
size of struct member s.i=4
size of union member s.c=1
size of union member s.j=4
i=10
c=w
j=0.000000
```

## Example 3
```c
Anonymous_union -- check and add in the notes
```

```

```

# BitFields
```c
struct sample
{
int i;
};
```

If  we want to save memory spaces , we can use the concept of bitfields. This approaches how many memory each variable uses and then allots memory accordingly to save memory.
For example i=4 , this needs only 3 bytes of memory , but usually we allot 4. So we can allot it 3 bytes and save memory.

Examples:

```c
#include<stdio.h>

//example 1
struct sample
{
	int age:3;
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	printf("enter the value of age\n");	
	//scanf("%d",&s.age);//throws error, because are not bit-addressable
	s.age=3;//-3,-2,-1,0,+1,+2,+3 for int age:3;(i.e for signed bit)
	printf("%d\n",s.age);
	return 0;
}
```

We get error for the scanf due to bitfields. When we try to store value from the user end we cannot use & operator. Bit addressing is not possible and only byte addressing is possible.
