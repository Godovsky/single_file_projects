#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[])
{
	int var = 0;
	char ip[16] = "127.0.0.1";
	char * ptr = (char *)&var;

	sscanf (ip, "%hhu.%hhu.%hhu.%hhu", &ptr[3], &ptr[2], &ptr[1], &ptr[0]);
	
	printf ("%d\n", var);
}

