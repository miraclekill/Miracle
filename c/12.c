#include <stdio.h>

void print_day(int day)
{
	switch(day)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
		case 5:
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("no day\n");
			break;
	}
}

int main(int argc, char *argv)
{
	print_day(2);
	// 没有继续往下执行 一直遇到break;
	print_day(4);
	return 0;
}