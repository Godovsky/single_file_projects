#include <stdio.h>

int main (int argc, char * argv[])
{
	printf ("Press enter button to exit...");
	while (getchar () != '\n');

	return 0;
}
