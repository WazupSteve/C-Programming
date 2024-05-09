Let us start with an example

```c
#include<stdio.h>

void display(parameter){
printf("inside the display function");
}
int main()
{
display(parameter); //calling the function to invoke it
void (*fp)(parmeter) = display;//using a function pointer to call the display function
fp(); //calling the display function through the function pointer
return 0;
}
```

We can have a function pointer pointing to the function in the code.
The function parameter and the pointer parameters must be the same to create it.
The pointer must have the same syntax as the function.

For the above example replace parameter with empty ( ) as its a void function.
Its just added as `parameter` for understanding purposes.

In the above example both initialization and declaration is done at the same time. It can be done separately too

Two differences
`int  *add(int a , int b);`
Function `add` which returns pointer as a return value

`int (*add)(int a , int b);`
`add` becomes a Function pointer

EXAMPLE - Simulate addition and multiplication using Function Pointers

```c
#include<stdio.h>

// Function declarations
int addition(int a, int b);
int multiplication(int a, int b);

// Addition function
int addition(int a, int b) {
    int sum = a + b;
    return sum;
}

// Multiplication function
int multiplication(int a, int b) {
    int mul = a * b;
    return mul;
}

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integer values:\n");
    scanf("%d %d", &a, &b);

    // Function pointers for addition and multiplication
    int (*add)(int, int) = addition;
    int (*mult)(int, int) = multiplication;

    // Output the results of the addition and multiplication
    printf("Sum: %d\n", add(a, b));
    printf("Product: %d\n", mult(a, b));

    return 0;
}
```

`printf("%p",fp)` gives the starting address of the code.
`printf("%p",&fp)` gives the address of the function pointer.
`sizeof()` gives the size of the function pointer.

## Callback 

Callback is a user defined function( executable code ) that is passed as an argument to another user defined function (executable code)
Usually the function is invoked inside the outer function to complete a routine execution or action
Example : SQL queries , Google Maps

EXAMPLE:
```c
#include <stdio.h>

int add(int x, int y , int z) 
{ 
	return x+y+z;
}
int mul(int x, int y,int z) 
{ 
	return x*y*z; 
}
int calc(int(*fnp)(int , int ,int),int x,int y,int z)
{ 
	return fnp(x,y,z);
} 
int main(){
	printf("entered inside the main function \n");
	printf("sum = %d \n",calc(add,1,2,1));
	printf("mul = %d",calc(mul,5,2,2)); 
	return 0; 
}
```

QUESTION:
Accept the array(integer) elements from the user. Imitate map function to increment every array element by one.
SYNTAX : ``map(callable,iterable)``
`callable` must be the user defined function 
`iterable` must be the array

`ANSWER :`

```c
#include<stdio.h>  
int n;  
void map(void (*fp)(int *),int a[]){  
    for(int i =0 ; i<n ; i++){  
        fp(&a[i]);  
    }  
}  
void add(int *ele){  
    *ele = *ele + 1 ;  
}  
  
int main(){  
    printf("enter the array size \n");  
    scanf("%d",&n);  
    int a[n];  
    printf("enter the array elements \n");  
    for(int i=0;i<n;i++){  
        scanf("%d",&a[i]);  
    }  
    map(add,a);  
    for(int i=0;i<n;i++){  
        printf("%d \t",a[i]);  
    }  
    return 0;  
}

```

## Implement For Callback with Bubble Sort 

```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//menu driven program to perform selection sort on array of structures using array of pointers based on roll_no and name

struct student
{
	int roll_no;
	char name[20];
};
typedef struct student stud;


void bubble_sort(int (*fp)(),int n,int *asp[n])
{
	for(int i=0;iMn-2;i++){
		for(int j=0;jA<n-2-i;j++){
			if(fp(asp[j],asp[j+1]))
			{
				swap(&asp[j],asp[j+1]);
			}
		}
	}
}
void display(stud as[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d %s",as[i].roll_no,as[i].name);
	}
}
void display_ap(stud *asp[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d %s",asp[i]->roll_no,asp[i]->name);
	}
}
void swap(stud **x,stud **y)
{
	stud *temp=*x;
	*x=*y;
	*y=temp;
}
int bs_roll_no(stud *x,stud *y)
{
	return x->rollno > y->rollno			
}

void bs_name(stud *asp[],int n)
{
	for(int i=0;i<=n-2;i++)
		for(int j=0;j<=n-2-i;j++)
			if(asp[j]->name > asp[j+1]->name)
				swap(&asp[j],&asp[j+1]);
}
void create_as(stud as[],int n)
{
	char str[50],*token;
	FILE *fp=fopen("student.csv","r");
	printf("creating array of structures\n");
	fgets(str,50,fp);
	int i=0;
	while(fgets(str,50,fp)!=NULL)
	{
		if(i<n)
		{
			//printf("entered inside outer while loop\n");
			token=strtok(str,",");
			as[i].roll_no=atoi(token);
			token=strtok(NULL,",");
			strcpy(as[i].name,token);
			i++;
		}
		else
			break;
	}		
}
int main()
{
	
	printf("enter the number of student data to be created\n");
	int n;
	scanf("%d",&n);
	stud as[n],*asp[n];
	char str[50],*token;
	create_as(as,n);
	printf("creating array of structure pointers to array of structures\n");
	for(int i=0;i<n;i++)
	{
		asp[i]=&as[i];
	}
	printf("displaying array of structures using array of structure pointers\n");
	display_ap(asp,n);
	//FILE *wp=fopen("bs_asp_res.txt","w");
	for(;;)
	{
		printf("*******Bubble sort**********\n");
		printf("1: sorting using roll_no\n");
		printf("2: sorting using name\n3: display of student data using array of structures\n4: exit");
		printf("\nenter your choice\n");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("performing sorting using roll_no\n");
				bs_roll_no(asp,n);
				printf("after selection sort\n");
				display_ap(asp,n);
				FILE *wp=fopen("bs_asp_res.txt","w");
				for(int i=0;i<n;i++)
				{
					fprintf(wp,"%d,%s",asp[i]->roll_no, asp[i]->name);
				}
				break;
			case 2: printf("performing sorting using name\n");
				bs_name(asp,n);
				printf("after selection sort\n");
				display_ap(asp,n);
				rewind(wp);
				for(int i=0;i<n;i++)
				{
					fprintf(wp,"%d,%s",asp[i]->roll_no, asp[i]->name);
				}
				break;
			case 3: display(as,n);
				break;
			case 4: exit(0);
			default:printf("invalid choice\n");
		}
	}
	return 0;
}
```

//check the code implementation and understand the previous class concepts and get back to this to get a clearer understanding of the above code

```c
int bs_name(s *x , s*y)
{
	return strcmp(x-> name ,y->name);
}
```


