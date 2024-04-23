1) Various ways of string initializers -  Complete and Partial Initialization.
2) Difference between strings and pointers pointing to string literals.
3) Inbuilt string functions.
4) Read/ Write strings - implement user defined string functions.

We can make use of arrays to store characters.
```char c[10]```
This is an array of characters , and we cannot leave the ```[]``` this blank , we need to initialize this without fail.
Complete initialization example and the ways of initialization of array.
End of the string can be denoted by ```\0``` . This is called **string terminating character.**
``char c1[] = {'a' ,'t' , 'm' , 'a' , '\0'}``
``char c2[] = "atma";``
The advantage of using c2 method over c1 is that we wont have to use the terminating string character.
When ``c4[6]="atmat"`` . Here we need to write one extra character in the ``[]`` because we need to allot space for  the string terminating character.
### Definition of Strings in C
A string in C is an array of characters and terminated with a special character `‘\0’`.
The ASCII value of the terminating character is 0 (NULL).
There is NO datatype available to represent a string in C.
### Declaration and Initialization of String
``Declaration: char variable_name[size];``
## Partial Initialization
``char c[10] = "atma";``
``char c[10] = {'a' ,'t' , 'm' , 'a' , '\0'}``
Since this is partial initialization in string , the remaining character positions are appended with ``\0``.

In this example :
``char c[10] = {'a' ,'t' , 'm' , 'a'}``

To print the characters in the array we can do this by using -  %c and %s
If we use %c then we need to make use of loops to print the characters
``for(i=0;c[i]!='\0';i++);``

```
char c[6] = "amazon";
printf("%s",c3);
```
Then a junk value will be printed as we have not allotted space for the string terminating character.
The corrected code block will be 
```
char c[7] = "amazon";
printf("%s",c3);
```

Here
``char c[10] = {'a' ,'t' , 'm' , 'a' , '\0','a' ,'t' , 'm' , 'a'}``
The moment it encounters /0 it will terminate and prints the first half only . The output would be ``"atma"``

Escape operator for ``\0``  would be ``"atma\\0"``
For  
``char c[10] = {"at\\0ma\0trisha}``
This prints ``"at\0ma"``

```c
char c[]="atma"
char *cp = c ;
printf("%s",c);
printf("%s",cp);
```
Printing using character pointer , we need to use cp instead of `*cp` in the above program.
```c
char *p = "pes"
char c[]= "atma"
```
Differences between these are , storage area for both of them are different.

``char c[]= "atma"``
if we try ``c[1]='a';`` we get the output as ``"aama"``
We can modify this by using index values if we use char method.

But in the pointer example we cannot do this as the pointer is pointing to a literal and changes cannot be made to that literal. 
We can try by incrementing the pointer.
We should use `*p` incase of %c and we have the advantage of not using `*p` , instead we can just use `p` 

## Inbuilt Functions used in C

These functions are present in `<string.h>`

1) **strlen()** - Takes one input as the parameter ( that is the string name ) and give the output as the length of the string.
Example:
```c
char c[]="pes university";
printf("length=%d",strlen(c));
```
The output of this would be 14.
The count of `\0` is not considered while calculating the length of the string.
```c
char c[]="pes university\\0";
printf("length=%d",strlen(c))
```
In this output would be 16.

2) strcpy() - Right to left assignment. This tries to copy one string to another . There are 2 string used in this - Source and Destination string.
Syntax - ``strcpy( destination , source )``

```
Example:
```c
char c[]="pes",b[11]="university";
printf("length=%d",strlen(c));
strcpy(b,c);
printf("b=%s",b);
```

If the length of c is lesser than b , and we try to copy value of b to c , then we will get 

```c
char c[]="pes",b[11]="university";
printf("length=%d",strlen(c));
strcpy(c,b);
printf("b=%s",b)
```

## String Concatenation)
``strcat( destination , source );``
## String Comparision
```
strcmp(string 1 , string 2);
strcmpi(string 1 , string 2);
```
The difference between `strcmp` and `strcmpi` is case sensitive behavior. `strcmpi` is case insensitive.
Follows Lexographical Order or ASCII values.
It is done RIGHT to LEFT.
It returns `1` if the string1>string2 with ASCII
returns `0` if string 1 = string 2 
returns `-1` if string 1 < string 2

## strchr()

``strchr(string_name , 'char')``
If present it returns the address of the character , if not present it returns 0 (null).

To accept characters other than ``\n`` we can do this by using 
``scanf("%[^\n]",s)``

``gets(s)`` and ``puts(s)``

```c
char  s[20];
printf("enter string");
scanf("%[^\n]",s);
printf("%s",s);
scanf("%s",s);
printf("%s",s);
return 0;
```
Let the input be Pes University
The Output would be 
```
Pes University
Pes
```

The other possible ways of accepting and printing will be gets(s) and puts(s)
```c
char  s[20];
printf("enter string");
gets(s);
puts(s);
return 0;
```

Find the length of the string without using built in functions
```c
gets(s);
puts(s);
int count = 0;
for(int i =0 ; s[i]!='\0';i++)
{
count++
}
printf("Total length of the string is : %d ",count);
return 0;
```

Arrays becomes pointers during runtime . So hence using pointers can also be a simpler approach for tackling such problems.
### strchr(s,char)

This tries to compare the character if its present in the string and then returns its address of the particular location.

By using strchr()
```c
#include <stdio.h>
#include <string.h> 

int main() {
    char s[20], ch;
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    printf("Enter a character to be searched: ");
    scanf(" %c", &ch); // Notice the space before %c
    
    // Use strchr to search for the character in the string
    if (strchr(s, ch) != NULL) {
        printf("Character found in the string.\n");
    } else {
        printf("Character not found in the string.\n");
    }
    
    return 0;
}
```

This is done without using strchr() function

```c
#include <stdio.h>

int main() {
    char s[20], ch;
    int found = 0;
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    printf("Enter a character to be searched: ");
    scanf("%c", &ch);
    
    // Check each character in the string
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("Character found in the string.\n");
    } else {
        printf("Character not found in the string.\n");
    }
    
    return 0;
}
```


# Dynamic Memory Management

## Malloc()

Syntax - `` data_type *pointer (void*) mallloc()``
``void *malloc(size_t N);`` This allocated N bytes of memory
Example:
``int *ptr = (int*) malloc(sizeof(int));``

Example :
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int *p = malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Unsuccessful allocation\n");
        return 1; // Exiting with failure status
    } else {
        printf("Successful memory allocation\n");
        printf("Starting address = %p\n", (void *)p);
        printf("Enter the array elements:\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &p[i]);
		}
        printf("The array elements are:\n");
        for (int i = 0; i < n; i++){
            printf("%d ", p[i]); // Added space after each element
        printf("\n"); // Newline for better output formatting
    }
}
    // Free allocated memory
    free(p);

    return 0; // Exiting with success status
}
```

Difference between malloc and calloc() is :
`   malloc()` and `calloc()` are both functions in C used for dynamic memory allocation. However, they have some key differences:

1. **Functionality**:
    - `malloc()`: Allocates a block of memory of a specified size in bytes. The allocated memory is not initialized, meaning it may contain garbage values.
    - `calloc()`: Allocates a block of memory of a specified number of elements, each of a specified size in bytes. The allocated memory is initialized to zero.
2. **Parameters**:
    - `malloc()`: Takes a single parameter representing the total number of bytes to allocate.
    - `calloc()`: Takes two parameters - the number of elements to allocate and the size of each element in bytes.
3. **Initialization**:
    - `malloc()`: Does not initialize the memory block. The content of the allocated memory is indeterminate.
    - `calloc()`: Initializes the allocated memory block with zeros.
4. **Return Value**:
    - Both `malloc()` and `calloc()` return a pointer to the beginning of the allocated memory block. If the allocation fails, both return `NULL`.
5. **Usage**:
    - `malloc()` is commonly used when you need to allocate memory without necessarily initializing it or when you need to reallocate memory using `realloc()`.
    - `calloc()` is often used when you want to allocate and initialize memory for arrays, matrices, or structures.
## Realloc()

`realloc()` is a function in C used for dynamic memory allocation. It allows you to resize the memory block previously allocated by `malloc()`, `calloc()`, or `realloc()` itself. It can also be used to allocate memory if the pointer passed to it is `NULL`.

Here's some key information about `realloc()`:

1. **Syntax**:
   ```c
   void *realloc(void *ptr, size_t size);
   ```
   - `ptr`: Pointer to the previously allocated memory block.
   - `size`: New size of the memory block in bytes.

2. **Return Value**:
   - If the reallocation is successful, it returns a pointer to the newly allocated memory block.
   - If the reallocation fails, it returns `NULL`. In this case, the original memory block remains unchanged.

3. **Behavior**:
   - If `ptr` is `NULL`, `realloc()` behaves like `malloc(size)` and allocates a new memory block of the given size.
   - If `ptr` is not `NULL`, `realloc()` resizes the memory block pointed to by `ptr` to the new size specified by `size`. If possible, it extends or reduces the size of the existing memory block.
   - If the reallocation results in moving the memory block to a new location, the contents of the old block are copied to the new block. If the block cannot be resized in place, a new block is allocated, and the data is copied over.

4. **Usage**:
   - `realloc()` is useful when you need to resize dynamically allocated memory, such as when working with arrays or dynamic data structures like linked lists and dynamic arrays.

Here's a simple example to demonstrate the usage of `realloc()`:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int initialSize = 5;
    
    // Allocate memory for initialSize elements
    ptr = (int *)malloc(initialSize * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers:\n", initialSize);
    for (int i = 0; i < initialSize; i++)
        scanf("%d", &ptr[i]);

    // Reallocate memory to double the size
    int newSize = initialSize * 2;
    ptr = (int *)realloc(ptr, newSize * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter additional %d integers:\n", initialSize);
    for (int i = initialSize; i < newSize; i++)
        scanf("%d", &ptr[i]);

    printf("All integers entered:\n");
    for (int i = 0; i < newSize; i++)
        printf("%d ", ptr[i]);
    printf("\n");

    // Free allocated memory
    free(ptr);

    return 0;
}
```

Explanation:
- Initially, memory is allocated for 5 integers using `malloc()`.
- The user inputs 5 integers into the allocated memory.
- `realloc()` is then used to double the size of the memory block.
- The user inputs an additional 5 integers into the newly allocated memory.
- Finally, all integers entered are printed, and the allocated memory is freed using the free() function.

This example demonstrates how `realloc()` can be used to resize dynamically allocated memory to accommodate changing requirements.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int i;

    // Allocate memory for an array with 5 elements
    array = (int *)malloc(5 * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize the array with elements 1, 2, 3, 4, 5
    for (i = 0; i < 5; i++) {
        array[i] = i + 1;
    }

    // Resize the array to accommodate 7 elements
    array = (int *)realloc(array, 7 * sizeof(int));
    if (array == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Assign the new elements (6 and 7)
    array[5] = 6;
    array[6] = 7;

    // Print the updated array
    printf("Updated array:\n");
    for (i = 0; i < 7; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);

    return 0;
}
```

(OR)

Class method ( using for loops and then taking input and then printing  the array elements)
```c
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    int *p=calloc(n,sizeof(int));
    if(p==NULL){
        printf("Unsuccessful allocation\n");
    }
    else{
        printf("Success Memory alloactaion\n");
        printf("Starting address=%p\n",p);
        printf("Enter the array elements:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&p[i]);
        }
        printf("Array elements are\n");
         for(int i=0;i<n;i++){
            printf("%d\n",p[i]);
        }
    }
    int m;
    printf("How many elements more would like to add?\n");
    scanf("%d",&m);
    if((m+n)>n){
        p=realloc(p,m+n);
        printf("Enter the array elements:\n");
        for(int i=n;i<m+n;i++){
            scanf("%d",&p[i]);
        }
        printf("Array elements are\n");
         for(int i=0;i<m+n;i++){
            printf("%d\n",p[i]);
        }
        } 
    else{
        p=realloc(p,0);
        printf("Array elements are\n");
        for(int i=0;i<m+n;i++){
            printf("%d\n",p[i]);
    }}
}
```
## free()

### `free()`

In C, the `free()` function is used to deallocate memory that was previously allocated using `malloc()`, `calloc()`, or `realloc()`. This is crucial for preventing memory leaks in programs. When you dynamically allocate memory using `malloc()` or its counterparts, it's your responsibility as a programmer to release that memory when it's no longer needed.

Here's how you use `free()`:

```c
free(pointer_to_allocated_memory);
```

Where `pointer_to_allocated_memory` is a pointer to the memory you want to deallocate.

### Dangling Pointers

A dangling pointer is a pointer that points to memory that has been deallocated (freed). Accessing the memory through such a pointer can lead to undefined behavior, as the memory may have been reassigned for other purposes or may no longer be accessible.

Dangling pointers often occur when you free memory but continue to use pointers that were pointing to that memory. It's important to avoid using dangling pointers in your programs.

### Example of Dangling Pointer

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    *ptr = 42; // Assign a value to the allocated memory
    printf("Value before freeing: %d\n", *ptr);

    free(ptr); // Free the allocated memory

    // Now ptr is a dangling pointer
    printf("Value after freeing: %d\n", *ptr); // Accessing freed memory - undefined behavior

    return 0;
}
```

In this example, we allocate memory for an integer using `malloc()`, assign a value to it, and then free the memory using `free()`. After freeing the memory, we attempt to access the memory through the pointer `ptr`, which now becomes a dangling pointer. Accessing the memory through this dangling pointer results in undefined behavior.

## Questions
1) Read and write strings using user defined functions - by passing a value and by passing it as reference 
2) Use pointers to print every character of a string -> use for loop
3) Solve questions from slides which were mentioned

Naive string matching algorithm
differennt ttypes of string matching algorithms  ( 4 are there)

striuctures in c programming ( refer slides and write notes for this part )

# Structure 
typedef can be declared before or after the structure
```c
typedef struct book{
int bid;
char auth,n[20];
float price;
}b;
```


We can also write this as
```c
struct book{
int bid;
char auth_n[20];
float price;
}
typedef struct book b;
```


Example implementation
c
```c
for(int i=0;i<n;i++){  \\here n=3
printf("BID!");scanf("%d"&bs[i].bid);
printf("auth_name=");scanf("%s"&bs[i].auth_n);
printf("price=");scanf("%f"&bs[i].price);
}
for(int i=0;i<n;i++){  \\here n=3
printf("b_id=%d", b[i].b_id);
printf("auth=%s", b[i].auth_n);
printf("price=%f", b[i].price);
}
```

use `fflush(stdin)`wherever needed so that the buffer is avoided.

Complete working code done in class
c
// Online C compiler to run C program online
```c
#include  <stdio.h>
typedef struct book{
int bid;
char auth_n[20];
float price;
}b;
int read(int n, b bs[n]){
for(int i=0;i<n;i++){  //here n=3
printf("BID!");scanf("%d",&bs[i].bid);
printf("auth_name=");scanf("%s",bs[i].auth_n);
printf("price=");scanf("%f",&bs[i].price);
}
}
int write(int n, b bs[n]){
for(int i=0;i<n;i++){  //here n=3
printf("b_id=%d \n", bs[i].bid);
printf("auth=%s \n", bs[i].auth_n);
printf("price=%f \n", bs[i].price);
}
}
int main() {
    int n;
    b bs[n];
    printf("enter the value of n");
    scanf("%d",&n);
    read(n,bs);
    write(n,bs);
    return 0;
}
```
Output of the code:

```
enter the value of n1
BID!8
auth_name=gojo
price=69
b_id=8 
auth=gojo 
price=69.000000 
```


=== Code Execution Successful ===

Implement the same code using pointers
(try this at home /  copy paste code from teacher file)
c
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct book {
    int bid;
    char auth_n[20];
    float price;
} b;

int read(int n, b *bs) {
    for (int i = 0; i < n; i++) {
        printf("BID: ");
        scanf("%d", &(bs + i)->bid);
        printf("Author Name: ");
        scanf("%s", (bs + i)->auth_n);
        printf("Price: ");
        scanf("%f", &(bs + i)->price);
    }
}

int write(int n, b *bs) {
    for (int i = 0; i < n; i++) {
        printf("BID: %d\n", (bs + i)->bid);
        printf("Author Name: %s\n", (bs + i)->auth_n);
        printf("Price: %.2f\n", (bs + i)->price);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' book structures
    b *bs = (b *)malloc(n * sizeof(b));

    if (bs == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    read(n, bs);
    write(n, bs);

    // Free dynamically allocated memory
    free(bs);

    return 0;
}
```


This is the code implementation for the same as above : But in this code we are adding a extra functionality which asks for % increase in for each book 
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct book {
    int bid;
    char auth_n[20];
    float price;
} b;
int read(int n, b *bs) {
    for (int i = 0; i < n; i++) {
        printf("BID: ");
        scanf("%d", &(bs + i)->bid);
        printf("Author Name: ");
        scanf("%s", (bs + i)->auth_n);
        printf("Price: ");
        scanf("%f", &(bs + i)->price);
    }
}
int write(int n, b *bs) {
    for (int i = 0; i < n; i++) {
        printf("BID: %d\n", (bs + i)->bid);
        printf("Author Name: %s\n", (bs + i)->auth_n);
        printf("Price: %.2f\n", (bs + i)->price);
    }
}
void increasePrice(int n, b *bs, float *change_in_price) {
    for (int i = 0; i < n; i++) {
        (bs + i)->price += (bs + i)->price * (change_in_price[i] / 100);
    }
}
int main() {
    int n;
    float *change_in_price;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    b *bs = (b *)malloc(n * sizeof(b));

    if (bs == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    change_in_price = (float *)malloc(n * sizeof(float));
    if (change_in_price == NULL) {
        printf("Memory allocation failed!\n");
        free(bs);
        return 1;
    }
    read(n, bs);
    printf("Enter the percentage change in price for each book:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d: ", i + 1);
        scanf("%f", &change_in_price[i]);
    }
    increasePrice(n, bs, change_in_price);
    write(n, bs);
    free(bs);
    free(change_in_price);
    return 0;
}
```

### Recap of structures using pointers

```c
typedef struct stud
{
int book_id;
char auth_n[20];
float price;
}b;
```

```c
void read(b , *p)
{
scanf("%d",&p->bid);
scanf("%d",p->auth_n);
scanf("%d",&p->price);
}
```

### Array of structure

### Method 1

```c
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
b as [n];
for(int i=0;i<n;i++){
scanf("%d",&as[i].bid);
scanf("%s",as[i].auth_n);
scanf("%f",&as[i].price);
}
for(int i=0;i<n;i++){
printf("%d",as[i].bid);
printf("%s",as[i].auth_n);
printf("%f",as[i].price);
}
return 0;
}
```

### Method 2

```c
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
b as [n];
*sp = as;
for(int i=0;i<n;i++){
scanf("%d",&sp[i]->bid);
scanf("%s",sp[i]]->auth_n);
scanf("%f",&sp[i]]->price);
}
for(int i=0;i<n;i++){
printf("%d",sp[i].bid);
printf("%s",sp[i].auth_n);
printf("%f",sp[i].price);
}
return 0;
}
```


### Method 3

```c
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
b as[n];
*sp = as;
for(int i=0;i<n;i++){
scanf("%d",&(sp+i)->bid);
scanf("%s",(sp+i)->auth_n);
scanf("%f",&(sp+i)>price);
}
for(int i=0;i<n;i++){
printf("%d",(sp+i).bid);
printf("%s",(sp+i).auth_n);
printf("%f",(sp+i).price);
}
return 0;
}
```

### Different ways to use read and write functions for Array of Structures(User Defined)

read(n,as)
``
```
1)  Pass by value ----> void(int n,b as[n]);
2)  Pass by *    (single value ) ----> void(int n, b *sp);
```

write(n,as)
```
1) pass by value ----> void(int n, b as[n]);
2) pass by * ----> void(int n,b *sp);
``` 

## Array of Pointers

```c
int a[5];
int *ap[5];
```
This can be described as :
Each element of the pointer array is individually assigned to the original array.
Every pointer array element is assigned to every element of the original array.

Example:
```
ap[0]-->a[0]
ap[1]-->a[1]
```

OR

```
ap[0]=&a[0]
ap[1]=&a[1]
```

Example:
```c
int n;
paste the code sent in the class notes in whatsapp group or google drive 

```


For a single value pointer:
```c
int a[5];
int *p = a;
for(int i=0;i<n;i++){
 scanf("%d",&p[i]);
}
```

For array of pointers: We are not using the `&` the operator . This is now returning the address of the array of pointers. 
```c
ap[i]=&a[i];
for(int i=0;i<n;i++){
 scanf("%d",ap[i]);
}
```

Accept elements inside the array and print the array using array of pointers method (user defined function calling using pointers as the parameter)
```c
#include <stdio.h>

#define MAX_SIZE 100

// Function to read elements into the array
void readArray(int *arr, int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print the array using array of pointers method
void printArray(int *arr[], int size) {
    printf("Array elements using array of pointers method:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > MAX_SIZE) {
        printf("Size exceeds maximum limit.\n");
        return 1;
    }

    int arr[MAX_SIZE];
    int *arr_ptr[MAX_SIZE];

    // Assigning pointers to each element in the array
    for (int i = 0; i < size; i++) {
        arr_ptr[i] = &arr[i];
    }

    // Read elements into the array
    readArray(arr, size);

    // Print the array using array of pointers method
    printArray(arr_ptr, size);

    return 0;
}
```

``` 
for read(n,a)
read(n,a) ---------> pass by value --> read(int n,int a[n]);
           --------> read(int n , int *p);
```
We must not use this:
```
read(int n , int *ap[n]);
```

Therefore to accept an array of pointers
```
for read(n,ap)
read(n,ap) ----> receive by array of pointer itself--> read(int n , int *ap[n]);

		   ----> receive it as **ptr ----> read(int n , int **ptr);
```
So if we want to insert array elements then we need to use the above array of pointers approach.

Double Pointers topic to be done in the next class. Bubble Sort in double pointers.

## Double Pointers

![[WhatsApp Image 2024-04-17 at 12.32.38_97a6869b.jpg]]

```c
#include <stdio.h>

int main(){
int a;
printf("enter the value of a \n");
scanf("%d",&a);
printf("address of a =%p \n",&a);
int *p = &a;
printf("adress of stored inside p = %p \n",p);
printf("adress of pointer p = %p \n",&p);
int **dp = &p;
printf("adress of stored inside dp = %p \n",dp);
printf("adress of pointer dp = %p \n",&dp);
return 0;
}
```

### Update the values using this  :
1) use p to update a 
2) use dp to update a

## Recap
```c
#include <stdio.h>

int main(){
int a;
int *p=&a;
printf("%d \n",p); // 
printf("%d \n",*p); //  
printf("%p \n",p);// 
printf("%p \n",*p);// 
return 0;
}
```

```
1. `printf("%d \n",p);` prints the value of the pointer `p`, which is the address of `a`. However, this is not what you might expect. The `%d` format specifier is for printing integers, but `p` is a pointer, so you should use the `%p` format specifier instead. This line will likely cause a compilation warning or error.
2. `printf("%d \n",*p);` prints the value of the variable `a`, which is what `p` points to.
3. `printf("%p \n",p);` prints the value of the pointer `p`, which is the address of `a`. This time, the `%p` format specifier is used, which is correct for printing pointers.
4. `printf("%p \n",*p);` tries to print the value of the variable `a` as if it were a pointer, which is not correct. This line will likely cause a compilation warning or error.
```

```c
#include<stdio.h>
void read(int n,int *ap[n])
{

	for(int i=0;i<n;i++)
		scanf("%d",ap[i]);

}

void write(int n,int **dp)
{
	for(int i=0;i<n;i++)
		printf("%d\t%d\t%d\n",(dp+i),**dp++,*dp[i]);
}

int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],*ap[n];
    int **dp=&ap;
	printf("maping array address to array of pointers\n");
	for(int i=0;i<n;i++)
	{
		ap[i]=&a[i];
	}
	printf("enter the array elements\n");
	read(n,ap);
	printf("entered the array elements are\n");
	write(n,ap);
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
```


/check the code sent in the class to understand about this topic and swap function usingt double pointers


TODAY - ptr_arr_to_struct_arr.c
```c
typedef struct
{
int bid;
char auth_n[20];
float price;
}b;
```
```
read(n,ap[n]) --> read(int n,int *ap[])
			   --> read(int n,int **dp)
```

bubble sort using double pointers
linked lists
bit fields

