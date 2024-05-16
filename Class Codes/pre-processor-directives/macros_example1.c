
/* Macros: *)a piece of code in a program which has been given a name
	   *)During pre-proessing, it substitutes the name with the piece of code
	   *)#define directive is used to define a macro
	   *)memory is not allocated for macro
	   *)cannot be changed using assignment operator
what all can be defined as a macro?
	   *) value
	   *) string
	   *) expression
	   *) parameter
	   *) macro in another macro
           *) file directives
*/

/*
#include<stdio.h>
#define PI 3.14
int main()
{
	float p=PI;
	//PI+=2; //macros cannot be chaged using assignment operator
	printf("pi value=%.3f",p); //change this to p and see that it is not replaced yet at pre-processing stage
	return 0;
}
*/
/*
#include<stdio.h>
#define PI 3.14
int main()
{
	float *p=&PI;
	printf("pi value=%.3f",*p); //cannot have a pointer to macros
	return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>
//parameterized macro
#define sqr(x)\ 
 x*x			//use (x) * (x) for 2+3 kind of expression to get 5*5
//macros are just code substitutions

//define sqr(x) x*x
int main()
{
	int x=25;
	printf("square is =%d\n",sqr(x));
	printf("square root is =%f\n",sqrt(x));
	printf("square of 2+3 =%d\n",sqr(2+3)); //11
	printf("square of 2+3 =%d\n",sqr((2+3)));  //25
	return 0;
}
*/


#define add 10
#define str "welcome to c"
#define expr 10+5
#define sum add+expr
#include<stdio.h>
int main()
{
	int a=5;
	printf("original value of a=%d\n",a);
	a+=add; //15
	printf("new value of a is=%d\n",a);
	printf("string str is =%s\n",str);
	printf("expression is =%d\n",expr);
	printf("sum of two macro is =%d\n",sum);
	return 0;
}
