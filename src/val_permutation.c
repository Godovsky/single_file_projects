#include <stdio.h>

int main (int argc, char * argv[])
{
	int val1 = 10, val2 = 20;
	
	printf ("Val1 = %d, val2 = %d\n", val1, val2);
	val1 = val1 ^ val2;
	val2 = val1 ^ val2;
	val1 = val1 ^ val2;
	printf ("Val1 = %d, val2 = %d\n", val1, val2);
	
	return 0;
}
