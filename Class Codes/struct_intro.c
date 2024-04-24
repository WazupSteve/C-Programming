#include<stdio.h>
/*  *****contains 3 int main() functions *******
1) initialization of structure memebers
2) read&write using structure-variable
3) read and write using structure-pointer 
uncomment the necessary lines and int main() function */
struct stud
{
		int roll_no;
		char name[50];
		float marks;
};

int main()
{
	// 1) different ways of initializing structure variables
	//struct stud s={10,"gowri",34.45};	//complete initialization
	//struct stud s={.roll_no=15,.name="gowri",.marks=94.45};//same can be used for partial initialization
	struct stud s={roll_no:25,name:"gowri",marks:100};	//same cane be used for partial initialization
	printf("entered details are\n");
	printf("roll_no = %d\n",s.roll_no);
	printf("name = %s\n",s.name);
	printf("marks = %f\n",s.marks);
	return 0;
}
	
/*int main()
{
	//2)to read and write using structure-variable
	struct stud s;
	printf("enter roll_no:");scanf("%d",&s.roll_no);
	printf("enter name:");scanf("%s",s.name);
	printf("enter marks:");scanf("%f",&s.marks);
	printf("entered details are\n");
	printf("roll_no = %d\n",s.roll_no);
	printf("name = %s\n",s.name);
	printf("marks = %f\n",s.marks);
	return 0;
}
*/
/*
int main()
{
	//3) read and write using structure-pointer
	struct stud s;
	struct stud *p=&s;
	printf("enter roll_no:");scanf("%d",&(p->roll_no));//or &((*p).roll_no)
	printf("enter name:");scanf("%s",p->name);
	printf("enter marks:");scanf("%f",&(p->marks));
	printf("entered details are\n");
	printf("roll_no = %d\n",p->roll_no);
	printf("name = %s\n",p->name);
	printf("marks = %f\n",p->marks);
	return 0;
}
*/

