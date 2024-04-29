Structure variable Declaration can be done in 2 ways:
1) Along with the declaration of the structure at the end of closing parenthesis.
```c
struct student
{
	int roll_no;
	char name[100];
	int marks;
}s[100];
```

2) After completion of the structure declaration.
--> Inside the main() function - ``struct student s[100]``
-->Globally using struct keyword
```c
struct student 
{
int roll_no;
char name[100];
int marks;
};
struct student s[100];
```
![[Pasted image 20240426184506.png]]

Flexible Array Member(FAM) is a feature introduced in the c99 standard. From c99 onwards we can declare an array without a dimension and whose size is flexible in nature.
The structure must contain at least one more named member in addition to the FAM.

### Initialization of Structures
1) Compile Time Initialization-Here, user has to enter the details within the program .

| Case 1:                                                                                   | `` struct student S1[] = { {1, "John", 60}, {2,"Jack", 40}, {3, "Jill", 77} };`` |
| ----------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------- |
| // size is decided by the compiler based on how many students details are stored          |                                                                                  |
| Case 2:                                                                                   | ``struct student S2[3] = { {1, "John", 60}, {2,"Jack", 40}, {3, "Jill", 77} };`` |
| // size is specified and initialized values are exactly matching with the size specified. |                                                                                  |
| Case 3:                                                                                   | ``struct student S3[3] = {1, "John", 60, 2,"Jack", 40, 3, "Jill", 77};``         |
| //initialization can also be done this way.                                               |                                                                                  |
| Case 4 :                                                                                  | ``struct student S4[5] = { {1, "John", 60} };``                                  |
| //partial initialization. Default values are stored in remaining memory locations         |                                                                                  |

2) Runtime Initialization -  This is the period of time when a program is running and user is allowed to enter the input values to the variables of the structures.
### Coding Example
1) Without Initializing any value to the member of the structure

```c
#include<stdio.h>
struct book
{
	int number;
};
int main()
{
	int n,i;
	struct book r[10];
	printf("enter how many books you want to store \n");
	scanf("%d",&n);
	for(int i=0;i<n;i)
	{
		printf("book numbe is %d" ,r[i].number);
	}
return 0;
}
```
Since no value is initialized to the member of the structure , it prints junk value or random value.

2) After Initializing value to the member of the structure.
```c
#include <stdio.h> 
struct book
{ 
	int Number;
}; 
int main() 
{ 
int n,i;
struct book r[10];
printf("Enter how many books you want to store\n"); 
scanf("%d",&n); // assumption n < =10 printf("Enter the book number of each\n"); 
for( i=0;i<n;i++)
{
	fflush(stdin);
	scanf("%d",&r[i].Number); 
}
for(i=0;i<n;i++) 
{
	printf("Book Number entered is:%d\n",r[i].Number); 
}
return 0;
}
```

Example 3:

```c
#include<stdio.h>
struct student
{
	int roll_no;
	char name[30];
	int marks;
}
int main()
{
	struct student s[100];
	int i;
	for(int i=0;i<3;i++)
	{
		printf("enter the roll_number and marks \n");
		scanf("%d %s %d,&s[i].roll_no,s[i].name,&s[i].marks);
	}
	printf("the details entered are: \n");
	for(int i=0;i<3;i++){
	printf("Roll number is : %d \n",s[i].roll_no);
	printf("Name is : %s \n",s[i].name);
	printf("Marks is : %d \n",s[i].marks);
	}
return 0;
}
```

## Pointers to an array of structures
 Pointer is used to access the array of structure variables efficiently.
 ```c
struct student
{
int roll_no;
char name[30];
int marks;
}ST[5];
```
So this is allocating 30 bytes of memory``( 5*4 = 30)`` to the structure.
![[Pasted image 20240426220053.png]]
So now if we assign ``struct student *ptr =ST;``  
This means that pointer ptr is of the type student structure and is currently holding the address pointed by the array of the structure ST(which is 1000) according to the above image.
![[Pasted image 20240426220317.png]]

## Pointers to Structures

A Pointer to a structure is a  variable that points to the address of the structure.
Syntax - ``struct tagname *ptr``
Two ways of accessing the members of the structure using pointers
1) Using indirection `*` operator and (.) operator.
2) Using arrow(-->) operator or membership operator.
## Array of Pointers to Structures
An array of pointers to structure is also a variable that contains the address of the structure variables.
Steps for creating array of pointers for structures:
Creation of array of structure variable
``struct tagname array_variable[size];``
Create an array of pointers with the size specified to hold the address of the structures in the array of the structure variables.
``struct tagname *pointer_variable[size]``

Coding example:

Printing the array of structures using array of pointers to structures
```c
#include<stdio.h>  
#include<string.h>  
typedef struct sample  
{  
    int a;  
    float b;  
}s;  
int main(){  
    s s1[]={{2,2.2},{1,1.1},{7,7.7},{4,4.4},{3,3.3}};  
    s *sp[1000];  
    int n = sizeof(s1)/sizeof(*sp);  
    printf("using array \n");  
    for(int i=0;i<n;i++){  
        printf("%d %f \n",s1[i].a,s1[i].b);  
    }  
    printf("using pointers \n");  
    for(int i=0;i<n;i++){  
        sp[i]=&s1[i];  
    }  
    for(int i=0;i<n;i++){  
        printf("%d %f \n" ,sp[i]->a,sp[i]->b);  
    }  
    return 0;  
}
```

Question 2:

Program to swap first and last elements of the array of structures and display the array of structures using (i)array of structures and (ii)array of pointers
```c
#include <stdio.h>  
#include <string.h>  
  
typedef struct sample {  
    int a;  
    float b;  
} s;  
  
void disp1(s *s1, int n) {  
    for (int i = 0; i < n; i++) {  
        printf("%d %f\n", s1[i].a, s1[i].b);  
    }  
}  
  
void disp2(s **sp, int n) {  
    for (int i = 0; i < n; i++) {  
        printf("%d %f\n", sp[i]->a, sp[i]->b);  
    }  
}  
  
void swap(s **a, s **b) {  
    s *temp = *a;  
    *a = *b;  
    *b = temp;  
}  
  
int main() {  
    s s1[] = {{2, 2.2}, {1, 1.1}, {7, 7.7}, {4, 4.4}, {3, 3.3}};  
    s *sp[100];  
    int n = sizeof(s1) / sizeof(*s1);  
  
    printf("before swap using array of structures\n");  
    disp1(s1, n);  
  
    for (int i = 0; i < n; i++) {  
        sp[i] = &s1[i];  
    }  
  
    printf("before swap using array of pointers to structures\n");  
    disp2(sp, n);  
  
    // swap(&s[0], &s[n-1]); // sp[0], sp[n-1]  
    swap(&sp[0], &sp[n-1]); // 2000, 2004  
  
    printf("after swap using array of structures\n");  
    disp1(s1, n); // no change in the original set  
  
    printf("after swap using array of pointers to structures\n");  
    disp2(sp, n); // first and last structures are swapped.  
  
    return 0;  
}
```

Questions to think about ( PESU notes )

1) Swapping using array of pointers is only swapping the pointers and not the array of
structures. Write the diagram for the swap code to understand better.
Answer:
### Diagram for the Swap Code Using Array of Pointers

- Suppose we have an array `s1` containing several `struct sample` instances.
- We also have an array `sp` which holds pointers to these instances.
```less
      s1[]:    | s1[0] | s1[1] | s1[2] | s1[3] | s1[4] |
                |-------|-------|-------|-------|-------|
                |  2,2.2 |  1,1.1 |  7,7.7 |  4,4.4 |  3,3.3 |

      sp[]:    | sp[0] | sp[1] | sp[2] | sp[3] | sp[4] |
                |-------|-------|-------|-------|-------|
                | &s1[0] | &s1[1] | &s1[2] | &s1[3] | &s1[4] |

```

**After Swap (swap(&sp[0], &sp[4])):**

- Only the pointers in `sp[0]` and `sp[4]` are swapped. The actual `s1` array remains unchanged.
```less
      s1[]:    | s1[0] | s1[1] | s1[2] | s1[3] | s1[4] |
                |-------|-------|-------|-------|-------|
                |  2,2.2 |  1,1.1 |  7,7.7 |  4,4.4 |  3,3.3 |

      sp[]:    | sp[0] | sp[1] | sp[2] | sp[3] | sp[4] |
                |-------|-------|-------|-------|-------|
                | &s1[0] | &s1[1] | &s1[2] | &s1[3] | &s1[4] |

```
This diagram shows that the elements pointed to by `sp[0]` and `sp[4]` are effectively swapped by altering the pointers, not the actual data in `s1`.

2) What is the significance of using Array of pointers to structures?
Answer:
To avoid member wise copy while swapping. If the structure has too many data members, this array of pointer makes sense.