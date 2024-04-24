#include<stdio.h>
// single structure pointer to array of structures.
typedef struct
{
	int bid;
	char auth_n[20];
	float price;
}b;

void read(int n,b *bsp)//for single-value pointer, bsp[i]-> arrow kind cannot be used to access, rather dot-operator (bsp[i].bid) can be used
{
	for(int i=0;i<n;i++)
	{
		printf("\n\nenter book[%d] details\n",i+1);
		printf("book id=");scanf("%d",&bsp[i].bid); //&(bsp+i)->bid
		fflush(stdin);
		printf("author name=");scanf("%[^\n]s",bsp[i].auth_n); //(bsp+i)->auth_n
		printf("price=");scanf("%f",&bsp[i].price);  //&(bsp+i)->price
	}
}

void write(int n,b *bsp)
{
	for(int i=0;i<n;i++)
	{
		printf("\n**********entered book[%d] details are******\n",i+1);
		printf("book id=%d",bsp[i].bid);
		printf("\nauthor name=%s",bsp[i].auth_n);
		printf("\nprice=%f",bsp[i].price);
	}
}


int main()
{
	int n;
	printf("enter the number of books to store\n");
	scanf("%d",&n);
	b bs[n];
	read(n,bs);
	write(n,bs);
	return 0;
}
	