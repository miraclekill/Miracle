#include <stdio.h>

/*
 * 用嵌套循环求1-100的素数
 */
int main(int argc, char *argv[])
{
	int i, j;
	for (i = 1; i < 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}