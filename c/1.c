#include <stdio.h>

int main(int agrc, char** argv)
{
    int i,j,result=0;
    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            result = i * j;
            printf("%d*%d=%-3d\n", i, j, result);
        }
    }
    return 0;
}
