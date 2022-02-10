#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//声明
void InitBoard(int board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void playmove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL], int row, int col);
//四种情况
//玩家赢    '*'
//电脑萤   '#'
//平局      'Q'
//游戏继续  'c'
char IsWin(char board[ROW][COL], int row, int col);

