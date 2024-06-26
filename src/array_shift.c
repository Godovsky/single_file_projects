#include <stdio.h>
#include <inttypes.h>
#include <unistd.h>

int main (int argc, char * argv[])
{
	uint8_t arr[3] = {0,0,5};
	int i, j;
	while (1)
	{
		for (i = 0; i < 3; i++)
    	{
			for (j = 0; j < sizeof(char)*8; j++)
    		{
    			printf ("%s", (arr[i] & (128>>j) ? "1" : "0"));
    		}
    		printf (" ");
		}
		printf ("\n");

		uint8_t tmp = (arr[0] & 128) >> 7;
	    for (i = 1; i < 3; i++)
		{
    		arr[i-1] <<= 1;
    		arr[i-1] |= (arr[i] & 128) >> 7;
    	}
		arr[2] <<= 1;
    	arr[2] |= tmp;

		usleep (500000);
	}

	return 0;
}
