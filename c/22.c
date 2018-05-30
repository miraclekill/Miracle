#include <stdio.h>

int main(int argc, char *argv[])
{
	struct complex_struct {
		double x, y;
	} z;
	
	int x = 3;
	z.x = x;
	z.y = 4.5;
	printf("x=%d, z.x=%f, z.y=%f", x, z.x, z.y);
	return 0;
}