#include <stdio.h>

void func (int * arr, size_t size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

int main (int argc, char * argv[])
{
	func ((int[]){0,1,2,3,4,5,6,7,8,9}, 10);

	return 0;
}

