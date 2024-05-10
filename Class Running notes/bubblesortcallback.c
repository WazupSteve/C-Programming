#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//menu driven program to perform selection sort on array of structures using array of pointers based on roll_no and name

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

int bs_roll_no(stud *x,stud *y)
{
	return x->roll_no > y->roll_no;
}

int bs_name(stud *x, stud *y)
{
	return strcmp(x->name,y->name)>0;
}
void bubble_sort(int (*fp)(stud*,stud*),int n,stud *asp[n])
{
    for(int i=0;i<=n-2;i++)
        for(int j=0;j<n-2-i;j++)
            if(fp(asp[j],asp[j+1]))
                swap(&asp[j],&asp[j+1]);
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
			//printf("entered inside outer while loop\n");
			token=strtok(str,",");
			as[i].roll_no=atoi(token);
			token=strtok(NULL,",");
			strcpy(as[i].name,token);
			i++;
		}
		else
			break;
	}
	fclose(fp);	
}
int main()
{
	
	printf("enter the number of student data to be created\n");
	int n;
	scanf("%d",&n);
	stud as[n],*asp[n];
	char str[50],*token;
	create_as(as,n);
	printf("creating array of structure pointers to array of structures\n");
	for(int i=0;i<n;i++)
	{
		asp[i]=&as[i];
	}
	printf("displaying array of structures using array of structure pointers\n");
	display_ap(asp,n);
	FILE *wp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Codes/prob_solv_using_files/prob_sol_2bs_asp_res.txt","w");
	for(;;)
	{	
		//FILE *wp=fopen("D:/Akash/B.Tech/2nd Sem/C/Class Codes/prob_solv_using_files/prob_sol_2bs_asp_res.txt","w");
		printf("*******Bubble sort**********\n");
		printf("1: sorting using roll_no\n");
		printf("2: sorting using name\n3: display of student data using array of structures\n4: exit");
		printf("\nenter your choice\n");
		int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("performing sorting using roll_no\n");
				bubble_sort(bs_roll_no,n,asp);
				printf("after selection sort\n");
				display_ap(asp,n);
				
				for(int i=0;i<n;i++)
				{
					fprintf(wp,"%d,%s",asp[i]->roll_no, asp[i]->name);
				}
				break;
			case 2: printf("performing sorting using name\n");
				bubble_sort(bs_name,n,asp);
				printf("after selection sort\n");
				display_ap(asp,n);
				rewind(wp);
				for(int i=0;i<n;i++)
				{
					fprintf(wp,"%d,%s",asp[i]->roll_no, asp[i]->name);
				}
				break;
			case 3: display(as,n);
				break;
			case 4: exit(0);
			default:printf("invalid choice\n");
		}
	}
	return 0;
}