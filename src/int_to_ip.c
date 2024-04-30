#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[])
{
	int var = 2130706433;
	char ip[16] = "";
	char * ptr = (char *)&var;

	sprintf (ip, "%u.%u.%u.%u", ptr[3], ptr[2], ptr[1], ptr[0]);
	
	printf ("%s\n", ip);
}

