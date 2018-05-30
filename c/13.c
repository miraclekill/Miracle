#include <stdio.h>
/*
 * 整除是指余数为0,判断闰年
 */
int is_leap_year(int year)
{
	if (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)
	{
		printf("the year is leap\n");
	}
	else
	{
		printf("the year is not leap\n");
	}
}

int main(int argc, char *argv[])
{
	int year = 1000;
	is_leap_year(year);
	return 0;
}