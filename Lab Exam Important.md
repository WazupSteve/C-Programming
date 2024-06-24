Write a function to check if a given pattern occurs in a string. Length of the pattern is less than that of the string. Print the index of the first occurrence of the pattern in the string. If the pattern doesn't exist in the string, print -1. (Note: You are allowed to use `strlen()` to find the length of the String, if required)

```c
#include <stdio.h>  
#include <string.h>  
  
int find(const char *string, const char *pattern) {  
    int lenString = strlen(string);  
    int lenPattern = strlen(pattern);  
    if (lenPattern > lenString) {  
        return -1;  
    }  
    for (int i = 0; i <= lenString - lenPattern; i++) {  
        int match = 1;  
        for (int j = 0; j < lenPattern; j++) {  
            if (string[i + j] != pattern[j]) {  
                match = 0;  
                break;  
            }  
        }  
        if (match) {  
            return i;  
        }  
    }  
    return 0;  
}  
  
int main() {  
    char string[100];  
    char pattern[100];  
    scanf("%s", string);  
    scanf("%s", pattern);  
    int res = find(string, pattern);  
    printf("%d\n", res);  
    return 0;  
}
```

2) Structures - Youtube Management
```c
#include<stdio.h>  
  
typedef struct contact_info{  
    char email[500];  
    long long int phone;  
};  
  
typedef struct youtubemanagement{  
    char channel_name[500];  
    int total_videos;  
    long long int subscriber_count;  
    float earnings;  
    struct contact_info j;  
}yt;  
  
void read_details();  
void display_details();  
void calculate_earnings();  
  
int main(){  
    yt yt1;  
    read_details();  
    display_details();  
    calculate_earnings();  
    return 0;  
}  
  
void read_details(){  
    yt yt1 ;  
    printf("enter the channel name");  
    scanf("%[^\n]s",yt1.channel_name);  
    printf("enter the total videos ");  
    scanf("%d",&yt1.total_videos);  
    printf("enter the sub count ");  
    scanf("%lld",&yt1.subscriber_count);  
    printf("enter the contact_info--> phone");  
    scanf("%lld",&yt1.j.phone);  
    printf("enter the contact_info --> email");  
    scanf("%s",yt1.j.email);  
}  
  
void display_details(){  
    yt yt1;  
    printf("%s \n",yt1.channel_name);  
    printf("%d \n",yt1.total_videos);  
    printf("%lld \n",yt1.subscriber_count);  
    printf("%lld \n",yt1.j.phone);  
    printf("%s \n",yt1.j.email);  
}  
  
void calculate_earnings(){  
    yt yt1;  
    float total_earnings = 0.45 * yt1.total_videos * yt1.subscriber_count;  
    printf("%f",total_earnings);  
}
```

3) Student SRN PRN Question
```c
#include<stdio.h>  
#include<stdlib.h>  
#include<string.h>  
  
typedef struct id_numbers{  
    char SRN[500];  
    char PRN[500];  
}id;  
typedef struct student{  
    char name[500];  
    struct id_numbers id;  
    char section;  
    int marks[4];  
}s;  
  
s s1;  
void read();  
void display();  
void calculate();  
  
int main(){  
    read();  
    display();  
    calculate();  
    return 0;  
}  
  
void read() {  
    printf("enter the name");  
    scanf("%[^\n]s", s1.name);  
    printf("enter the PRN");  
    scanf("%s", s1.id.PRN);  
    printf("enter the SRN");  
    scanf("%s", s1.id.SRN);  
    printf("enter the section");  
    scanf(" %c", &s1.section);  
    printf("enter marks in ISA1,ISA2,LAB,ESA");  
    for (int i = 0; i < 4; i++) {  
        scanf("%d", &s1.marks[i]);  
    }  
}  
  
void display(){  
    printf("name : %s \n", s1.name);  
    printf(" PRN :%s \n", s1.id.PRN);  
    printf(" SRN : %s \n", s1.id.SRN);  
    printf("Section : %c \n", s1.section);  
}  
  
void calculate(){  
    int add = 0;  
    for(int i =0 ;i<4;i++){  
        add += (s1.marks[i]/2);  
    }  
    printf("%d",add);  
}
```

4) Concepts for array of structure
```c
#include <stdio.h>  
struct Restaurant {  
    int food_id;  
    char food_name[50];  
    char customer_name[50];  
    float cost;  
};  
void read(struct Restaurant r[], int n) {  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &r[i].food_id);  
        scanf(" %[^\n]s", r[i].food_name);  
        scanf(" %[^\n]s", r[i].customer_name);  
        scanf("%f", &r[i].cost);  
    }  
}  
  
void display(struct Restaurant r[], int n) {  
    for (int i = 0; i < n; i++) {  
        printf("%d %s %s %.2f\n", r[i].food_id, r[i].food_name, r[i].customer_name, r[i].cost);  
    }  
}  
  
void sort(struct Restaurant r[], int n) {  
    int i, j;  
    for (i = 0; i < n-1; i++) {  
        for (j = 0; j < n-i-1; j++) {  
            if (r[j].food_id > r[j+1].food_id) {  
                struct Restaurant t = r[j+1];  
                r[j+1] = r[j];  
                r[j] = t;  
            }  
        }  
    }  
}  
  
int main() {  
    struct Restaurant r[10];  
    int n;  
    scanf("%d", &n);  
    read(r, n);  
    printf("Before Sorting:\n");  
    display(r, n);  
    sort(r, n);  
    printf("After Sorting:\n");  
    display(r, n);  
    return 0;  
}
```

## General Pattern

Binary search
```c
int binarySearch(Book books[], int n, int ISBN) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (books[mid].ISBN == ISBN) {
            return mid;
        }
        if (books[mid].ISBN < ISBN) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // ISBN not found
}
```

Bubble sort
```c
void bubbleSort(Book books[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (books[j].ISBN > books[j + 1].ISBN) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}
```

# Strings 

```c
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
int pos;  
int len;  
char string[500];  
void substring(char string[],int len , int pos);  
  
int main(){  
    int stringlength;  
    printf("enter the position");  
    scanf("%d",&pos);  
    printf("enter the length");  
    scanf("%d",&len);  
    printf("enter the string");  
    scanf("%s",string);  
    substring(string,len,pos);  
    return 0;  
}  
  
void substring(char string[],int len , int pos){  
    char result[500];  
    for(int i = pos ; i < len + pos ; i++){  
        result[i]=string[i];  
        printf("%s",&result[i]);  
    }  
}
```


## Balanced Parathesis
(check the manual pls )


```c
#include<stdio.h>  
#include<string.h>  
void rightshift(char string[],int n);  
  
int main(){  
    char string[500];  
    int n;  
    printf("enter the value of the string");  
    scanf("%d",&n);  
    printf("enter the string");  
    scanf("%s",string);  
    rightshift(string,n);  
    return 0;  
}  
  
void rightshift(char string[], int n) {  
    int length = strlen(string);  
    n = n % length; // To handle cases where n is larger than the length of the string  
  
    for (int j = 0; j < n; j++) {  
        char last = string[length - 1]; // Store the last character  
        for (int i = length - 1; i > 0; i--) {  
            string[i] = string[i - 1]; // Shift characters to the right  
        }  
        string[0] = last; // Place the last character at the start  
    }  
    printf("%s",string);  
}
```

## Cypher ( important )

```c
#include <stdio.h>  
  
void encrypt(char message[], int key);  
  
int main() {  
    char message[500];  
    int key;  
  
    // Read the message from the user  
    printf("Enter the message: ");  
    scanf("%s", message);  
  
    // Read the key from the user  
    printf("Enter the key: ");  
    scanf("%d", &key);  
  
    // Encrypt the message using the ROT Cipher technique  
    encrypt(message, key);  
  
    // Print the encrypted message  
    printf("Encrypted message: %s\n", message);  
  
    return 0;  
}  
  
void encrypt(char message[], int key) {  
    // Adjust the key to be within the range of 0-25  
    key = key % 26;  
  
    for (int i = 0; message[i] != '\0'; i++) {  
        char c = message[i];  
  
        // Encrypt lowercase letters  
        if (c >= 'a' && c <= 'z') {  
            c = c + key;  
            if (c > 'z') {  
                c = c - 26;  
            }  
        }  
            // Encrypt uppercase letters  
        else if (c >= 'A' && c <= 'Z') {  
            c = c + key;  
            if (c > 'Z') {  
                c = c - 26;  
            }  
        }  
  
        // Update the character in the message  
        message[i] = c;  
    }  
}
```

```c
#include <stdio.h>  
int main() {  
    char str[100];  
    scanf("%[^\n]s", str);  
    int i = 0;  
    int x = 1;  
    while (str[i] != '\0') {  
        if (str[i] == ' ') {  
            x = 1; // Next character will be the start of a word  
        }  
        else if (x && str[i] >= 'a' && str[i] <= 'z') {  
            str[i] = str[i] - 32;  
            x = 0; // Turn off start_of_word flag after converting  
        }  
        else {  
            x = 0; // Any other character marks end of start of word  
        }  
        i++;  
    }  
    printf("%s", str);  
    return 0;  
}
```

## Reversal String ( IMPORTANT)

```c
#include <stdio.h>
#include <string.h>

// Function to reverse a string in place
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char string1[101], string2[101];

    // Read the first string, including spaces
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", string1);

    // Read the second string, including spaces
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", string2);

    // Reverse the first string
    reverseString(string1);

    // Compare the reversed string1 with string2
    if (strcmp(string1, string2) == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
```


## ommit vowels


```c
#include <stdio.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to remove vowels from a string
void removeVowels(char *text) {
    char *readPtr = text;
    char *writePtr = text;
    while (*readPtr) {
        if (!isVowel(*readPtr)) {
            *writePtr = *readPtr;
            writePtr++;
        }
        readPtr++;
    }
    *writePtr = '\0'; // Null-terminate the modified string
}

int main() {
    char inputText[100];
    printf("Enter the text: ");
    scanf("%[^\n]", inputText);
    removeVowels(inputText);
    printf("Text without vowels: %s\n", inputText);
    return 0;
}

```

## substring question

```c
#include <stdio.h>
#include <string.h>

// Function to find all occurrences of a substring in a string
void findSubstring(char *string, char *substring) {
    int len1 = strlen(string);
    int len2 = strlen(substring);
    int found = 0;

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == len2) {
            printf("Substring found at index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Substring not found.\n");
    }
}

int main() {
    char string[100], substring[100];
    printf("Enter the main string: ");
    scanf(" %[^\n]s", string); // Read the string with spaces
    printf("Enter the substring: ");
    scanf(" %[^\n]s", substring); // Read the substring with spaces
    findSubstring(string, substring);
    return 0;
}

```

## upper to lower and lower to uppercase

```c
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int i; // Declare variable for iteration

    // Read a string from the standard input
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    // Loop through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is lowercase and convert to uppercase
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Check if the character is uppercase and convert to lowercase
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    // Output the modified string
    printf("Modified sentence: %s\n", str);
    return 0;
}

```


# Linked List 

## Question 1
Write a program in C to create a Singly Linked List with `n` number of nodes. Perform the following operations in the same order:

1. Read the value of `n` from the user.
2. Insert `n` number of nodes – insert nodes at the end of the linked list (Implement using a function `insertLast()`).
3. Display all the nodes after the insertion of nodes (Implement using a function `display()`).
4. Delete the last node (Implement using a function `deleteLast()`).
5. Display all the nodes after the deletion of the node (Use the function `display()`).
6. Free the list (Implement using a function `freeList()`).
	``
### Solution:
```c
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node *next;
} NODE;

NODE* insertLast(NODE* head, int ele);
void display(NODE *head);
NODE* deleteLast(NODE* head);
NODE* freeList(NODE* head);

int main() {
    NODE* head = NULL;
    int ele;
    int n;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &ele);
        head = insertLast(head, ele);
    }
    
    display(head);
    head = deleteLast(head);
    display(head); 
    head = freeList(head);
}

NODE* createNode(int ele) {
    NODE* newNode = malloc(sizeof(struct node));
    // Assume memory is always allocated to the new node and
    // hence not checking for newNode == NULL
    newNode->info = ele;
    newNode->next = NULL;
    return newNode;
}

NODE* insertLast(NODE* head, int ele) {
    NODE* temp; 
    NODE* newNode = createNode(ele);
    
    if(head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void display(NODE *head) {
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        NODE *p = head;
        printf("Elements are:\n");
        while(p != NULL) {
            printf("%d\n", p->info);
            p = p->next;
        }
    }
}

NODE* deleteLast(NODE* head) {
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        NODE* p; // To be deleted (Last)
        NODE* q; // Referring to Last but one
        
        p = q = head;
        while(p->next != NULL) {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        printf("Deleted element is %d\n", p->info);
        free(p);
    }
    return head;
}

NODE* freeList(NODE* head) {
    NODE *p = head;
    while(head != NULL) {
        head = head->next;
        // printf("Freeing %d\n", p->info);
        free(p);
        p = head;
    }
    return head;
}
```

## Question 2
Write a program in C to create a Singly Linked List with `n` number of nodes. Perform the following operations in the same order:

1. Read the value of `n` from the user.
2. Insert `n` number of nodes – insert nodes at the front of the linked list (Implement using a function `insertFront()`).
3. Display all the nodes after the insertion of nodes (Implement using a function `display()`).
4. Delete the first node (Implement using a function `deleteFront()`).
5. Display all the nodes after the deletion of the node (Use the function `display()`).
6. Free the list (Implement using a function `freeList()`).

### Solution:
```c
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node *next;
} NODE;

NODE* insertFront(NODE* head, int ele);
void display(NODE *head);
NODE* deleteFront(NODE* head);
NODE* freeList(NODE* head);

int main() {
    NODE* head = NULL;
    int ele;
    int n;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &ele);
        head = insertFront(head, ele);
    }
    
    display(head);
    head = deleteFront(head);
    display(head); 
    head = freeList(head);
}

NODE* createNode(int ele) {
    NODE* newNode = malloc(sizeof(struct node));
    // Assume memory is always allocated to the new node and
    // hence not checking for newNode == NULL
    newNode->info = ele;
    newNode->next = NULL;
    return newNode;
}

NODE* insertFront(NODE* head, int ele) {
    NODE* newNode = createNode(ele);
    newNode->next = head;
    head = newNode; 
    return head;
}

void display(NODE *head) {
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        NODE *p = head;
        printf("Elements are:\n");
        while(p != NULL) {
            printf("%d\n", p->info);
            p = p->next;
        }
    }
}

NODE* deleteFront(NODE* head) { 
    if(head == NULL) {
        printf("List is empty\n");
    } else { 
        NODE* p = head;
        printf("Deleted element is %d\n", p->info);
        head = p->next;
        free(p);
    }
    return head;
}

NODE* freeList(NODE* head) {
    NODE *p = head;
    while(head != NULL) {
        head = head->next;
        // printf("Freeing %d\n", p->info);
        free(p);
        p = head;
    }
    return head;
}
```


## EASY LINKED LIST
```C
#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
typedef struct node {  
    int a;  
    struct node *ptr;  
} n;  
  
n* insert(n *head) {  
    n *new = malloc(sizeof(n));  
    printf("please enter the number");  
    scanf("%d", &new->a);  
    new->ptr = NULL;  
    if (head == NULL) {  
        head = new;  
    } else {  
        new->ptr = head;  
        head = new;  
    }  
    return head;  
}  
  
n* delete(n *head) {  
    if (head != NULL) {  
        printf("deleted element %d", head->a);  
        head = head->ptr;  
    }  
    return head;  
}  
  
void display(n *head) {  
    n *p = head;  
    while (p != NULL) {  
        printf("%d\t", p->a);  
        p = p->ptr;  
    }  
}  
  
int main() {  
    n *head = NULL;  
    int k;  
    scanf("%d", &k);  
    for (int i = 0; i < k; i++) {  
        head = insert(head);  
    }  
    display(head);  
    head = delete(head);  
    display(head);  
    return 0;  
}
```