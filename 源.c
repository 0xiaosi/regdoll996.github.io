#include<stdio.h>
#include<stdlib.h>
void hang(int* p, int n, int s) {
	for (int i = 0; i < n; i++) {
		*(p + i) = s;
	}
}
int main() {
	system("color 0A");//控制台和字体颜色
	system("mode con cols=102 lines=47"); //控制台大小
	int tree[100][99] = { 0 };
	//--------星形坐标
	tree[0][49] = 1; tree[1][47] = 1; tree[1][48] = 1; tree[1][49] = 1; tree[1][50] = 1; tree[1][51] = 1; tree[2][48] = 1; tree[2][50] = 1;
	//----	
	hang(&tree[2][49], 1, 2); hang(&tree[3][47], 5, 2); hang(&tree[4][45], 9, 2); hang(&tree[5][43], 13, 2);
	hang(&tree[6][47], 5, 2); hang(&tree[7][45], 9, 2); hang(&tree[8][43], 12, 2); hang(&tree[9][41], 17, 2); hang(&tree[10][39], 21, 2); hang(&tree[11][37], 25, 2);
	hang(&tree[12][43], 12, 2); hang(&tree[13][41], 17, 2); hang(&tree[14][39], 21, 2); hang(&tree[15][37], 24, 2); hang(&tree[16][35], 28, 2); hang(&tree[17][32], 35, 2);
	hang(&tree[18][37], 25, 2); hang(&tree[19][35], 28, 2); hang(&tree[20][32], 35, 2); hang(&tree[21][29], 40, 2); hang(&tree[22][26], 47, 2); hang(&tree[23][23], 53, 2);
	//树根 
	hang(&tree[24][47], 5, 3); hang(&tree[25][45], 5, 3); hang(&tree[26][47], 5, 3); hang(&tree[27][47], 5, 3); hang(&tree[28][47], 5, 3); hang(&tree[29][47], 5, 3); hang(&tree[30][47], 5, 3);
	hang(&tree[31][47], 5, 3); hang(&tree[32][47], 5, 3); hang(&tree[33][47], 5, 3); hang(&tree[34][47], 5, 3); hang(&tree[35][47], 5, 3); hang(&tree[36][47], 5, 3); hang(&tree[37][47], 5, 3);
	//树上装饰点 
	tree[24][23] = 4; tree[25][22] = 5; tree[24][35] = 4; tree[25][34] = 6; tree[8][50] = 6; tree[19][58] = 6; tree[16][40] = 7; tree[15][55] = 8; tree[21][39] = 9; tree[12][49] = 10;//树上装饰点 
	//---------
	tree[37][67] = 6; tree[36][67] = 6; tree[37][68] = 6; tree[36][68] = 6; tree[35][68] = 12; tree[35][69] = 11;
	// 
	for (int i = 0; i < 40; i++) {
		for (int j = 0; j < 100; j++) {
			if (tree[i][j] == 1) {
				printf("\033[40;33;1m*\033[1m");
			}
			else if (tree[i][j] == 2) {
				printf("\033[40;32;1m*\033[1m");
			}
			else if (tree[i][j] == 3) {
				printf("\033[40;33;5m*\033[5m");
			}
			else if (tree[i][j] == 4) {
				printf("\033[40;31;5m|\033[5m");
			}
			else if (tree[i][j] == 5) {
				printf("\033[40;31;5m●\033[5m");
			}
			else if (tree[i][j] == 6) {
				printf("\033[40;31;5m■\033[5m");
			}
			else if (tree[i][j] == 7) {
				printf("\033[40;35;5m●\033[5m");
			}
			else if (tree[i][j] == 8) {
				printf("\033[40;36;5m■\033[5m");
			}
			else if (tree[i][j] == 9) {
				printf("\033[40;37;5m●\033[5m");
			}
			else if (tree[i][j] == 10) {
				printf("\033[40;33;5m☆\033[5m");
			}
			else if (tree[i][j] == 11) {
				printf("\033[40;31;5m/\033[5m");
			}
			else if (tree[i][j] == 12) {
				printf("\033[40;31;5m\\\033[5m");
			}
			else if (tree[i][j] == 13) {
				printf("\033[40;33;5m/\033[5m");
			}
			else if (tree[i][j] == 14) {
				printf("\033[40;33;5m\\033[5m");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}