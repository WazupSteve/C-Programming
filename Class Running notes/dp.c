/*
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Address of a=%p\n",&a);
    int *p=&a;
    printf("Address of a stored inside p is %p\n",p);
    printf("Address of pointer p is %p\n",&p);
    int **dp=&p;
    printf("Address of p stored inside dp is %p\n",dp);
    printf("Address of pointer dp is %p\n",&dp);
    printf("**************Accessing the values**********************\n");
    printf("a=%d\n",a);
    printf("*p=%d\n",*p);
    printf("**dp=%n",**dp);
    printf("$$$$$$$$$$$$$ Updatation of Values $$$$$$$$$$$$$$$$$$$\n");
    a=30;
    printf("New value of a is %d\n",a);
    *p=100;
    printf("New value of a through pointer update *p , a=%d\n",a);
    **dp=2000;
    printf("New value of a through pointer update **dp , a=%d\n",a);

}
*/
/*
#include<stdio.h>
void read(int n,int *ap[n])
{

	for(int i=0;i<n;i++)
		scanf("%d",ap[i]);

}

void write(int n,int **dp)
{
	for(int i=0;i<n;i++)
		printf("%d",**(dp+i)); //,**dp++ or *dp[i] this both work
}

int main()
{
	int n;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n],*ap[n];
    //int **dp=&ap;
	printf("maping array address to array of pointers\n");
	for(int i=0;i<n;i++)
	{
		ap[i]=&a[i];
	}
	printf("enter the array elements\n");
	read(n,ap);
	printf("entered the array elements are\n");
	write(n,ap);

}
*/

//Practice time revising stuff

/*
#include<stdio.h>
void read(int n, int *ap[n])
{
    for(int i=0;i<n;i++){
        scanf("%d",ap[i]);
    }
}
void display(int n, int **dp)
{
    for(int i=0;i<n;i++){
        printf("%d\n",**dp++);       //Different ways of printing are **dp++,*dp[i],**(dp+i)    
        printf("Address of of dp=%p\n",*dp);
        
    }
}
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n],*ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }
    read(n,ap);
    printf("After read and Before Display!\n");
    for(int i=0;i<n;i++){
        printf("Address of the exah value in a=%p\n",&a[i]);
        printf("Value stored in each of ap[i]=%p\n",ap[i]);
        printf("Value stored in each of *ap[i]=%d\n",*ap[i]);
    }
    printf("-------------------\n");
    display(n,ap);
}
*/

//Bubble sort sar
//In this modification happening even to the original array!!
/*
#include<stdio.h>
void read(int n,int *ap[n])
{
    for(int i=0;i<n;i++){
        scanf("%d",ap[i]);
    }
}
void bs(int n,int *ap[n])
{
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(*ap[j]>*ap[j+1]){
                int temp=*ap[j];
                *ap[j]=*ap[j+1];
                *ap[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",*ap[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],*ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }
    read(n,ap);
    printf("AFter Read and before BS\n");
    bs(n,ap);
    printf("After BS running a\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
*/

//This code works for bubble sort without alterning the original array!
/*
#include<stdio.h>
void read(int n,int *ap[n])
{
    for(int i=0;i<n;i++){
        scanf("%d",ap[i]);
    }
}
void bs(int n,int *ap[n])
{
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(*ap[j]>*ap[j+1]){
                int *temp=ap[j];
                ap[j]=ap[j+1];
                ap[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",*ap[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],*ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }
    read(n,ap);
    printf("AFter Read and before BS\n");
    bs(n,ap);
    printf("After BS running a\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}
*/

//Try with double pointers!
#include<stdio.h>
void read(int n,int *ap[n])
{
    for(int i=0;i<n;i++){
        scanf("%d",ap[i]);
    }
}
void bs(int n,int *ap[n])
{
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(*ap[j]>*ap[j+1]){
                int *temp=ap[j];
                ap[j]=ap[j+1];
                ap[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d\n",*ap[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n],*ap[n];
    for(int i=0;i<n;i++){
        ap[i]=&a[i];
    }
    read(n,ap);
    printf("AFter Read and before BS\n");
    bs(n,ap);
    printf("After BS running a\n");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
}