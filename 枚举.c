#include<stdio.h>
//ö�ٵ��ŵ�
//Ϊʲôʹ��ö�� ?
//���ǿ���ʹ��#define���峣����Ϊʲô��Ҫʹ��ö�� ? ö�ٵ��ŵ� :
//	1���Ӵ���Ŀɶ��ԺͿ�ά����
//	2��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���3��ֹ��������Ⱦ(��װ)
//	4.���ڵ���
//	5ʹ�÷��㣬һ�ο��Զ���������
enum Sex
{
	//ö�ٵĿ���ȡֵ-����
	MALE=1,
	FEMALE=2,
	SECRET=3
};
enum Color
{
	RED,
	GREEN,
	BLUE
};

int main()
{
	enum Sex s = MALE;
	enum Color c = 2;
	printf("%d %d %d\n", RED, GREEN, BLUE);
	printf("%d %d %d\n", MALE,
		FEMALE,
		SECRET);
	return 0;
}