#include<stdio.h>
/*file.i :-preprocessor performs primary transformations of the source program text using 
		only lexical analysis.
file.o :- raw binary files, which will be processed by linker to produce final executable file
file.s :- source code in assembly level language
	  The files contain assembly instructions to the processor in sequential order
*/

/* used to indicate to the compiler that a variable's value
 may change unexpectedly, so it should not rely on the value being cached 
in a register or optimized away.*/

/*
volatile static int i=10;
void f1() //volatile int i
{
	volatile static int i;
	i=i+20;
	printf("\nf1(i)=%d\n",i);
}
struct check
{
	volatile int a;
	unsigned int b;//:5;
	volatile char c;
};
int main()
{
	printf("size of struct check=%d bytes",sizeof(struct check));
	printf("i=%d",++i);
	f1();
	f1();
	return 0;
}
*/

//C-II
/*
volatile static int i=10;
void f1() //volatile int i
{
	volatile static int i;
	i=i+20;
	printf("\nf1(i)=%d\n",i);
}
struct check
{
	volatile int a;
	unsigned int b:5;
	volatile char c;
};
int main()
{
	printf("size of struct check=%d bytes",sizeof(struct check));
	printf("i=%d",++i);
	f1();
	f1();
	return 0;
}
*/
//C-III
/*
volatile static int i=10;
void f1() //volatile int i
{
	volatile static int i;
	i=i+20;
	printf("\nf1(i)=%d\n",i);
}
struct check
{
	volatile int a:3;
	unsigned int b:5;
	volatile char c;
};
int main()
{
	printf("size of struct check=%d bytes",sizeof(struct check));
	printf("i=%d",++i);
	f1();
	f1();
	return 0;
}
*/

//C-IV
/*
volatile static int i=10;
void f1() //volatile int i
{
	volatile static int i;
	i=i+20;
	printf("\nf1(i)=%d\n",i);
}
struct check
{
	volatile int a:3;
	unsigned int b;
	volatile char c;
};
int main()
{
	printf("size of struct check=%d bytes",sizeof(struct check));
	printf("i=%d",++i);
	f1();
	f1();
	return 0;
}
*/



//VVI
//Predict output of this code for ISA
/*
volatile static int i=10;
void f1() 
{
	static int i; //Initialization makes it 0 so during the first run i is 0 so it i+=20; is 0+20;
	i=i+20;
	printf("\nf1(i)=%d\n",i);
}
struct check
{
	volatile int a:3;
	unsigned int b;
	volatile char c;
};
int main()
{
	printf("size of struct check=%d bytes",sizeof(struct check));
	printf("i=%d",++i);
	f1();
	f1();
	return 0;
}
*/
volatile static int i=10;
void f1() 
{
	volatile static int i; 
	i=i+20;
	printf("\nf1(i)=%d\n",i);
}
struct check
{
	volatile int a:3;
	unsigned int b;
	volatile char c;
};
int main()
{
	printf("size of struct check=%d bytes",sizeof(struct check));
	printf("i=%d",++i);
	f1();
	f1();
	return 0;
}