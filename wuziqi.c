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
		printf("\n");
	}
}

void playChess(void)
{
	int i = 0, j = 0;
	if (whoseTurn % 2 == 1) {
		printf("Turn to player 1, please input the position:");
		scanf("%d %d", &i, &j);
		while (chessboard[i][j] != 0) {
			printf("your position is taken,choose another:"); 
			scanf("%d %d", &i, &j);
		}
		chessboard[i][j] = 1;
	}
	else {
		printf("Turn to player 2, please input the position:");
		scanf("%d %d", &i, &j);
		while (chessboard[i][j] != 0) {
			printf("your position is taken,choose another:"); 
			scanf("%d %d", &i, &j);
		}
		chessboard[i][j] = 2;
	}
	
	system("clear");
	printChessboard();
	if (judge(i, j)) {
		if (whoseTurn % 2 == 1) {
			printf("play1 win\n");
			exit(0);
		}
		else {
			printf("play2 win\n");
			exit(0);
		}
	}
}

int judge(int x, int y)
{
	int i, j, k;
	int row = 0, col = 0;
	int t = 2 - whoseTurn % 2;
	const int step[4][2] = {{-1,0},{0,-1},{1,1},{1,0}};
	for (i = 0; i < 4; ++i) {
		const d[2] = {-1,1};
		int count = 1;
		for (j = 0; j < 2; ++j) {
			for (k = 1; k <= 4; ++k) {
				row = x + k * d[j] * step[i][0];
				col = y + k * d[j] * step[i][1];
				if (row >= 1 && row <=N && col >= 1 && col <= N && chessboard[x][y] == chessboard[row][col]) {
					count += 1;
				}
				else 
					break;
			}
		}
		if (count >= 5)
			return 1;
	}
	return 0;
}