#include <stdio.h>

/*
 * 打印小九九
 */
void jiujiu(void)
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d\t", i * j);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	jiujiu();
	return 0;
}