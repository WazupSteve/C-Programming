/*example for the use of pragma directive
to specify the fucntions that are to be started and ended before pragma start and exit
  3)#pragma warn: to hide warning messages (-rvl,-par, -rch)
*/
//if the natural allignment of the struct is lesser than the pack(n) value specified
//then, it will ignore the pack(n) value, and considers the natural allignment itself

#include<stdio.h>
#include<stddef.h>
#pragma pack(1) // n value can be 1,2,4,8,16... in the power of 2 //Pack is a function available in the pragma directive
//#pragma pack(8)
struct sample
{
	int a:3;
	//int a:10;
	char b;
};
//size of struct when pragma is commented is 4 bytes
//size of struct when pragma is uncommented is 2 bytes
int main()
{
	printf("size of structure is %lu\n",sizeof(struct sample));
    //printf("offset of struct sample a=%d\n",offsetof(struct sample,a)); //ERROR
	//for bit fields u cannot fetch the offset value also u get the error!
	printf("offest of struct sample b=%d\n",offsetof(struct sample,b));
	return 0;
}
//When pragmas is taken under then u see that 2 bytes is occupied by the struct in which 1 byte is stored to char b
