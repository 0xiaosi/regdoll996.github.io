#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void menu()
{

	printf("*************************************");
	printf("********   1.play  0.exit   *********");
	printf("*************************************");
}
void game()
{
	char ret = 0;
	//创建数组
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		playmove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢

		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}

		//电脑下棋
		computermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board,ROW,COL);
			if (ret != 'c')
			{
				break;
			}
	}
	if (ret == '#')
	{
		printf("玩家赢\n");
	}
	else if (ret == '*')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
	
}
void text()
{
	int input = 0;
	printf("游戏规则（三子棋）：想尽一切办法让电脑赢！\n");
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}
int main()
{
	
	text();
	return 0;
}