#include <stdio.h>

/*
 * 递归函数
 */
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n-1);
}

int main(int argc, char *argv)
{
	printf("5!=%d\n", factorial(5));
	return 0;
}