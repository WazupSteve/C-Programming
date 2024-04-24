#include<stdio.h>
#include<stdlib.h>
//node creation using malloc

typedef struct node
{
	int info;
	struct node *link;
}n;

int main()
{
	/*n n1;
	n1.info=10;
	n1.link=&n1;
	printf("a=%d\n",n1.info);
	printf("link=%p",n1.link);*/
	//use of dynamic memory function to create node
	n *head= malloc(sizeof(n));
	printf("enter value for a\n");
	scanf("%d",&head->info);
	printf("a=%d\n",head->info);
	printf("node link is initialized to NULL\n");
	head->link=NULL;
	printf("link=%p",head->link);
	return 0;
}