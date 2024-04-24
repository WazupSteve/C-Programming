#include<stdio.h>
//array of pointers to arrays

int main()
{
	//read and write array elements using array-of-pointers in main function itself
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],*ap[n];
	printf("maping array address to array of pointers\n");
	for(int i=0;i<n;i++)
	{
		ap[i]=&a[i];
	}
	printf("array address and pointer array values\n");
	for(int i=0;i<n;i++)
	{
		printf("address a[%d]=%p, address in ap[%d]=%p\n",i,&a[i],i,ap[i]);
	}
	
	printf("array values and *pointer array values\n");
	printf("since no values are inserted, it will display all junk values\n");
	for(int i=0;i<n;i++)
	{
		printf("value a[%d]=%d, value in *ap[%d]=%d\n",i,a[i],i,*ap[i]);
	}

	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",ap[i]);

	printf("entered the array elements are\n");
	for(int i=0;i<n;i++)
		printf("%d\n",*ap[i]);
	return 0;
}



/*
int main()
{
	// single value pointer to arrays
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],*p=a;
	printf("maping array address to single value pointer\n");
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",(p+i));//p[i]

	printf("entered array elements are\n");
	for(int i=0;i<n;i++)
		printf("%d\n",*(p+i));//p[i]
	return 0;
}

*/


/*
void read(int *p)
{
	scanf("%d",p);
}

void write(int *p)
{
	printf("%d\n",*p);
}
int main()
{
	// single value pointer to arrays using function call
	//A foolish way to insert elemnt by callling function for every insertion
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("maping array address to single value pointer\n");
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
		read(&a[i]);
	printf("entered array elements are\n");
	for(int i=0;i<n;i++)
		write(&a[i]);
	return 0;
}
*/	

/*

//using array-of-pointers in function call 
//implementing bubble sort technique to sort only array-of-pointers but not original element
void read(int n,int a[n])
{
	for(int i=0;i<n;i++)	
		scanf("%d",&a[i]);
}

void write(int n,int **dp)
{
	for(int i=0;i<n;i++)
		printf("%d\n",**dp++); //*dp[i] or **(dp+i)
}

void bubble_sort(int n,int *ap[n])
{
	for(int i=0;i<=n-2;i++)
	{
		for(int j=0;j<=n-2-i;j++)
		{
			if(*ap[j]>*ap[j+1])
			{
				int *temp=ap[j];
				ap[j]=ap[j+1];
				ap[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],*ap[n];
	printf("maping array address to array of pointers\n");
	for(int i=0;i<n;i++)
	{
		ap[i]=&a[i];
	}
	printf("enter the array elements\n");
	read(n,a);//if an array is passed here, it can be recieved by either another array or a single value pointer
	printf("entered array elements are\n");
	write(n,ap); //pass array of pointer and recieve it as array-of-pointers itself or as double-pointers
	printf("*******bubble sort*********\n");
	bubble_sort(n,ap);
	write(n,ap);//pass array of pointer and recieve it as array-of-pointers itself or as double-pointers
	printf("original position of array elements are\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}

*/