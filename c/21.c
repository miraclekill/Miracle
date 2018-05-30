#include<stdio.h>  
#include<math.h>  
  
void diamond(int n, char c)  
{  
    int i;  
    for (i = 1; i <= n; i++) {  
        int d = abs(i - n / 2 - 1), j;  
        for (j = 1; j <= d; j++) 
			printf(" ");  
        for (j = 1; j <= (n / 2 + 1 - d) * 2 - 1; j++) 
			printf("%c", c);  
        printf("\n");  
    }  
}  
  
int main()  
{  
    int n;  
    char c;  
    printf("Input n,c:\n");  
    scanf("%d %c", &n, &c);  
    if (n % 2 == 0) printf("error\n");  
    else diamond(n, c);  
}  