A Linked List can be defined as collection of objects called `nodes` that are randomly stored and logically connected via memory links.

Few Questions to think about :
Can we have a pointer data member inside a structure? 
YES
### Method 1:
```c
#include<stdio.h>  
struct A{  
    int a;  
    int *b;  
};  
int main(){  
    struct A a1;  
    struct A a2;  
    a1.a = 100;  
    int c = 200;  
    a1.b = &c;  
    printf("a1 values are : %d %d \n",a1.a,*(a1.b));//100 200
    a2=a1;  
    printf("a2 values:%d and %d\n", a2.a, *(a2.b));//100 200
    a1.a = 300;  
    *(a1.b) = 400;  
    printf("a2 values:%d and %d\n", a2.a, *(a2.b)); // 100 400  
    printf("a1 values:%d and %d\n", a1.a, *(a1.b)); // 300 400  
    struct A *p=&a1;  
    printf("a1 values:%d and %d\n", p->a,*(p->b)); // 300 400  
    return 0;  
}
```

### Method 2:
```c
#include<stdio.h>

struct Sample {
    int a;
    int *b;
};

int main() {
    struct Sample s;
    s.a = 100;
    s.b = &(s.a);
    printf("%d %d\n", s.a, *(s.b)); // Output: 100 100

    struct Sample s1;
    s1.a = 100;
    s1.b = &(s1.a);
    printf("%d %d\n", s1.a, *(s1.b)); // Output: 100 100

    struct Sample s2 = s1;
    printf("%p %p\n", (void *)s1.b, (void *)s2.b); // Same memory address since s2.b was copied from s1.b

    printf("%d %d\n", s2.a, *(s2.b)); // Output: 100 100

    s2.a = 200;
    printf("%p %p\n", (void *)s1.b, (void *)s2.b); // Same memory address, pointer not changed
    printf("%d %d\n", s1.a, *(s1.b)); // Output: 100 100, s1.a unchanged
    printf("%d %d\n", s2.a, *(s2.b)); // Output: 200 100, s2.a updated but s2.b points to s1.a

    *(s2.b) = 300;
    printf("%p %p\n", (void *)s1.b, (void *)s2.b); // Same memory address, pointer not changed
    printf("%d %d\n", s1.a, *(s1.b)); // Output: 300 300, s1.a changed through s2.b
    printf("%d %d\n", s2.a, *(s2.b)); // Output: 200 300, s2.a still 200, s2.b (s1.a) is 300

    s2.b = &(s2.a);
    *(s2.b) = 400;
    printf("%p %p\n", (void *)s1.b, (void *)s2.b); // Different memory address, s2.b now points to s2.a
    printf("%d %d\n", s1.a, *(s1.b)); // Output: 300 300, s1.a and s1.b unchanged
    printf("%d %d\n", s2.a, *(s2.b)); // Output: 400 400, s2.a and s2.b are now 400

    return 0;
}

```

### Version 3:
```c
#include<stdio.h>
#include<stdlib.h>
struct A { int a; int *b; };
int main() { 
struct A a1;
struct A a2; 
a1.a = 100; 
a1.b = (int*) malloc(sizeof(int));
*(a1.b) = 200; 
printf("a1 values:%d and %d\n", a1.a, *(a1.b)); // 100 200 
a2 = a1; 
printf("a2 values:%d and %d\n", a2.a, *(a2.b)); // 100 200 
free(a2.b); // a1.b too becomes dangling pointer 
printf("a1 values:%d and %d\n", a1.a, *(a1.b)); // 100 undefined behaviour 
return 0; }
```

### Version 4:
```c
int main(){
struct A a1;
struct A a2;
a1.a=100;
a1.b=(int*)malloc(sizeof(int));
*(a1.b)=200;
printf("a1 values are %d and %d " , a1.a , *(a1.b)); //100 200
a2 = a1;
a2.b = (int*) malloc(sizeof(int));
// changing this to a1.b creates garbage and output differs 
printf("a2 values:%d and %d\n", a2.a, *(a2.b)); // 100 junk value 
printf("a1 values:%d and %d\n", a1.a, *(a1.b)); // 100 200 
free(a1.b); free(a2.b); 
return 0
}
```

Q) Can we have a structure variable inside another structure?
YES
```c
#include<stdio.h> 
struct A
{
int a; 
};
struct B {
int a;
struct A a1;
}; // structure variable a1 as a data member in B
int main() 
{
printf("sizeof A %d\n",sizeof(struct A));
printf("sizeof B %d\n",sizeof(struct B)); // more than A return 0;
}
```

Q) Can we have a structure variable inside the same Structure? 
No - this results in a compile time error - Field  a1 has  incomplete type
```c
struct A
{
int a;
struct A a1;
};
```

The solution to this can be : have a pointer of the same type(structure) inside the structure.

## Self Referential Structures

A structure which has a pointer to itself as a data member is called self referential structure.
In this type of structure, the object of the same structure points to the same data structure and refers to the data types of the same structure.
It can also have more than one pointers pointing to the same type of structure as their member.

Example:
```c
#include<stdio.h>
struct Sample{
int a;
struct sample *p;
};
int main(){
printf("%d \n",sizeof(struct Sample));
struct Sample s;
s.a=100;
s.p=&s;
printf("%d %d %d \n",s.a,s.p->a,p->a); //all are 100
return 0;
}
```


# Linked Lists

Linked list contains a node which contains 2 minimum fields - Data stored at a particular address and the pointer which contains the address of the next node in the memory. The last node of the list contains a memory link or a pointer to NULL. Memory links are utilized to connect the nodes of a linked list.
A node has 2 parts - data(head) and the link

### Characteristics of the linked list 
1) Consists of zero or more nodes. Every node is composed of minimum two fields - data/component field and pointer field.
2) We can access the nodes one after the other. There is no way to access the node directly as random access is not possible in a linked list. Lists have sequential access.
3) Insertion and deletion in a linked list at a given position requires no shifting of elements.

### Differences between Arrays and Linked Lists
Array
1) collection of same data type.
2) traversal through indexes.
3) Elements are stored in contagious address space.
4) Random access is faster.
5) Insertion, Deletion of an element is not that efficient 
6) Fixed Size
7) Memory allocation decided during compile time.

Linked List
1) collection of unordered linked elements known as nodes.
2) traversal through the head until we reach the last node.
3) Elements are at random address spaces
4) Random Access is comparatively slower
5) Insertion and Deletion of element is efficient.
6) Dynamic Size
7) Memory Allocation decided during runtime or dynamic allocation

```c
typedef struct node 
{
int a;
struct node *ptr;
}n;
```
To define large array of structures - but there are no continuous memory allocation.
So we cant use large array of structures as for this case there is no continuous memory allocation.
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
# Types of Linked Lists

1) **Singly Linked List -** Linked only in one direction.
2) **Doubly Linked List** - Linked in both directions.
3) **Circular Linked List -** The last element of the list is linked to the first element of the list.

For our syllabus - we have only Insertion in the frontend and Frontend deletion.
Rest all topics are removed from the syllabus.

Operations that can be performed on a linked list are :
1) Insertion
2) Deletion
3) Search - Linear and Binary Search
4) Display
5) Merge
6) Concatenate

### Programs to Understand Linked Lists

`Node_creation.c`[Refere the code repository to check this file]
Method 1:
```c
#include<stdio.h>
#include<stdlib.h>

typdef struct node
{
int info;
struct node *link;
}n;

int main(){
	n n1;
	n1.info=10;
	n1.link=&n1;
	printf("a=%d\n",n1.info);
	printf("link=%p",n1.link);
	return 0;
}
```
Method 2 : Using Dynamic memory function to create a Node
```c
#include<stdio.h>
#include<stdlib.h>

typdef struct node
{
int info;
struct node *link;
}n;

int main(){
n *head = malloc(sizeof(n));
printf("enter the value for a \n");
scanf("%d",&head-->info);
printf("a=%d \n",head-->info);
printf("node link is initialized to NULL \N");
head --> link = NULL;
printf("link =%p",head-->link);
return 0;
}
```


Create a structure called node , linking pointer as link , make a Single Linked List 
My code:
```c
#include<stdio.h>
typedef struct node
{
int ele;
struct node *link
}n;

n *insert(n *head)
{
n* (new=malloc(sizeofn));
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

Using Switch Cases:

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

# Bit Fields
```c
struct sample
{
int i;
};
```

If  we want to save memory spaces , we can use the concept of bitfields. This approaches how many memory each variable uses and then allots memory accordingly to save memory.
For example i=4 , this needs only 3 bytes of memory , but usually we allot 4. So we can allot it 3 bytes and save memory.
Here ``	int age:3; `` This specifies 3 bits are allotted to age variable.

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

We get error for the scanf due to bitfields. When we try to store value from the user end we cannot use & operator. Bit addressing is not possible and only byte addressing is possible .

Example 2:
```c
struct sample
{
	int age:3;
	int year:16;
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	printf("enter the value of age\n");	
	//scanf("%d",&s.age);//throws error, because are not bit-addressable
	s.age=3;//-3,-2,-1,0,+1,+2,+3 for int age:3;(i.e for signed bit)
	printf("%d\n",s.age);
	s.year=25;
	printf("%d\n",s.year);
	return 0;
}
```
In the above example an integer has 32 bits ( 4 bytes )
Here 3 bits are allotted for age and 16 bits for variable year.
19 bits out of 32 bits are being used for this structure.


Example 3:

```c
//example 3: to escape boundary
struct sample
{
	int a:3;
	//int i:0;//throws error
	int :0;
	int b:10;
};
int main()
{
	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));//observe the memory allocation
	return 0;
}
```
We cant create a member in a structure and assign it to 0 using bitfields. 
So ``int i:0`` is not valid.
We cannot assign bitfields to arrays. It is not valid.

Example 4: DONTS in bit fields: bit-fields not possible for arrays
Compiler does byte addressing and not bit addressing.
```c
struct sample
{
	int a[4]:10;//error, invalid type
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
```

Example 5:
Pointer is also byte addressing and hence it also throws an error for bitfields which uses bit addressing.
```c
struct sample
{
	int a:10;
	int *p:24;//error, invalid type
};
int main()
{
	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
```

Example 6:
Storage Classes  not possible for bitfields.
```c
struct sample
{
	static int a:10;
};
int main()
{
	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
```

Example 7:
```c
struct sample
{
	int a:34; //error: width of 'a' exceeds its type
};
int main()
{
	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
```
Here a is a signed integer. We are asking it to store  34 bits when the maximum space is 32 bits.
So we get an error saying Width of `a` exceeds its type.
