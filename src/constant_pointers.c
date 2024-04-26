#include <stdio.h>

int main (int argc, char * argv[])
{
	int a = 5;
	const int * pA = NULL;
	
	pA = &a;
	
	printf("*pA: %d\n", *pA);
	printf("a: %d\n\n", a);
	
	// *pA = 10;	// error: assignment of read-only location ‘*pA’
	
	// printf("*pA: %d\n", *pA);
	// printf("a: %d\n\n", a);
	
	return 0;
}
