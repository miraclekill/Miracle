#include <stdio.h>
/*
 *取两位正整数的十位和个位
 */
void funs(int x)
{
	int i = 0, j = 0;
	if (x%10 == 0) 
	{
		j = 0;
		i = x / 10;
	}
	else 
	{
		j = x % 10;
		i = x / 10;
	}
	printf("shi is %d, ge is %d\n", i, j);
}

int main(int argc, char *argv[])
{
	int m = 90;
	funs(m);
	return 0;
}