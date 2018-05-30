#include <stdio.h>

int factorial(int n)
{
	int result = 1;
	while (n > 0)
	{
		result *= n;
		n --;
	}
	return result;
}

int main(int argc, char *argv[])
{
	int m = 0;
	scanf("%d", &m);
	printf("m!= %d\n", factorial(m));
	return 0;
}