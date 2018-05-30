#include <stdio.h>

void newline(void)
{
	printf("\n");
}

void threeline(void)
{
	newline();
	newline();
	newline();
}

int main(int argc, char *argv[])
{
	printf("this is firstline\n");
	threeline();
	printf("this is fourline\n");
	threeline();
	return 0;
}