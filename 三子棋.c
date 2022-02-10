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
	//��������
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		playmove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ

		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}

		//��������
		computermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board,ROW,COL);
			if (ret != 'c')
			{
				break;
			}
	}
	if (ret == '#')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '*')
		{
			printf("����Ӯ\n");
		}
		else
		{
			printf("ƽ��\n");
		}
	
}
void text()
{
	int input = 0;
	printf("��Ϸ���������壩���뾡һ�а취�õ���Ӯ��\n");
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}
int main()
{
	
	text();
	return 0;
}