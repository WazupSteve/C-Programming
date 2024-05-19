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

# Linked List





## String 

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


## BALANCED PARANTHESIS

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

CYPHER
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

