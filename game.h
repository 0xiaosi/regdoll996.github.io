#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//����
void InitBoard(int board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void playmove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL], int row, int col);
//�������
//���Ӯ    '*'
//����ө   '#'
//ƽ��      'Q'
//��Ϸ����  'c'
char IsWin(char board[ROW][COL], int row, int col);

