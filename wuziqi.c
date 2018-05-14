#include <stdio.h>
#include <stdlib.h>

#define N 15
int chessboard[N + 1][N + 1] = { 0 };

//用来记录轮到的玩家是1还是2
int whoseTurn = 0;
void initGame(void);
void printChessboard(void);
void playChess(void);
int judge(int x, int y);

int main(void)
{
	initGame();
	while (1)
	{
		whoseTurn ++;
		playChess();
	}
	
	return 0;
}

//初始化游戏
void initGame(void)
{
	char c;
	printf("please y to play games:");
	c = getchar();
	if ( c != 'y' && c != 'Y') {
		exit(0);
	}
	system("clear");
	printChessboard();
}

//打印棋盘
void printChessboard(void)
{
	int i, j;
	for (i = 0; i <= N; i++) {
		for (j = 0; j <= N; j++) {
			if (i == 0) {
				printf("%3d", j);
			}
			else if (j == 0) {
				printf("%3d", i);
			}
			else if (chessboard[i][j] == 1) {
				printf("  X");
			}
			else if (chessboard[i][j] == 2) {
				printf("  O");
			}
			else {
				printf("  *");
			}
		}
	}
}