#include <stdio.h>

void func (long int d)
{
	int * data = (int *)d;

	int i;
	for (i = 0; i < 8; i++)
		printf ("%d ", data[i]);
	printf ("\n");
}

int main (int argc, char * argv[])
{
	int data[8] = {1,2,5,9,4,34,6,3};

	func ((long int)data);

	return 0;
}
