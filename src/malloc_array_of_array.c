#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COL 10

int main (int argc, char * argv[])
{
	int len = 0;
    int ** arr;
    int count = 0, i, j;

    len = sizeof(int *)*ROW + sizeof(int)*ROW*COL;
    arr = (int **)malloc(len);

    /* for loop to point rows pointer to appropriate location in 2D array */
    for(i = 0; i < ROW; i++)
        arr[i] = ((int *)(arr + ROW) + COL * i);

    for (i = 0; i < ROW; i++)
	{
        for (j = 0; j < COL; j++)
            arr[i][j] = ++count;	/* OR *(*(arr+i)+j) = ++count */
	}

    for (i = 0; i < ROW; i++)
	{
        for (j = 0; j < COL; j++)
            printf("%d ", arr[i][j]);
	}

	printf ("\n");

    return 0;
}
