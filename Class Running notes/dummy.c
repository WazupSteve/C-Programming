#include <stdio.h>
typedef struct
{
	int bid;
	char auth_n[20];
	float price;
}b;

void read_bsp(int n,b **dp)
{
	printf("*********reading structure array eleemnts using double-pointers*******\n");
	for(int i=0;i<n;i++)
	{
		printf("enter book[%d] details\n",i+1);
		printf("book id=");scanf("%d",&dp[i]->bid);fflush(stdin);
		fflush(stdin);
		printf("author name=");scanf("%[^\n]s",&dp[i]->auth_n);
		printf("price=");scanf("%f",&dp[i]->price);
	}
}

void write_bsp(int n,b **dp)
{
	printf("*********writing structure array eleemnts using double-pointers*******\n");
	for(int i=0;i<n;i++)
	{
		printf("\n\nentered book[%d] details are\n",i+1);
		printf("book id=%d",dp[i]->bid);
		printf("\nauthor name=%s",dp[i]->auth_n);
		printf("\nprice=%f",dp[i]->price);
	}
}

void swap(b**dp1, b**dp2)
{
	b*temp=*dp1;
	*dp1=*dp2;
	*dp2=temp;
}
void bubble_sort(int n,b **dp)//passed array-of-struct pointers and reciving as double-pointers
{

	for(int i=0;i<=n-2;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{

			if(dp[j]->bid > dp[j+1]->bid)
			{
				b *sp=dp[j];
				dp[j]=dp[j+1];
				dp[j+1]=sp;
			}
		}
	}

}
int main()
{
    int n; 
	printf("enter the number of books to store\n");
	scanf("%d",&n);
	b bs[n],*bsp[n];
	for(int i=0;i<n;i++)
		bsp[i]=&bs[i];
	read_bsp(n,bsp);
	write_bsp(n,bsp);
	printf("\n****printing array of structure elements using array of structure variable itself******\n");
	for(int i=0;i<n;i++)
	{
		printf("\nentered book[%d] details are\n",i+1);
		printf("book id=%d",bs[i].bid);
		printf("\nauthor name=%s",bs[i].auth_n);
		printf("\nprice=%f",bs[i].price);
	}
	
	printf("\n****bubble sort based on book-id using double-pointer-struct******\n");

	bubble_sort(n,bsp);//passing array-of-structure-pointers
	printf("after bubble sorting only through array-of-struct-pointers\n");
	write_bsp(n,bsp);
	printf("\n\n***printing original array-of-structure elements**********");
	for(int i=0;i<n;i++)
	{
		printf("\n\nbook[%d] details are\n",i+1);
		printf("book id=%d",bs[i].bid);
		printf("\nauthor name=%s",bs[i].auth_n);
		printf("\nprice=%f",bs[i].price);
	}
	return 0;
}