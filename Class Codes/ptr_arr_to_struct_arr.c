#include<stdio.h>
//array of structure-pointers to array-of-structures
typedef struct
{
	int bid;
	char auth_n[20];
	float price;
}b;

/*
//read and write array-of-struct using array-of-struct-pointer in the main function itself
int main()
{
	int n;
	printf("enter the number of books to store\n");
	scanf("%d",&n);
	b bs[n],*bsp[n];
	for(int i=0;i<n;i++)
	{
		bsp[i]=&bs[i];
	}
	printf("******************reading n structure inputs using array of structure pointers********************************\n");
	for(int i=0;i<n;i++)
	{
		printf("enter book[%d] details\n",i+1);
		printf("book id=");scanf("%d",&bsp[i]->bid); //since its array-of-struct-pointers, bsp[i]-> kind of access is required
		fflush(stdin);
		printf("author name=");scanf("%[^\n]s",bsp[i]->auth_n);  //bsp[i]->auth_n
		printf("price=");scanf("%f",&bsp[i]->price);
	}

	printf("*****************writing n structure inputs using array of structure pointers**********************************\n");
	for(int i=0;i<n;i++)
	{
		printf("\n\nentered book[%d] details are\n",i+1);
		printf("book id=%d",bsp[i]->bid);
		printf("\nauthor name=%s",bsp[i]->auth_n);
		printf("\nprice=%f",bsp[i]->price);
	}
	return 0;
}

*/








/*
// pass an array-of-struct and recieve as array-of-struct itself, because array becomes pointers during run-time
void read_bsp(int n,b bs[n])//arrays become pointers during runtime
{
	for(int i=0;i<n;i++)
	{
		printf("enter book[%d] details\n",i+1);
		printf("book id=");scanf("%d",&bs[i].bid);fflush(stdin);
		printf("author name=");scanf("%[^\n]s",bs[i].auth_n);
		printf("price=");scanf("%f",&bs[i].price);
	}
}

void write_bsp(int n,b bs[n])//arrays become pointers during runtime
{
	for(int i=0;i<n;i++)
	{
		printf("\n\nentered book[%d] details are\n",i+1);
		printf("book id=%d",bs[i].bid);
		printf("\nauthor name=%s",bs[i].auth_n);
		printf("\nprice=%f",bs[i].price);
	}
}

int main()
{

	int n; 
	printf("enter the number of books to store\n");
	scanf("%d",&n);
	b bs[n];
	read_bsp(n,bs);// pass an array-of-struct and recieve it as either arr-of-struct or as single-value-struct-pointer
	write_bsp(n,bs);
	return 0;
}

*/









/*
//send as array-of-struct-pointer and recieve it as array-of-struct-pointer itself
void read_bsp(int n,b *bsp[n])
{
	for(int i=0;i<n;i++)
	{
		printf("enter book[%d] details\n",i+1);
		printf("book id=");scanf("%d",&bsp[i]->bid);fflush(stdin);
		printf("author name=");scanf("%[^\n]s",bsp[i]->auth_n);
		printf("price=");scanf("%f",&bsp[i]->price);
	}
}

void write_bsp(int n,b *bsp[n])
{
	for(int i=0;i<n;i++)
	{
		printf("\n\nentered book[%d] details using array-of-struct-pointers are\n",i+1);
		printf("book id=%d",bsp[i]->bid);
		printf("\nauthor name=%s",bsp[i]->auth_n);
		printf("\nprice=%f",bsp[i]->price);
	}
}


void bubble_sort(int n,b *bsp[n])
{

	for(int i=0;i<=n-2;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{

			if(bsp[j]->bid > bsp[j+1]->bid)
			{
				b *sp=bsp[j];
				bsp[j]=bsp[j+1];
				bsp[j+1]=sp;
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
	printf("\n*******printing array of structure elements using array of structure variable itself*****************\n");
	for(int i=0;i<n;i++)
	{
		printf("\nentered book[%d] details are\n",i+1);
		printf("book id=%d",bs[i].bid);
		printf("\nauthor name=%s",bs[i].auth_n);
		printf("\nprice=%f",bs[i].price);
	}
	
	printf("\n***********bubble sort based on book-id*****************\n");
	bubble_sort(n,bsp);//passing array-of-structure-pointers
	printf("after bubble sorting only through array-of-struct-pointers\n");
	write_bsp(n,bsp);
	printf("\n\n********printing original array-of-structure elements*****************************");
	for(int i=0;i<n;i++)
	{
		printf("\n\nbook[%d] details are\n",i+1);
		printf("book id=%d",bs[i].bid);
		printf("\nauthor name=%s",bs[i].auth_n);
		printf("\nprice=%f",bs[i].price);
	}
	return 0;
}

*/






//send as array-of-struct-pointer and recieve it as double-pointer-of_struct itself
void read_bsp(int n,b **dp) //**dp is a single value double ppointer
{
	printf("************************reading structure array eleemnts using double-pointers******************\n");
	for(int i=0;i<n;i++)
	{
		printf("enter book[%d] details\n",i+1);
		printf("book id=");scanf("%d",&dp[i]->bid);fflush(stdin);
		printf("author name=");scanf("%[^\n]s",&dp[i]->auth_n);
		printf("price=");scanf("%f",&dp[i]->price);
	}
}

void write_bsp(int n,b **dp)
{
	printf("************************writing structure array eleemnts using double-pointers******************\n");
	for(int i=0;i<n;i++)
	{
		printf("\n\nentered book[%d] details are\n",i+1);
		printf("book id=%d",dp[i]->bid);
		printf("\nauthor name=%s",dp[i]->auth_n);
		printf("\nprice=%f",dp[i]->price);
	}
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
	printf("\n*******printing array of structure elements using array of structure variable itself*****************\n");
	for(int i=0;i<n;i++)
	{
		printf("\nentered book[%d] details are\n",i+1);
		printf("book id=%d",bs[i].bid);
		printf("\nauthor name=%s",bs[i].auth_n);
		printf("\nprice=%f",bs[i].price);
	}
	
	printf("\n***********bubble sort based on book-id using double-pointer-struct*****************\n");

	bubble_sort(n,bsp);//passing array-of-structure-pointers
	printf("after bubble sorting only through array-of-struct-pointers\n");
	write_bsp(n,bsp);
	printf("\n\n********printing original array-of-structure elements*****************************");
	for(int i=0;i<n;i++)
	{
		printf("\n\nbook[%d] details are\n",i+1);
		printf("book id=%d",bs[i].bid);
		printf("\nauthor name=%s",bs[i].auth_n);
		printf("\nprice=%f",bs[i].price);
	}
	return 0;
}
	