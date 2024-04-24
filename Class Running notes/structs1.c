//WAP to compare the marks of students and print the details of student who has highest
#include<stdio.h>
struct student
{
    int roll;
    char name[50];
    float marks;
};
void read(struct student *p){
    printf("Enter the roll_no:");
    scanf("%d",&(p->roll));fflush(stdin);
    printf("Enter the name:");
    scanf("%s",p->name);fflush(stdin);
    printf("Enter the marks:");
    scanf("%f",&(p->marks));fflush(stdin);
}
void compare(struct student s1,struct student s2)
{   /*
    if(s1.marks>s2.marks){
        printf("Roll_No:%d\n",s1.roll);
        printf("Name:%s\n",s1.name);
        printf("Marks:%f\n",s1.marks);
    }
    else if(s2.marks>s1.marks){
        printf("Roll_No:%d\n",s2.roll);
        printf("Name:%s\n",s2.name);
        printf("Marks:%f\n",s2.marks);
    }
    else{
        printf("Roll_No:%d\n",s1.roll);
        printf("Name:%s\n",s1.name);
        printf("Marks:%f\n",s1.marks);
        printf("------------------\n");
        printf("Roll_No:%d\n",s2.roll);
        printf("Name:%s\n",s2.name);
        printf("Marks:%.2f\n",s2.marks);
    }
    */
   //s1.marks>s2.marks?printf("%d\t%s\t%f\n",s1.roll,s1.name,s1.marks):printf("%d\t%s\t%f\n",s2.roll,s2.name,s2.marks);
   //if both s1.marks and s2.marks are equal s2.marks is printed
   if(s1.marks>s2.marks){
        printf("Roll_No:%d\n",s1.roll);
        printf("Name:%s\n",s1.name);
        printf("Marks:%f\n",s1.marks);
    }
    else{
        printf("Roll_No:%d\n",s2.roll);
        printf("Name:%s\n",s2.name);
        printf("Marks:%f\n",s2.marks);
    }
}
int main()
{
    struct student s1;struct student s2;
    struct student *p=&s1,*q=&s2;
    printf("%%\n");
    read(&s1);
    read(&s2);
    compare(s1,s2);
}
