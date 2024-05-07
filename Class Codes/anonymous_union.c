#include<stdio.h>
/*
//----anonymous union example1- code gives warning, cannot create instances
union
{
	int i;
	char j;
	float k;
};
int main()
{
	union any; // gives warning:- un-named union defined no instances
	return 0;
}
*/

/*
//----anonymous union example2 using typedef works
#include<stdio.h>
typedef union
{
	int i;
	char j;
	float k;
}un; //Alias name
int main()
{
	un an; 
	an.i=100;
	printf("i=%d\n",an.i);	
	an.j='B';
	printf("j=%c\n",an.j);
	an.k=200.256;
	printf("k=%f\n",an.k);
	return 0;
}
*/

// anonymous union example 3:- w.r.t nested unions
/*
union sample
{
	int i;
	union
	{
		float j;
	};
};
int main()
{
	union sample s;
	s.i=10;
	printf("i=%d\n",s.i);	
	s.j=200.256;
	printf("j=%f\n",s.j);
	return 0;
}
*/