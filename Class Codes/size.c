#include<stdio.h>
void main()
{
short int a;
int b;
long int c;
long long int d;
//long long long int e;	// throws error saying too long for gcc
//long float f1;	// throws error :- cannot use both long and float
double d1;
long double d2;
//long long double d3;	// error saying long long and double used
//double float f2;	// error: two or more datatype declaration
//float double fd;	// error: two or more datatype declaration
printf("short int size=%d\n",sizeof(a));
printf("int size=%d\n",sizeof(b));
printf("long int size=%d\n",sizeof(c));
printf("long long int size=%d\n",sizeof(d));
printf("double size=%d\n",sizeof(d1));
printf("long double size=%d",sizeof(d2));
//printf("long long double size=%d",sizeof(d3));
return;
}