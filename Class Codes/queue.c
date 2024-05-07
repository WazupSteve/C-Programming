//simple queue implementation using arrays w/o any modification or upgrade to simple queue
#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void insert(int n,int q[n])
{
	if(r!=n-1)
	{
		printf("enter element to be inserted\n");
		scanf("%d",&q[++r]);
	}
	else
		printf("queue overflow!! can't insert\n");
}

void delete(int n, int q[n])
{
	if(f<r && r>=0)
	{
		printf("element %d deleted\n",q[++f]);	
		
	}
	else if((f==r && r!=n-1) ||f==-1)
	{
		printf("queue empty!! deletion not possible\n");
	}
	else if(f==r && r==n-1)
	{
		printf("queue empty!! deletion not possible\n");f=-1,r=-1;
	}
}

void display(int n,int q[n])
{
	if(r==-1 ||f>r ||f==r)
	{
		printf("queue empty!! nothing to display!!\n");
	}
	for(int i=f+1;i<=r;i++)
	{
		printf("%d\t",q[i]);
	}

}	
int main()
{
	int n;
	printf("enter the queue size\n");
	scanf("%d",&n);
	int q[n];
	for(;;)
	{
		printf("\nenter your operation choice on queue\n");
		printf(" 1:insert\n 2:delete\n 3:display\n 4:exit\n");
		int ch;scanf("%d",&ch);	
		switch(ch)	
		{
			case 1:insert(n,q);break;
			case 2:delete(n,q);break;
			case 3:display(n,q);break;
			case 4:exit(0);break;
			default:printf("invalid choice\n");
		}
	}
	return 0;
}
	