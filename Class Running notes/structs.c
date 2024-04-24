/*
#include<stdio.h>
//3rd April Class
struct student
{
        int roll_no;
        char name[20];
        float marks;
};
struct student s1; //Global structure variable
int main()
{
    struct student s={07,"Akash",100};
    printf("%d\n",s.roll_no);
    printf("%s\n",s.name);
    printf("%f\n",s.marks);
    printf("-------------------------\n");
    printf("Enter the student details:\n");
    printf("Enter roll number:\n");
    scanf("%d",&s1.roll_no);
    printf("Enter the name:\n");
    scanf("%s",s1.name);
    printf("Enter the marks:\n");
    scanf("%f",&s1.marks);
    printf("%d %s %f",s1.roll_no,s1.name,s1.marks);

}

*/

//Readinh using struct var
/*
#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    printf("Enter the roll no:");
    scanf("%d",&s1.roll_no);
    printf("Enter the name:");
    scanf("%s",s1.name);fflush(stdin);
    printf("Enter the marks:");
    scanf("%f",&s1.marks);
    printf("------------------------\n");
    printf("%d\t%s\t%f\n",s1.roll_no,s1.name,s1.marks);
}
*/


//Reading using struct pointer
/*
#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    struct student *p=&s1;
    printf("Enter the roll_no:");
    scanf("%d",&(p->roll_no));fflush(stdin);
    printf("Enter the name:");
    scanf("%[^\n]s",p->name);
    printf("Enter the marks:");
    scanf("%f",&(p->marks));
    printf("Roll_No:%d\n",p->roll_no);
    printf("Name:%s\n",p->name);
    printf("Marks:%f\n",p->marks);
    
}
*/


//Reading of struct using User defined fucntion variable
/*
#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;

};
void read(struct student s1){
    printf("Enter the roll no:");
    scanf("%d",&s1.roll);
    printf("Enter the name:");
    scanf("%[^\n]s",s1.name);fflush(stdin);
    printf("Enter the marks:");
    scanf("%f",&s1.marks);
    printf("------------------------\n");
    printf("%d\t%s\t%f\n",s1.roll,s1.name,s1.marks);
    
}
int main()
{   struct student s;
    read(s);
    printf("%d\n",s.roll);
    printf("%s",s.name);
}
*/


//Reading of struct using User defined function pointers
//M-I
/*
#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;

};
void read(struct student *p)
{
    printf("Enter the roll no:");
    scanf("%d",&(p->roll));fflush(stdin);
    printf("Enter the name:");
    scanf("%s",p->name);fflush(stdin);
    printf("Enter the marks:");
    scanf("%f",&(p->marks));fflush(stdin);
    printf("Roll_No:%d\n",p->roll);
    printf("Name:%s\n",p->name);
    printf("Marks:%f\n",p->marks);

}
int main(){
    struct student s1;
    struct student *p1=&s1;
    read(&s1);
    printf("---------------------------\n");
    printf("Roll_No:%d\n",p1->roll);
    printf("Name:%s\n",p1->name);
    printf("Marks:%f\n",p1->marks);
}
*/

//M-II
#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;

};
void read(struct student *p)
{
    printf("Enter the roll no:");
    scanf("%d",&(p->roll));fflush(stdin);
    printf("Enter the name:");
    scanf("%s",p->name);fflush(stdin);
    printf("Enter the marks:");
    scanf("%f",&(p->marks));fflush(stdin);
    //Print this way only if u wanna change the values for printing
    printf("Roll_No:%d\n",p->roll);
    printf("Name:%s\n",p->name);
    printf("Marks:%f\n",p->marks);

}
int main(){
    struct student s1;
    struct student *p1=&s1;
    read(&s1);
    printf("---------------------------\n");
    printf("Roll_No:%d\n",s1.roll);
    printf("Name:%s\n",s1.name);
    printf("Marks:%f\n",s1.marks);
}