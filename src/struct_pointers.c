#include <stdio.h>

typedef struct
{
	int x;
	int y;
	void * p;
} POINT;

typedef struct
{
	float radius;
	POINT Point;
} CIRCLE;

int main (int argc, char * argv[])
{
	CIRCLE Circle = {3.54, {3, 4}};
	printf ("Radius: %f\nPoint: (%d, %d)\n\n", Circle.radius, Circle.Point.x, Circle.Point.y);

	CIRCLE Circle1 = {55.43, {4, 7}};
	printf ("Radius: %f\nPoint: (%d, %d)\n\n", Circle1.radius, Circle1.Point.x, Circle1.Point.y);
	
	POINT Point = {10, 32, &Circle1};
	printf ("Radius: %f\nPoint: (%d, %d)\n\n", 	((CIRCLE *)Point.p)->radius,
												((CIRCLE *)Point.p)->Point.x,
												((CIRCLE *)Point.p)->Point.y);

	return 0;
}
