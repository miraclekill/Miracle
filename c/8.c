#include <stdio.h>

int increment(int x)
{
	return x += 1;
}

void increments(int y)
{
    printf("y*2=%d", y * 2);	
}

int main(int argc, char *argv[])
{
	int i = 3, j = 4;
	printf("i+1=%d\n",increment(i));
	printf("j+1=%d\n",increment(j));
	increments(i);
	return 0;
}