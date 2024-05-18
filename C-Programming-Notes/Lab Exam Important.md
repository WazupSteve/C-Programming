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


