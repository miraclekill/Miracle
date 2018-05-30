#include <stdio.h>

void twosum(int x, int y)
{
	printf("x+y=%d", x + y);
}

int main(int argc, char *argv[])
{
	int i = 3, j = 4;
	twosum(i, j);
	return 0;
}