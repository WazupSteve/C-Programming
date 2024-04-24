#include<stdio.h>

int main()
{
	int a=5,*p=&a;
	printf("value of a using a=%d\n",a);
	printf("value of a using a=%d\n",(int *)a);
	printf("value of a using p=%d\n",*p);
	printf("address of a using a=%p\n",&a);
	printf("address of a using p=%p\n",p);
	printf("address of p using p=%p\n",&p);
	return 0;
}

/*
int main()
{
	int a=10,*p=&a;
	printf("original value of a=%d\n",a);
	printf("address of a using a=%p\n",&a);
	printf("address of a using p=%p\n",(int *)p);
	printf("value of a using p=%d\n",*p);
	printf("address increase using p=%p\n",p+1);
	printf("value of a using p after address increase=%d\n",*p);
	printf("value access using adress increase action=%d\n",*(p+1));
	printf("2nd address increase using p=%p\n",p+2);
	return 0;
}


int main()
{
	printf("%lu %lu %lu %lu %lu\n",sizeof(int*),sizeof(float*),sizeof(double*),sizeof(char*),sizeof(short*));
	
	int a[5]={10,20,30,40,50},*p=&a[0];

	printf("*************printing array values using the pointer p[i] \n");
	for(int i=0;i<5&& printf("%d\n",p[i]);i++);//*p[i] gives error

	printf("************printing array address using &i[p]  \n");
	for(int i=0;i<5&& printf("address=%p\n",&i[p]);i++);
	
	printf("************accessing pointer address and array starting address     \n");
	printf("pointer address=%p, \narray starting address=%p\n",&p,&a);


	printf("*************printing array values using the pointer *(p+i) \n");
	for(int i=0;i<5&& printf("value=%d\n",*(p+i));i++);


	printf("************printing array values using the pointer *p++ and *(p++) are same  \n");
	for(int i=0;i<5&& printf("value=%d\n",*p++);i++);

	printf("************printing array values using the pointer *++r and *(++r) are same\n");
	printf("prints from 2nd element value makes one array-out-of-bound access due to pre-increment\n");
	int *r=&a[0];
	for(int i=0;i<5&& printf("value=%d\n",*(++r));i++);
	




	printf("************printing array address using &a[i]  \n");
	for(int i=0;i<5&& printf("address=%p\n",&a[i]);i++);

	printf("************printing array address using (a+i)  \n");
	for(int i=0;i<5&& printf("address=%p\n",(a+i));i++);

	printf("************printing array address using &a+i will not give correct address  \n");
	for(int i=0;i<5&& printf("address=%p\n",&a+i);i++);

	printf("************printing array address using &i[a]  \n");
	for(int i=0;i<5&& printf("address=%p\n",&i[a]);i++);


	printf("************printing array address using the pointer (q+i)  \n");
	int *q=&a[0];
	for(int i=0;i<5&& printf("address=%p\n",(q+i));i++);


	printf("************printing array address using ++q    \n");
	printf("prints from 2nd element address and makes one array-out-of-bound address access due to pre-increment\n");
	for(int i=0;i<5&& printf("value=%p\n",++q);i++);

	
	printf("**********printing array values using (*t)++  \n");
	int *t=&a[0];
	for(int i=0;i<5&& printf("value=%d\n",(*t)++);i++);

	printf("**********printing array values using *(a+i) after (*t)++ operation \n");
	for(int i=0;i<5&& printf("value=%d\n",*(a+i));i++);

	printf("**********printing array values using ++(*z)  \n");
	int *z=&a[0];
	for(int i=0;i<5&& printf("value=%d\n",++(*z));i++);
	

	printf("**********printing array values using i[a] after ++(*z) operation \n");
	for(int i=0;i<5&& printf("value=%d\n",i[a]);i++);

	
	printf("********** Updating the array element using pointer u[0]=999      \n");
	int *u=&a[0];
	u[0]=999;

	printf("**********printing array values using a[i] after u[0]=999 operation for array element updation \n");
	for(int i=0;i<5&& printf("value=%d\n",a[i]);i++);

	printf("array:-a[i], i[a],*(a+i), pointer:- p[i], i[p], *(p+i),  all are same to access array elements\n");
	printf("array:-&a[i], &i[a],(a+i), pointer:- &p[i], &i[p], (p+i),  all are same to access address of array elements\n");
	printf("a++ is not allowed because a is a constant pointer,\nwhereas p++ is allowed for storing the address of the array element (updated) in the pointer variable\n");
	return 0;
}


int main()
{
	int a[5]={10,20,30,40,50},*p=&a[0],*q=&a[0];
	printf("*************printing array values using a[i] \n");
	for(int i=0;i<5&& printf("%d\n",a[i]);i++);
	
	
	printf("*************printing array address using &a[i] \n");
	for(int i=0;i<5&& printf("%p\n",&a[i]);i++);
	int c;
	printf("******************************************************\n");
	for(int i=0,j=4;i<5 && j>=0 ;i++,j--)
	{
		printf("p[i]=%d, q[j]=%d\n",p[i],q[j]);
		c=p[i]-q[j];
		printf("%d\n",c);
	}
	printf("*************printing array values using a[i] \n");
	for(int i=0;i<5&& printf("%d\n",a[i]);i++);
	return 0;
}
*/	