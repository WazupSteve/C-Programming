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
