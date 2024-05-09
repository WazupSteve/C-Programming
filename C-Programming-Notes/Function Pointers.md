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

