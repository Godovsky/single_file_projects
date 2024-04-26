#include <stdio.h>

#define WEIGHT_STEP 0.001

/* A learning converter of kilometers to miles (1m is 1.60934km) */
int main (int argc, char * argv[])
{
	float w = 0.5, km = 1.609, m = 1;
	
	/* The learning loop */
	while ((int)(km*w*1000) != (int)(m*1000))
	{
		if (km*w < m) w += WEIGHT_STEP;
		else w -= WEIGHT_STEP;
	}

	/* Checking how the perceptron was trained */
	while (1)
	{
		printf ("Enter kilometers: ");
		
		char tmp[7] = "";
		scanf ("%6s", tmp);
		sscanf (tmp, "%f", &km);

		if (km <= 0.0) break;

		printf ("%.3f km = %.3f m\n", km, km*w);
	}

	return 0;
}

