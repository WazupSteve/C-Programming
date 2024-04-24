#include<stdio.h>
//***********************example 1*****************************************************
enum color
{
	red=1,blue=2,green=blue+blue,yellow=blue|green
};

int main()
{
	enum color check=red;
	printf("color code for red=%d\t enumerator name=%d\n",red,check);//%s gives null
	enum color check2;	//no enumerator value is assigned to check2, hence it will be by default 0
	check2=enum color(blue);//doesn't work
	for(int i=check2;i<=5;i++)//i gets initialized to 0
	{
		printf("check2 values=%d\n",i);
	}
}

//****************************example 2********************************************

int main()
{
	printf("printing enum values\n");
	enum color c;
	printf("size of enum color=%d bytes\n",sizeof(c));//enum color
	enum color check;
	for(check=red;check<=yellow;check++)
	{
		printf("check value=%d\n",check);// this wont print 0,2,4,6
	}
	printf("color code for red=%d\n",red);
	printf("color code for blue=%d\n",blue);
	printf("color code for green=%d\n",green);
	printf("color code for yellow=%d\n",yellow);
	for(int i=red;i<=yellow;i++)
	{
		printf("color code=%d\n",i);// this wont print 0,2,4,6
	}
	enum traffic_lights
	{
		red,green,orange,yellow,
	};
	printf("traffic code for red=%d\n",red);
	printf("traffic code for green=%d\n",green);
	printf("traffic code for blue=%d\n",orange);
	printf("traffic code for yellow=%d\n",yellow);
	for(int i=red;i<=yellow;i++)
	{
		printf("traffic code=%d\n",i);
	}
	
	return 0;
}



