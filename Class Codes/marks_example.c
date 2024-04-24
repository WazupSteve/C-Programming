#include<stdio.h>
struct stud
{
		int roll_no;
		char name[50];
		float marks;
};

void read_sp(struct stud *s)
{
	printf("****enter student1 details*********\n");
	printf("roll_no:");scanf("%d",&s->roll_no);
	printf("name:");fflush(stdin);
	scanf("%[^\n]s",s->name);
	printf("marks:");scanf("%f",&s->marks);
}
void write(struct stud s)
{
	printf("********entered student details are*********\n");
	printf("roll_no = %d\n",s.roll_no);
	printf("name = %s\n",s.name);
	printf("marks = %f\n",s.marks);
}




int main()
{
	struct stud s1,s2;
	
	read_sp(&s1);
	read_sp(&s2);
	write(s1);
	write(s2);
	return 0;
}
/*read_s(s1,s2);
	write_s(s1);
	write_s(s1);*/



