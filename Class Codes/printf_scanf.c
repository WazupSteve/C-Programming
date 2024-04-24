#include<stdio.h>
/*
void main()
{
int n=printf("123456\n");
printf("%d",n);	//123456\n put together its 7
return;
}
*/

//---------------scanf stories---------------------------------
//-------------------successful execution of scanf-------------------------
/*
int main()
{
int a,b,n=scanf("%d %d",&a,&b);	
printf("%d\n",n);	
printf("%d %d",a,b);
return 0;
}
*/
//-----------------------run-time error example--------------------------------
/*
int main()
{
int a,b,n=scanf("%d %d",&a,b);	//no compile time error: its run-time error, terminates abruptly
printf("%d\n",n);	
printf("%d %d",a,b);
return 0;
}
*/

//----------invalid input example for the 2nd variable- scanf return value=1----------
/*
int main()
{// 
int a,b,n=scanf("%d %d",&a,&b);	//99 abc
printf("return value of scanf=%d\n",n);	//1 because it took atleast one successful entry
printf("values of a and b =%d %d",a,b); // 99 0 because it took wrong b value as character it's result is set to 0
return 0;
}
*/

//------invalid input example for the 1st variable- scanf return value=0----------
/* 
int main()
{// 
int a,b,n=scanf("%d %d",&a,&b);	//abc : wont even ask for 2nd entry of 'b' value
printf("return value of scanf=%d\n",n);	//0 because 1st entry itself is wrong
printf("values of a and b =%d %d",a,b); // junkvalue 0 because it took wrong 'a' value as character so its junk , and 'b' is set to 0
return 0;
}
*/

//----------input example for scanf return value=-1-----------------------
 
int main()
{ 
int a,b,n=scanf("%d %d",&a,&b);	//'ctrl+c' 
printf("return value of scanf=%d\n",n);	//-1 because 1st entry is EOF
printf("values of a and b =%d %d",a,b); // this line does not get executed at all
return 1;
}