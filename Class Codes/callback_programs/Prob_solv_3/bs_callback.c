#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	int roll_no;
	char name[20];
};
typedef struct student stud;
void display(stud as[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d %s",as[i].roll_no,as[i].name);
	}
}
void display_ap(stud *asp[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d %s",asp[i]->roll_no,asp[i]->name);
	}
}
void swap(stud **x,stud **y)
{
	stud *temp=*x;
	*x=*y;
	*y=temp;
}
void bubble_sort(stud *asp[],int n, int (*fp)(stud*,stud*))
{
	for(int i=0;i<=n-2;i++)
		for(int j=0;j<=n-2-i;j++)
			if(fp(asp[j],asp[j+1]))	//implementation of callback 
				swap(&asp[j],&asp[j+1]);
}

int bs_roll_no(stud *x,stud *y)
{
	return x->roll_no > y->roll_no;
}

int bs_name(stud *x,stud *y)
{
	return strcmp(x->name,y->name) > 0;
}

void create_as(stud as[],int n)
{
	char str[50],*token;
	FILE *fp=fopen("student.csv","r");
	printf("creating array of structures\n");
	fgets(str,50,fp);
	int i=0;
	while(fgets(str,50,fp)!=NULL)
	{
		if(i<n)
		{
			printf("entered inside outer while loop\n");
			token=strtok(str,",");
			as[i].roll_no=atoi(token);
			token=strtok(NULL,",");
			strcpy(as[i].name,token);
			i++;
		}
		else
			break;
	}		
}
int main()
{
	
	printf("enter the number of student data to be created\n");
	int n;
	scanf("%d",&n);
	stud as[n],*asp[n];
	char str[50],*token;
	create_as(as,n);//function call to create array of stuctures using csv file
	printf("creating array of structure pointers to array of structures\n");
	for(int i=0;i<n;i++)
	{
		asp[i]=&as[i];
	}
	printf("displaying array of structures using array of structure pointers\n");
	display_ap(asp,n);
	printf("*******bubble sort**********\n");
	for(;;)
	{
	printf("1: sorting using roll_no\n");
	printf("2: sorting using name\n3: display of student data using array of structures\n4: exit");
	printf("\nenter your choice\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("performing sorting using roll_no\n");
			bubble_sort(asp,n,bs_roll_no);
			printf("after bubble sort\n");
			display_ap(asp,n);
			break;
		case 2: printf("performing sorting using name\n");
			bubble_sort(asp,n,bs_name);
			printf("after bubble sort\n");
			display_ap(asp,n);
			break;
		case 3: printf("student details display using array of structures\n");
			display(as,n);
			break;
		case 4: exit(0);
		default:printf("invalid choice\n");
	}
	FILE *rfp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Codes/prob_solv_using_files/prob_sol_2bs_asp_res.txt","w");
	for(int i=0;i<n;i++)
	{
		fprintf(rfp,"%d,%s",asp[i]->roll_no, asp[i]->name);
	}
	}
	return 0;
}