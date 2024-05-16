Pre processor directives are the lines of code executed by the C pre-processor.
It is also called as the text substitution tool. It instructs the C compiler to do the necessary pre processing activity before the actual compilation.
All the pre processor commands begin with the # symbol.
## Macros 
A piece of code in a program which has been given a name.
During pre processing it substitutes the name with the piece of code.
#define directive is used to define a macro.
Memory is not allocated for macro.
Cannot be changed using the assignment operator.

## Types of Macros
1) User defined
2) Built in

### What all can be defined as a macro?
1) value
2) string
3) expression 
4) parameter
5) macro in another macro
6) file directives

Example :
Basic usage of predefined macros

```c
#include<stdio.h>
int main()
{
	printf("date is=%s\n",__DATE__); // date in MMM DD YYYY
	printf("time is=%s\n",__TIME__); // time in HH:MM:SS
	printf("file name is=%s\n",__FILE__);	//gives the current file name
	printf("current line number is=%d\n",__LINE__);	//gives the current line number
	if(__STDC__)		//to check whether the compiler compiles with the ANSII standard or not
		printf("compiled with ANSII standard\n");
	return 0;
}
```

Output of the code would look like:
```
C:\Users\amit0\CLionProjects\untitled\testing.exe
date is=May 15 2024
time is=12:28:35
file name is=C:\Users\amit0\CLionProjects\untitled\testing.c
current line number is=7
compiled with ANSII standard
```

To define a string as  macro, then we can use
`#define str "welcome"`
`#define exp 2+3` , so here exp is a macro and whenever used its substituted as 2+3 itself.

Example :
Run this code in the terminal using the command
``gcc -E filename.c``

```c
#include<stdio.h>  
#define PI 3.14  
int main()  
{  
    float p=PI;  
    //PI+=2; //macros cannot be chaged using assignment operator  
    printf("pi value=%.3f",p); //change this to p and see that it is not replaced yet at pre-processing stage  
    return 0;  
}
```
The output of this above code is:
```c
C:\Users\amit0\CLionProjects\untitled\testing.exe
pi value=3.140
Process finished with exit code 0
```
Macro value cannot be updated.
If we uncomment this line of code - 
```c
PI+=2;
```
then the output of the code will be :
```c
gcc.exe C:\Users\amit0\CLionProjects\untitled\testing.c -o testing
C:\Users\amit0\CLionProjects\untitled\testing.c: In function 'main':
C:\Users\amit0\CLionProjects\untitled\testing.c:6:7: error: lvalue required as left operand of assignment
     PI+=2; //macros cannot be chaged using assignment operator
       ^~
```

Example 2:

**A Macro cannot be assigned to a pointer**
```c
#include<stdio.h>
#define PI 3.14
int main()
{
	float *p=&PI;
	printf("pi value=%.3f",*p); //cannot have a pointer to macros
	return 0;
}
```
The output of this above code is :
```c
gcc.exe C:\Users\amit0\CLionProjects\untitled\testing.c -o testing
C:\Users\amit0\CLionProjects\untitled\testing.c: In function 'main':
C:\Users\amit0\CLionProjects\untitled\testing.c:5:14: error: lvalue required as unary '&' operand
     float *p=&PI;
```
Macro does not have any memory allocation , its just code substitution.

## Parameterized Macros

Example 3: 
This takes in a parameter named `x` 
```c
#define sqr(x)\
 x*x
```
The meaning of the front-slash is to inform that there is continuation in the next line , else we run into errors.

```c
#include<stdio.h>
#include<math.h>
//parameterized macro
#define sqr(x)\
 x*x			//use (x) * (x) for 2+3 kind of expression to get 5*5
//macros are just code substitutions
int main()
{
	int x=25;
	printf("square is =%d\n",sqr(x));
	printf("square root is =%f\n",sqrt(x));
	printf("square of 2+3 =%d\n",sqr(2+3));
	return 0;
}
```
Here for this line of code we get the output as :
```c
	printf("square of 2+3 =%d\n",sqr(2+3));
```
Here the expression looks like this :
`` 2+3*2+3`` = 11
If we use this :
```c
printf("square of 2+3 =%d\n",sqr((2+3)));
```
Here we get the output as:
``((2+3)*(2+3))`` =25

The Output of the entire code would be :
```c
C:\Users\amit0\CLionProjects\untitled\testing.exe
square is =625
square root is =5.000000
square of 2+3 =11

Process finished with exit code 0
```

Example 4:
Macro in another Macro

```c
#define add 10
#define str "welcome to c"
#define expr 10+5
#define sum add+expr
#include<stdio.h>
int main()
{
	int a=5;
	printf("original value of a=%d\n",a);
	a+=add;
	printf("new value of a is=%d\n",a);
	printf("string str is =%s\n",str);
	printf("expression is =%d\n",expr);
	printf("sum of two macro is =%d\n",sum);
	return 0;
}
```

The output of this code will be:
```c
C:\Users\amit0\CLionProjects\untitled\testing.exe
original value of a=5
new value of a is=15
string str is =welcome to c
expression is =15
sum of two macro is =25

Process finished with exit code 0
```

Here we have multiple Macros defined here.

### Example 5:

`#include_example.h`
```c
#define sio <stdio.h>   // to define a macro for c-standard library

#include sio

#include<string.h>

#include<stddef.h>

#include<float.h>

#include<limits.h>

#include<conio.h>
```

`#define_example.c`
```c
#define ud "#include_example.h"   
//to define a macro for the user-defined header file
#include ud
#include sio
int main()
{
	printf("checking the working of #define macro\n");
	printf("max range of unsigned int=%u",UINT_MAX);
	return 0;
}
```

``include_main_file.c``
```c
#include "#include_example.h"
#include sio
int main()
{
	char str2[50];
	printf("welcome to c\n");
	printf("%s\n",strcpy(str2,"check this"));
	printf("max range of unsigned int=%u",UINT_MAX);
	return 0;
}
```

### Example 6:
``original.h``, in the same root directory
```c
#define ORG 100
```

``subdirectory/original.h`` , its inside a folder named subdirectory which is in the same root directory.
```c
#include "C:\Users\MacBook Pro\Downloads\unit-5\pre-processor-directives\file_inclusion_exclusion_directives\original.h"

int org_val=ORG;
```

``file_inclusion_directive.c``

```c
#include<stdio.h>
/* #include_next behaves like the #include directive, 
   except that it specifically excludes the directory of the including file 
   from the paths to be searched for the named file.
*) This allows you to include multiple versions of a file with the same name 
   in different parts of an application; or to include one header file in 
   another header file with the same name 
   (without the header including itself recursively). 
   Provided that the different file versions are stored in different directories,
   the directive ensures you can access each version of the file,
   without requiring that you use absolute paths to specify the file name.
*/
#include "C:\Users\MacBook Pro\Downloads\unit-5\pre-processor-directives\file_inclusion_exclusion_directives\sub_directory\original.h"
int main()
{
	printf("%d",org_val);
	return 0;
}
```

The output of the above code would be : ``100

Example 7:

``pragma_directive.c``

```c
/*example for the use of pragma directive
to specify the fucntions that are to be started and ended before pragma start and exit
  3)#pragma warn: to hide warning messages (-rvl,-par, -rch)
*/
//if the natural allignment of the struct is lesser than the pack(n) value specified
//then, it will ignore the pack(n) value, and considers the natural allignment itself

#include<stdio.h>
#include<stddef.h>
#pragma pack(1) // n value can be 1,2,4,8,16....etc
struct sample
{
	int a:3;
	char b;
};
int main()
{
	printf("size of structure is %lu\n",sizeof(struct sample));
	//printf("offset of struct sample a=%d\n",offsetof(struct sample,a));
	printf("offest of struct sample b=%d\n",offsetof(struct sample,b));
	return 0;
}
```

In the above example:
We will use pack for structures in the above code.
If we comment ``#pragma pack(1)`` then we get the output as 
```c
C:\Users\amit0\CLionProjects\untitled\testing.exe
size of structure is 8
offest of struct sample b=4

Process finished with exit code 0
```

If we uncomment the ``#pragma pack(1)`` , then we the output as :
```c
C:\Users\amit0\CLionProjects\untitled\testing.exe
size of structure is 2
offest of struct sample b=4

Process finished with exit code 0
```
All these values are system are system dependent.
Do not break your head over the values.
Highly unlikely for a question to be asked on this topic for the size of structure as its system dependent.

``#include_next directive is not there in the syllabus
``Message generation directives and NULL directive is not there in the syllabus``

The padding will be removed , if the pack value is greater than the size of the structure.

## Conditional Compilation

Example 8:

```c
#include<stdio.h>    // This is the standard input/output library for C. It is necessary for using printf().

#define MAX 100      // This defines a macro named MAX with a value of 100.

int main() {
    // Start of the main function where the program execution begins.

    #ifdef MAX
        // This preprocessor directive checks if MAX is defined.
        int a = MAX;           // If MAX is defined, declare an integer variable 'a' and initialize it with the value of MAX (which is 100).
        printf("%d\n", a);     // Print the value of 'a', which will be 100.
    #endif
    // End of the first #ifdef block.

    #undef MAX
    // This directive undefines the macro MAX, so it no longer exists beyond this point.

    #ifdef MAX
        // This preprocessor directive checks if MAX is defined again.
        int b = MAX;           // This code will not be compiled because MAX is undefined.
        printf("%d\n", ++b);   // This code will not be compiled because MAX is undefined.
    #else
        // This block will be compiled because MAX is not defined.
        int b = 1;             // Declare an integer variable 'b' and initialize it with the value 1.
        printf("%d\n", b);     // Print the value of 'b', which will be 1.
    #endif
    // End of the second #ifdef/#else block.

    printf("a value outside ifdef=%d\n", a);
    // Print the value of 'a' outside of any #ifdef block.
    // Note: This will cause a compilation error because 'a' is declared inside an #ifdef block and is not accessible here.

    return 0;
    // Return 0 to indicate that the program ended successfully.
}
```

### Detailed Explanation

1. **Preprocessor Directives**:
    - `#include<stdio.h>`: This includes the standard input/output library needed for `printf`.
    - `#define MAX 100`: This defines a macro `MAX` with the value `100`.
2. **Main Function**:
    - **First `#ifdef MAX` Block**:
        - `#ifdef MAX`: Checks if `MAX` is defined.
        - `int a = MAX;`: If `MAX` is defined, declare an integer `a` and initialize it with `100` (the value of `MAX`).
        - `printf("%d\n", a);`: Print the value of `a`, which will be `100`.
    - `#undef MAX`: This undefines the macro `MAX`, so it no longer exists beyond this point in the code.
        
    - **Second `#ifdef MAX` Block**:
        - `#ifdef MAX`: Checks if `MAX` is defined again.
        - Since `MAX` is now undefined due to `#undef`, the code inside this block is skipped.
        - `#else`: Since `MAX` is not defined, the code inside the `#else` block is compiled.
        - `int b = 1;`: Declare an integer `b` and initialize it with `1`.
        - `printf("%d\n", b);`: Print the value of `b`, which will be `1`.
3. **Print Statement Outside of `#ifdef` Block**:
    - `printf("a value outside ifdef=%d\n", a);`: Attempts to print the value of `a` outside of any `#ifdef` block.
    - This will cause a compilation error because `a` is declared inside an `#ifdef` block and is not accessible outside of it.
4. **Return Statement**:
    - `return 0;`: Return `0` to indicate successful execution of the program.
### Compilation Error
The program as it stands will cause a compilation error at the line:
`printf("a value outside ifdef=%d\n", a);`
This is because `a` is declared inside an `#ifdef MAX` block, making it out of scope in the rest of the `main` function.
### Summary
The code demonstrates the use of preprocessor directives `#ifdef`, `#undef`, and `#else` to conditionally compile parts of the code based on whether a macro is defined. The macro `MAX` is defined initially, used in one conditional block, then undefined, and the absence of `MAX` is checked in another block. The attempt to access a variable declared inside an `#ifdef` block outside of it leads to a compilation error, highlighting the scope limitations of such declarations.

### Example 9:
(NULL DIRECTIVES)
`` # `` defined with nothing is null directive.
We can also have a empty else block in C programming
We cannot leave the if block empty.

## Pragma
`pragma warn` 
`#pragma warn -rvl` // hide return value warning
`#pragma warn -par` //hide parameter never used warning

```c
#include<stdio.h>  
#pragma warn -rvl // hide return value warning  
#pragma warn -par //hide parameter never used warning  
//#pragma warn -rch //hide unreachable code warning  
  
int f1()    //-rvl : to hide the warning of not returning any value  
{  
    printf("not returning any value\n");  
    //return;  
}  
  
int f2()    //-par: to hide the warning of not accepting the parameter passed  
{  
    printf("not reciving the passed parameter in function f2\n");  
    return 5;  
}  
  
int f3()    //-rch : to hide the warning of not reachable codes  
{  
    printf("\nentered inside function f3\n");  
    return 2;  
    printf("trying to reach this statement after return statement\n");  
}  
  
int main()  
{  
    printf("return value of function f1=%d\n",f1());  
    printf("f2 not designed to accept parameter=%d",f2(3));  
    printf("tyring to fetch non reachable code of f3=%d",f3());  
    return 0;  
}
```
Be careful with printing the order of the results

### The explanation for the above program is explained below:

This code demonstrates how to suppress specific compiler warnings in C using `#pragma` directives. The warnings being suppressed are related to return values, unused parameters, and unreachable code.

Here's a breakdown of the code and what each part does:

1. **Suppressing Warnings with `#pragma` Directives**:
   - `#pragma warn -rvl`: Suppresses the warning for functions that do not return a value when they should.
   - `#pragma warn -par`: Suppresses the warning for functions that have unused parameters.
   - `//#pragma warn -rch`: This line is commented out, so it does not have any effect. If uncommented, it would suppress warnings about unreachable code.

2. **Function Definitions**:
   - `int f1()`: This function should return an integer but does not. It prints a message and exits without a return statement.
   - `int f2()`: This function does not use any parameters, but it should. It prints a message and returns 5.
   - `int f3()`: This function has a return statement followed by another statement, making the latter unreachable. It prints a message, returns 2, and has another `printf` that will never be executed.

3. **Main Function**:
   - `int main()`: This is the entry point of the program. It calls the above functions and prints their results.
   - `printf("return value of function f1=%d\n",f1());`: Calls `f1()` and attempts to print its return value, which will cause a runtime error since `f1` doesn't return anything.
   - `printf("f2 not designed to accept parameter=%d",f2(3));`: Calls `f2()` with an argument, even though `f2()` is not designed to accept any parameters.
   - `printf("trying to fetch non reachable code of f3=%d",f3());`: Calls `f3()` and prints its return value, even though part of its code is unreachable.

### Detailed Explanation of Each Function:

1. **Function `f1`**:
   ```c
   int f1() {
       printf("not returning any value\n");
       //return;
   }
   ```
   - This function prints a message and exits without returning a value, which is generally incorrect for a function declared to return an `int`.

2. **Function `f2`**:
   ```c
   int f2() {
       printf("not reciving the passed parameter in function f2\n");
       return 5;
   }
   ```
   - This function prints a message about not using any parameters and returns the integer 5. The call in `main` tries to pass a parameter, which `f2` ignores.

3. **Function `f3`**:
   ```c
   int f3() {
       printf("\nentered inside function f3\n");
       return 2;
       printf("trying to reach this statement after return statement\n");
   }
   ```
   - This function prints a message, returns the integer 2, and has an unreachable `printf` statement after the return.

4. **Main Function**:
   ```c
   int main() {
       printf("return value of function f1=%d\n",f1());
       printf("f2 not designed to accept parameter=%d",f2(3));
       printf("tyring to fetch non reachable code of f3=%d",f3());
       return 0;
   }
   ```
   - Calls `f1()`, which will not return a value, leading to undefined behavior when trying to print its return value.
   - Calls `f2(3)`, which ignores the parameter and prints the return value 5.
   - Calls `f3()`, prints its return value 2, but the unreachable `printf` inside `f3` does not execute.

### Summary:
This code demonstrates how to suppress specific compiler warnings using `#pragma` directives but is not good practice for writing clean, correct C code. Each function has intentional issues:
- `f1` does not return a value.
- `f2` ignores parameters.
- `f3` contains unreachable code.

The main function illustrates the consequences of these issues.
