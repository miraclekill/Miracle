#include <stdio.h>

/*
 * 最大公约数
 */
int gcd(int x, int y)
{
	if ( x % y == 0)
	{
		return y;
	}
	else
	{
		return gcd(y, x % y);
	}
}

int main(int argc, char *argv[])
{
	printf("m and n gcd is %d", gcd(9, 33));
	return 0;
}