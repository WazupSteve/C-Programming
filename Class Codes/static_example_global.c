/*#include<stdio.h>
void f1()
{
	static int i=30;
	i++;
	printf("%d\n",i);

}
int main()
{
	f1();
	f1();
	return 0;
}
*/

#include<stdio.h>
static int i=10;//scope lies within the file, lifetime is within the file, cannot be used in another file
int main()
{
	