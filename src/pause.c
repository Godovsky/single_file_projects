#include <stdio.h>

int main (int argc, char * argv[])
{
	printf ("Press \'q\' button to quit: ");
	while (getchar () != 'q');

	return 0;
}
