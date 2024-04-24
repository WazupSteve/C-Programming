#include <stdio.h>

int main()
{
	int a=10;
	printf("res : %d\n", a == 10 ? 100 : 200); 
	printf("res : %d\n", a++ == 10 ? 100 : 200); 
	printf("res : %d\n", a++ == 11 ? a : a * 2); // 12
	printf("res : %d %d\n", a++, a); // undefined

	// relational operators:
	//	0 : false
	//  1 : true
	//  any non zero value is true
	printf("compare %d\n", 5 > 3); // 1
	printf("compare %d\n", 5 > 3 > 1); // 0
	// C does not meaningfully support association of relation operators
 
	return 0;
}
 

 
 
















