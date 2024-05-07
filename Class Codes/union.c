#include<stdio.h>
//introduction to union, nested union example
/*
union sample
{
	int a;
	char c;
	int d[10];
};

int main()
{	/*
	//union sample s={10,'B',{20,30,40,50}};//observe output for this kind of initialization
	//union sample s={10,'B'};
	union sample s;
	printf("size of union sample=%d Bytes\n",sizeof(s));
	s.a=10;
	printf("a=%d\n",s.a);
	s.c='B';
	printf("c=%c\n",s.c);
	//printf("Akash change=a=%d\n",s.a); //HEre junk values come upo but the here u get 66 bcz implicit conversion
	s.d[0]=20,s.d[1]=30,s.d[2]=40,s.d[3]=50;
	*/
	/*
	union sample s={.d={10,20,30,40}};
	for(int i=0;i<4;i++)
		printf("%d\t",s.d[i]);
	return 0;
	*/
//}




//---nested unions example 1
/*
typedef union sample1
{
	int i;
	union complex
	{
		double j;
	};
}sam;

int main()
{
	
	//sam s={10,200.256};    //observe output for all these instances seperately
	//sam s={.j=200.256};  //observe output for all these instances seperately
	sam s={200.256};     //observe output for all these instances seperately    
	printf("sizeof union s=%d\n",sizeof(sam));
	printf("i=%ld\n",s.i);
	printf("j=%f\n",s.j);
	return 0;
}
*/

//---nested unions example 2
/*
typedef union sample1
{
	int i;
	union complex
	{
		double j;
	};
}sam;

int main()
{
	printf("sizeof union s=%d\n",sizeof(sam));
	sam s;
	s.i=100;
	printf("i=%d\n",s.i);
	s.j=200.256;
	printf("j=%f\n",s.j);
	return 0;
}
*/
