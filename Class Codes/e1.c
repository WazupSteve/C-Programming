#include<stdio.h>
enum colors
{
	red=3, blue, green=7, yellow
};

int main()
{
	enum colors c=red;
	printf("%d\n",c);
	printf("%p\n",&c);
	printf("red code=%d\t red address=%p\n",red,&red);//throws error,because enumerator constants do not have address
	for(int i=red;i<=yellow;i++)
	{
		printf("color code=%d\n",i);

	}
	return 0;
}

















/*
int main()
{
	enum traffic_lights
	{
		red, green=4, yellow,orange
	};
	printf("red value=%d\n",red);
	printf("blue value=%d\n",blue);
	printf("green value=%d\n",green);
	printf("yello value=%d\n",yellow);
	
	printf("traffic light color codes\n");
	printf("red value=%d\n",red);
	printf("green value=%d\n",green);
	printf("yellow value=%d\n",yellow);
	printf("orange value=%d\n",orange);
	return 0;
}*/