#include <stdio.h>

/*
 *编写程序数一下1到100的所有整数中出现多少次数字9
 */
int jiu(int n)
{
	if (n % 10 == 9 || n / 10 == 9)
	{
		return 1;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	int i, sum = 0;
	for (i = 1; i < 100; i++)
	{
		sum += jiu(i);
	}
	printf("jiu numbers is %d", sum);
	return 0;
}