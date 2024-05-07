//examples on nested union/struct combo
#include<stdio.h>


//example 1
/*
struct sample
{
	int i;
	union complex
	{
		double j;
	};
};
int main()
{	struct sample s;
	//struct sample s={40,20.56};	
	printf("size of struct s=%d\n",sizeof(s));
	printf("size of struct member s.i=%d\n",sizeof(s.i));
	printf("size of struct member s.j=%d\n",sizeof(s.j));
	//printf("Value of s.j is %f\n",s.j);
	return 0;
}
*/


//example 2

struct sample
{
	int i;
	union complex
	{
		char c;
		float j;
	}; 
};

int main()
{
	struct sample s={10,'W',200.256};	
	printf("size of struct s=%d\n",sizeof(s));
	printf("size of struct member s.i=%d\n",sizeof(s.i));
	printf("size of union member s.c=%d\n",sizeof(s.c));
	printf("size of union member s.j=%d\n",sizeof(s.j));
	printf("i=%d\n",s.i);
	printf("c=%c\n",s.c);
	printf("j=%f\n",s.j);
	return 0;
}


//example 3
/*
union sample
{
	int i;
	struct complex
	{
		char c;
		float j;
	};
	//Size of struct is 5 bytes but due to byte padding u will get 8Bytes
	//Union has to compare between int 4 and struct 8 it takes 8
};
int main()
{
	union sample s={20,'W',200.256};	
	printf("size of union s=%d\n",sizeof(s));
	printf("size of union member s.i=%d\n",sizeof(s.i));
	printf("size of struct member s.c=%d\n",sizeof(s.c));
	printf("size of struct member s.j=%d\n",sizeof(s.j));
	printf("i=%d\n",s.i);
	printf("c=%c\n",s.c);//Implicit conversion of s.i
	printf("j=%f\n",s.j);
	return 0;
}
*/