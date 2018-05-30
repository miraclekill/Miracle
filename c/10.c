#include <stdio.h>

int foo(void)
{
	int i;
	printf("%d\n", i);
	i = 888;
}

void fooo(void)
{
	int i = 0;
	{
		int i = 2;
		int j = 3;
		printf("i is %d, j is %d\n", i, j);
	}
	printf("i is %d\n", i);
}

int main(int argc, char *argv[])
{
	foo();
	printf("hh\n");
	foo();
	fooo();
	if (2 > 0);
		printf("x xx\n");
	return 0;
}