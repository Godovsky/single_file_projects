#include <stdio.h>

int main (int argc, char * argv[])
{
	int arr1[10] = {0};

	for (int i = 0; i < 10; i++)
		arr1[i] = i;

	for (int i = 0; i < 10; i++)
	{
		printf("arr1[%d] = %d; ", i, arr1[i]);
		printf("%d[arr1] = %d\n", i, i[arr1]);
	}


	printf("\n\n");


	int arr2[10] = {0};

	for (int i = 0; i < 10; i++)
		i[arr2] = i;

	for (int i = 0; i < 10; i++)
	{
		printf("arr2[%d] = %d; ", i, arr2[i]);
		printf("%d[arr2] = %d\n", i, i[arr2]);
	}

	return 0;
}

