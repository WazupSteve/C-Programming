//examples on bit-fields
#include<stdio.h>

//example 1
/*
struct sample
{
	int age:3;
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	printf("enter the value of age\n");	
	//scanf("%d",&s.age);//throws error, because are not bit-addressable
	s.age=5;//-4,-3,-2,-1,0,+1,+2,+3 for int age:3;(i.e for signed bit)
	printf("%d\n",s.age);
	return 0;
}
*/

//example 2
/*
struct sample
{
	int age:3;
	int year:16;
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	printf("enter the value of age\n");	
	//scanf("%d",s.age);//throws error, because are not bit-addressable
	s.age=3;//-3,-2,-1,0,+1,+2,+3 for int age:3;(i.e for signed bit)
	printf("%d\n",s.age);
	s.year=25;
	printf("%d\n",s.year);
	return 0;
}
*/
//example 3: to escape boundary
/*
struct sample
{
	int a:3;
	//int i:0;//throws error
	int :0;
	int b:10;
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));//observe the memory allocation
	return 0;
}
*/

/*
//example 4: dont's in bit fields: bit-fields not possible for arrays
struct sample
{
	int a[4]:10;//error, invalid type
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
*/

/*
//example 5: dont's in bit fields: not possible for pointers
struct sample
{
	int a:10;
	int *p:24;//error, invalid type
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
*/

/*
//example 6: dont's in bit fields: storage classes  not possible
struct sample
{
	static int a:10;
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
*/

/*
//example 7: dont's in bit fields: exceeding the max byte allocation
struct sample
{
	int a:34; //error: width of 'a' exceeds its type
};
int main()
{

	struct sample s;
	printf("size of struct s=%d\n",sizeof(s));
	return 0;
}
*/