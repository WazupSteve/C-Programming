##  Comprehensive List of Questions from the Provided Papers

Here's a breakdown of the questions from the provided PDF papers, categorized for better understanding and preparation:

**1.  Fundamentals of C Programming**

* **Program Development Life Cycle (PDLC)**
    *  Explain the phases involved in the PDLC with a neat diagram. (QP1, QP4, QP7)
    *  Draw a clear picture that shows the PDLC of a C Program. (QP4)
* **Basic C Constructs & Syntax**
    *  Write the syntax of if-else statement with a sample. (QP7)
    *  Explain different options of gcc to get the output of C code. (QP6)
    *  Mention the phases involved in the program development life cycle of a C Program. (QP1, QP4)
    *  Given a C program named p1.c, write the command used to only compile (and not link) p1.c. (QP5)
    *  Given a C program named p1.c, write the command used to compile and link p1.c. (QP7)
    *  Identify the compile time (if any) and link time errors (if any) in the given code snippet. (QP1, QP5, QP7)
    *  State true or false: break is an unconditional control construct which takes the control out of the enclosing loop or switch statement. (QP5)
    *  State true or false: continue is an unconditional control construct, which takes the control to the next iteration of the enclosed loop. (QP7)
    *  Mention the output of the following code pieces individually. (QP1, QP4)
* **Variables, Data Types, Operators**
    *  Categorize the following into valid and invalid variables in C language. If invalid, give reasons for invalidity. (QP1)
    *  What does the below code do? List any two variables in the same code. (QP6)
    *  How many bytes does sizeof(‘\r’) occupy? (QP1)
    *  How many bytes does sizeof(‘\n’) occupy? (QP4)
    *  Printf() instead of printf() leads to ________ error. (QP1, QP4)
    *  Scanf() instead of scanf() leads to ________ error. (QP1)
    *  State true or false:  ** is an operator in C. (QP4)
    *  State true or false: C is both compiled and interpreted language. (QP4)
    *  State true or false: There are multiple a.exe files in one folder. (QP4)
* **Control Flow Statements**
    *  Explain do-while and switch constructs in C with a coding snippet. (QP6)
    *  Explain the following commands in gdb. i) break               ii) list (QP2, QP5)
* **Arrays and Pointers**
    *  List any four differences between array and pointer. (QP2)
    *  Find the output of below code snippet when executed separately. (QP2, QP6)
    *  What does the below code do? List any two variables in the same code. (QP6)
    *  If the address of ``a[0][0]`` is 6000 and the size of integer is 4 bytes, find the address of `a[1][2].` Also mention what gets printed? (QP2, QP3, QP5)
    *  Explain array of pointers to integers with a code snippet. (QP6)
    *  Explain the terms Function declaration, Function definition, Argument, Parameter with the help of an example. (QP1)
* **Strings**
    *  Explain any three string manipulation functions with an example. (QP2)
    *  Find the output of the following code snippet when executed separately. (QP2, QP6)
    *  Find the output of the following code. (QP4, QP6)
* **Functions**
    *  Write a C function to compute the factorial of a number using recursion. Use it to compute C(n,r). (QP2)
    *  The below function emulates the strcat() in string.h. Complete the function by filling the missing code lines. (QP7)
    *  Write a C function to compute the factorial of a number using recursion. (QP7)
    *  Write a user defined function to copy one string to another string. Also test this function in the client code. (QP2)
    *  Write a C function that returns the smallest element from an integer array arr with n elements. (QP1)
    *  Write a C function that returns the biggest element from an integer array arr with n elements. (QP4)
    *  A function opr takes two integer parameters and returns an integer. Write a valid function pointer declaration that can store the address of opr. (QP6)

**2.  Pointers and Dynamic Memory Allocation**

* **Dynamic Memory Allocation**
    *  List any two functions related to dynamic memory allocation using C. Explain anyone with a code snippet.  (QP3, QP7)
    *  What is Dangling pointer? Explain with a code snippet. (QP6)
    *  If the same pointer variable is allocated memory more than once using the dynamic memory allocation functions, initially allocated memory space becomes a _________. `Garbage which has no name and hence no access in turn results in __________     //` 2 marks (QP1)
    *  To avoid dangling pointers after free() is used, ________ is assigned to the pointer. Dereferencing a NULL pointer results in __________. (QP4)
* **Pointer Arithmetic**
    *  Find the output of the following C code. (QP1, QP4)
    *  Find the output of the following program. (QP1, QP2, QP4)
    *  Find the output of the below code. (QP3, QP4, QP7)
* **Pointer to Structures**
    *  Given the above structure definition and alias for it, write the C statements for the following. (QP3, QP5)
    *  There is a structure called student and two data members in it such as name and age. Write the code to do the following. (QP5)

**3.  Structures, Unions, and Enumerations**

* **Structures**
    *  List any four characteristics/properties of structures in C. (QP3)
    *  Declare a structure called employeewith the following fields. Id, name, designation,salary.Choose appropriate data type for each field. Give an alias name called EMPLOYEEfor the defined structure. Declare a variable capable of holding maximum 100 employee details.(QP7)
* **Unions**
    *  Describe any three differences between structure and unions in C. (QP5, QP7)
    *  Mention any two differences between structure and union. (QP1)
* **Enumerations**
    *  What will be the output of the following C code? (QP7)
    *  Say True or False i)  Array of bit fields is allowed ii)   Bit fields with a length of 0 must be unnamed iii)    Accessing the Variable length Arguments from the function body makes use of macros available in stdarg.h iv)  Storing the symbol of one enum in another enum variable is invalid in C. (QP5)
    *  Say True or False: Enum names are automatically assigned values if no value is specified. (QP1)
    *  What is the range of integer values (lowest and highest value) that the member c of bitFieldDemo structure can hold? (QP1)
    *  The below code results in (QP6)

**4.  File Handling**

* **File I/O**
    *  Choose a correct statement about C file operation program.? (QP7)
    *  Below code must write the details from age and name arrays to a data file named emp.txt. Data from the same indices must be copied to a file in one row separated by a space. Fill up the blank spaces to do the same. (QP5)
    *  Write a C program to copy contents of one file to another file using fgetc() and fputc(). (QP1)
    *  Write a C program to copy contents of one file to another file using fgetc() and fputc(). (QP1)
    *  Write a C program to read all the characters in the text file using fseek() and ftell() functions. (QP1)
    *  Write a C program to count the number of characters in the text file using fgetc() function. (QP4)
* **File Operations**
    *  Explain the difference between the file opening modes “w”, “a”, and “r+”. (QP1)
    *  Explain the difference between the file opening modes “r” and “w”. (QP1)
* **File Handling Functions**
    *  What is the use of the function fopen() in C? (QP1)

**5.  Advanced C Concepts**

* **Pointers and Memory Allocation**
    *  Find the output of the below code. (QP1, QP4, QP7)
    *  Find the output of the following code. (QP7)
* **Preprocessor Directives**
    *  Mention any three preprocessor directives with its purpose. (QP7)
    *  Write a C program with six pre-defined macros(FILE, DATE, TIME, STDC_VERSION, STDC, LINE). (QP7)
* **Macros**
    *  List out any four characteristics of macro in C. Also find the output of below code. (QP5, QP6)
    *  Predict the output of the below code: (QP1)
    *  What is conditional compilation? List any 2 conditional compilation directives. Assume size of int is 4 bytes, char is 1 byte, double is 8 bytes. (QP1)
    *  What is the output of the below code? (QP1)
* **Storage Classes**
    *  What is a storage class in C? Explain static with an example code snippet. (QP6)
* **Callback Functions**
    *  What is a callback function? How is it implemented in C language. Write the declaration of a function pointer 'fp' which takes 2 float values as parameters and returns back a float. Write the output of the below code: (QP1)
* **Data Structures**
    *  List different types of queue. (QP7)
    *  Given the structure declaration and the client code, define the function insert_front to add nodes to the beginning of the linked list and define the display function as well to print the data in the nodes. (QP1)
    *  Given the structure declaration and the client code, define the function insert_end to add nodes to the end of the linked list and define the display function as well to print the data in the nodes. (QP4)
    *  Complete the function definition of extract_data_display to segregate the even and odd numbers from the given linked list and copy those elements to respective arrays. (QP6)

**6.  Sorting Algorithms**

* **Selection Sort**
    *  Given a dataset containing the details of trains from Bangalore to Mumbai(sample given below), sort it based on the availability and based on the cost separately using selection sort algorithm.. (QP2, QP5)
    *  Given a file stores.txt containing storeid (string), store area code (string), items available in the store(integer), number of customers (integer) and store sales (integer). The sample is as below. Sort it based on the number of customers and based on store sales separately using selection sort algorithm. (QP6)
* **Binary Search**
    *  Implement Binary search using iterative method on an array of 100 integer elements which are stored in descending order. Handle both successful and unsuccessful search. (QP2)
    *  Implement Binary search using iterative method on an array of 100 integer elements which are stored in ascending order. Handle both successful and unsuccessful search. (QP5)
    *  Implement Binary search using recursive method on an array of 100 integer elements which are stored in ascending order. Handle both successful and unsuccessful search. (QP4, QP7)
    *  Given a sorted array of integers, write a function which searches for a given integer using binary search and returns the index of it, returns -1 otherwise. (QP1, QP4)
    *  Given a sorted array of integers, write a recursive function which searches for a given integer using binary search approach and returns the index of it, returns -1 otherwise. (QP4)

**7.  Miscellaneous**

* **Command Line Arguments**
    *  Write a C program to accept integer values in the command line and display the product of those integers. (QP5)
    *  Write a C code to find whether the strings passed in the command line are having vowels within it or not(consider the small case only). (QP1)
* **Input/Output**
    *  Write a C Program to count the number of digits in a number taken through user input and also print the reverse of the number. Print the count of digits in the number as well. (QP1, QP4)
    *  Write a C Program to count the number of digits in a number taken through user input and also check if the individual digits are even or odd. (QP1)
* **Debugging**
    *  Explain any three string manipulation functions with an example. (QP2)

This comprehensive list should help you identify the core topics covered in the exam.  Make sure you understand the concepts thoroughly and practice writing code for various scenarios.  Good luck with your exam! 

--------------------------------------------------------------------------
# LIST 2

**1. Fundamentals of C Programming (Guaranteed)**

- **Program Development Life Cycle (PDLC):** This topic is heavily emphasized across all papers. Expect a question that asks you to:
    
    - **Explain the phases involved in the PDLC with a neat diagram.** (QP1, QP4, QP7)
        
    - **OR Draw a clear picture that shows the PDLC of a C Program.** (QP4)
        
- **Basic C Constructs & Syntax:** These are foundational to the exam. Possible questions:
    
    - **Mention the phases involved in the program development life cycle of a C Program.** (QP1, QP4)
        
    - **State true or false: break is an unconditional control construct which takes the control out of the enclosing loop or switch statement.** (QP5)
        
    - **State true or false: continue is an unconditional control construct, which takes the control to the next iteration of the enclosed loop.** (QP7)
        
    - **Mention the output of the following code pieces individually.** (QP1, QP4)
        
    - **Write the syntax of if-else statement with a sample.** (QP7)
        

**2. Pointers and Dynamic Memory Allocation (Very Likely)**

- **Dynamic Memory Allocation:** A staple topic. Expect to be asked about:
    
    - **List any two functions related to dynamic memory allocation using C. Explain anyone with a code snippet.  (QP3, QP7)**
        
    - **OR What is Dangling pointer? Explain with a code snippet.** (QP6)
        
- **Pointer Arithmetic:** Important, and often combined with structures.
    
    - **Find the output of the following C code.** (QP1, QP4)
        
- **Pointer to Structures:** A classic combination.
    
    - **Given the above structure definition and alias for it, write the C statements for the following.** (QP3, QP5)
        

**3. Structures, Unions, and Enumerations (High Probability)**

- **Structures:** These are tested regularly.
    
    - **Declare a structure called employeewith the following fields. Id, name, designation,salary.Choose appropriate data type for each field. Give an alias name called EMPLOYEEfor the defined structure. Declare a variable capable of holding maximum 100 employee details.** (QP7)
        
- **Unions:** Also frequently tested.
    
    - **Describe any three differences between structure and unions in C. (QP5, QP7)**
        
- **Enumerations:** Expect some questions about enums:
    
    - **Say True or False: Enum names are automatically assigned values if no value is specified.** (QP1)
        
    - **What is the range of integer values (lowest and highest value) that the member c of bitFieldDemo structure can hold?** (QP1)
        
    - **The below code results in** (QP6)
        

**4. File Handling (Very Likely)**

- **File I/O:** Expect questions related to file operations:
    
    - **Choose a correct statement about C file operation program.?** (QP7)
        
    - **Write a C program to copy contents of one file to another file using fgetc() and fputc(). (QP1)**
        
    - **Write a C program to read all the characters in the text file using fseek() and ftell() functions.** (QP1)
        
    - **Write a C program to count the number of characters in the text file using fgetc() function.** (QP4)
        

**5. Sorting Algorithms (Very Likely)**

- **Selection Sort:** This algorithm is featured in multiple papers.
    
    - **Given a dataset containing the details of trains from Bangalore to Mumbai(sample given below), sort it based on the availability and based on the cost separately using selection sort algorithm.. (QP2, QP5)**
        
    - **Given a file stores.txt containing storeid (string), store area code (string), items available in the store(integer), number of customers (integer) and store sales (integer). The sample is as below. Sort it based on the number of customers and based on store sales separately using selection sort algorithm. (QP6)**
        
- **Binary Search:** This algorithm is also tested frequently:
    
    - **Implement Binary search using recursive method on an array of 100 integer elements which are stored in ascending order. Handle both successful and unsuccessful search. (QP4, QP7)**
        
    - **Given a sorted array of integers, write a function which searches for a given integer using binary search and returns the index of it, returns -1 otherwise.** (QP1, QP4)
        
    - **Implement Binary search using iterative method on an array of 100 integer elements which are stored in descending order. Handle both successful and unsuccessful search.** (QP2)
        
    - **Given a sorted array of integers, write a recursive function which searches for a given integer using binary search approach and returns the index of it, returns -1 otherwise.** (QP4)
        

**6. Functions (Very Likely)**

- **Function Definition and Usage:** You'll likely be asked to:
    
    - **Write a C function to compute the factorial of a number using recursion. (QP7)**
        
    - **The below function emulates the strcat() in string.h. Complete the function by filling the missing code lines. (QP7)**
        
    - **Write a user defined function to copy one string to another string. Also test this function in the client code. (QP2)**
        
    - **Write a C function that returns the smallest element from an integer array arr with n elements.** (QP1)
        
    - **Write a C function that returns the biggest element from an integer array arr with n elements.** (QP4)
        

**7. Miscellaneous (Possible)**

- **Command Line Arguments:** This is sometimes asked:
    
    - **Write a C program to accept integer values in the command line and display the product of those integers.** (QP5)
        
- **Input/Output:** Expect some questions on I/O:
    
    - **Write a C Program to count the number of digits in a number taken through user input and also print the reverse of the number. Print the count of digits in the number as well.** (QP1, QP4)
        
    - **Write a C Program to count the number of digits in a number taken through user input and also check if the individual digits are even or odd.** (QP1)
        
- **Preprocessor Directives:** This topic is often included:
    
    - **Mention any three preprocessor directives with its purpose.** (QP7)
        
    - **Write a C program with six pre-defined macros(FILE, DATE, TIME, STDC_VERSION, STDC, LINE).** (QP7)
        
- **Macros:** These are likely to be tested:
    
    - **List out any four characteristics of macro in C. Also find the output of below code.** (QP5, QP6)
        
    - **Predict the output of the below code: (QP1)**
        
    - **What is conditional compilation? List any 2 conditional compilation directives. Assume size of int is 4 bytes, char is 1 byte, double is 8 bytes. (QP1)**
        
    - **What is the output of the below code? (QP1)**
        
- **Storage Classes:** A possible question:
    
    - **What is a storage class in C? Explain static with an example code snippet.** (QP6)
----------------------------------------------------------------------------------------------------------------------------------------------------
# UNITWISE

You're right! Here's the list of topics grouped into units, making it more organized for your preparation:

**Unit 1:  Basic C Programming Fundamentals**

* **Program Development Life Cycle (PDLC):** 
    *  Explain the phases involved in the PDLC with a neat diagram. (QP1, QP4, QP7) 
    *  Draw a clear picture that shows the PDLC of a C Program. (QP4) 
* **Basic C Constructs & Syntax:**
    *  Write the syntax of if-else statement with a sample. (QP7)
    *  Explain different options of gcc to get the output of C code. (QP6)
    *  Mention the phases involved in the program development life cycle of a C Program. (QP1, QP4) 
    *  Given a C program named p1.c, write the command used to only compile (and not link) p1.c. (QP5)
    *  Given a C program named p1.c, write the command used to compile and link p1.c. (QP7)
    *  Identify the compile time (if any) and link time errors (if any) in the given code snippet. (QP1, QP5, QP7)
    *  State true or false: break is an unconditional control construct which takes the control out of the enclosing loop or switch statement. (QP5)
    *  State true or false: continue is an unconditional control construct, which takes the control to the next iteration of the enclosed loop. (QP7)
    *  Mention the output of the following code pieces individually. (QP1, QP4)
* **Variables, Data Types, Operators:**
    *  Categorize the following into valid and invalid variables in C language. If invalid, give reasons for invalidity. (QP1)
    *  What does the below code do? List any two variables in the same code. (QP6)
    *  How many bytes does sizeof(‘\r’) occupy? (QP1)
    *  How many bytes does sizeof(‘\n’) occupy? (QP4)
    *  Printf() instead of printf() leads to ________ error. (QP1, QP4)
    *  Scanf() instead of scanf() leads to ________ error. (QP1)
    *  State true or false:  ** is an operator in C. (QP4)
    *  State true or false: C is both compiled and interpreted language. (QP4)
    *  State true or false: There are multiple a.exe files in one folder. (QP4)
* **Control Flow Statements:**
    *  Explain do-while and switch constructs in C with a coding snippet. (QP6)
    *  Explain the following commands in gdb. i) break               ii) list (QP2, QP5)

**Unit 2:  Pointers and Dynamic Memory Allocation**

* **Dynamic Memory Allocation:**  
    *  List any two functions related to dynamic memory allocation using C. Explain anyone with a code snippet.  (QP3, QP7)
    *  What is Dangling pointer? Explain with a code snippet. (QP6) 
    *  If the same pointer variable is allocated memory more than once using the dynamic memory allocation functions, initially allocated memory space becomes a _________. Garbage which has no name and hence no access in turn results in __________     // 2 marks (QP1)
    *  To avoid dangling pointers after free() is used, ________ is assigned to the pointer. Dereferencing a NULL pointer results in __________. (QP4)
* **Pointer Arithmetic:**  
    *  Find the output of the following C code. (QP1, QP4) 
* **Pointer to Structures:** 
    *  Given the above structure definition and alias for it, write the C statements for the following. (QP3, QP5)

**Unit 3:  Strings, Structures, and More**

* **Strings:** 
    *  Explain any three string manipulation functions with an example. (QP2)
    *  Find the output of the following code snippet when executed separately. (QP2, QP6)
    *  Find the output of the following code. (QP4, QP6)
* **Structures:** 
    *  List any four characteristics/properties of structures in C. (QP3)
    *  Declare a structure called employeewith the following fields. Id, name, designation,salary.Choose appropriate data type for each field. Give an alias name called EMPLOYEEfor the defined structure. Declare a variable capable of holding maximum 100 employee details.(QP7)
* **Unions:** 
    *  Describe any three differences between structure and unions in C. (QP5, QP7)
    *  Mention any two differences between structure and union. (QP1)
* **Enumerations:** 
    *  What will be the output of the following C code? (QP7)
    *  Say True or False i)  Array of bit fields is allowed ii)   Bit fields with a length of 0 must be unnamed iii)    Accessing the Variable length Arguments from the function body makes use of macros available in stdarg.h iv)  Storing the symbol of one enum in another enum variable is invalid in C. (QP5)
    *  Say True or False: Enum names are automatically assigned values if no value is specified. (QP1)
    *  What is the range of integer values (lowest and highest value) that the member c of bitFieldDemo structure can hold? (QP1) 
    *  The below code results in (QP6)

**Unit 4:  File Handling and Error Handling**

* **File I/O:**
    *  Choose a correct statement about C file operation program.? (QP7)
    *  Below code must write the details from age and name arrays to a data file named emp.txt. Data from the same indices must be copied to a file in one row separated by a space. Fill up the blank spaces to do the same. (QP5)
    *  Write a C program to copy contents of one file to another file using fgetc() and fputc(). (QP1)
    *  Write a C program to read all the characters in the text file using fseek() and ftell() functions. (QP1)
    *  Write a C program to count the number of characters in the text file using fgetc() function. (QP4) 
* **File Operations:** 
    *  Explain the difference between the file opening modes “w”, “a”, and “r+”. (QP1)
    *  Explain the difference between the file opening modes “r” and “w”. (QP1)
* **File Handling Functions:** 
    *  What is the use of the function fopen() in C? (QP1)

**Key Notes for Your Exam Preparation**

* **Focus on Units 1 and 2:**  Basic C programming and pointers are essential for this course.
* **Practice, Practice, Practice:** The more code you write, the better you'll understand the concepts.
* **Understand the Different Data Structures:** Structures, unions, arrays, and pointers are core elements.
* **Review Examples:** Carefully analyze the code examples provided in the papers. 
* **Don't Forget File Handling:** This is a significant part of the course.
* **Prepare for Sorting Algorithms:**  Binary search and selection sort are common topics.
* **Pay Attention to Error Handling:**  Understand common error scenarios and how to handle them.

Good luck with your exam! 
