#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int ele;
	struct node *link;
}n;

n* ins_frnt_node(n * head)
{
	n *new=malloc(sizeof(n));
	printf("enter value for the node\n");scanf("%d",&new->ele);
	if (head==NULL)
	{
		head=new;
		new->link=NULL;
		return head;
	}
	new->link=head;
	head=new;
	return head;
}

n* del_frnt_node(n *head)
{
	if(head==NULL)
	{
		printf("linked list is empty!!\n");
		return head;
	}
	else
	{
		printf("node with element %d deleted\n",head->ele);
		head=head->link;
		return head;
	}
}
void display_nodes(n *disp)
{
	if(disp==NULL)
	{
		printf("nothing left to display!!linked list is empty!!\n");
		return;
	}
	printf("elements of linked list are\n");
	while(disp!=NULL)
	{
		printf("%d\t",disp->ele);
		disp=disp->link;
	}
}

n* delete_ll(n* head)
{
	printf("entire linked list is deleted\n");
	head=NULL; //or free(head); head=NULL;
	return head;
}	
int main()
{
	n *head=NULL;
	for(;;)
	{
		printf("\n 1: insert front node\n 2:delete front node\n 3:display\n 4:delete linked list\n 5:exit\n");
		printf("enter your choice\n");int ch;
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: head=ins_frnt_node(head);break;
			case 2: head=del_frnt_node(head);break;
			case 3: display_nodes(head);break;
			case 4: head=delete_ll(head);break;
			case 5: exit(0);
			default: printf("enter a proper choice\n");
		}
	}
	return 0;
}