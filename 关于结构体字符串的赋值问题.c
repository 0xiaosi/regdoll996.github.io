
//#include<stdio.h>
//typedef struct
//{
//	char name[20];
//	int i;
//
//}Book;
//
//int main()
//{
//	Book a;
//	a.name = "android";//�����⣬C�����нṹ�帳ֵ����ֱ����������
//	a.i = 8;//���ǲ����������
//
//	return  0;
//}
//��ȷ����
//1������ĳ�ָ�룺
#include<stdio.h>
typedef struct
{
	char *name;   //�ǾͲ������飬�ĳ�ָ���ûë��
	int i;
}Book;

int main()
{
	Book a;
	a.name = "android";
	a.i = 8;
	return 0;
}
//2ʹ��scanf���룺
#include<stdio.h>
typedef struct
{
	char name[20];
	int i;
}Book;

int main()
{
	Book a = { "android",8 };//ֻ���ڶ���ʱ������,�������ʾ��

	//Book a;
	//a={"android",8};    ����������

	a.i = 8;
	return 0;
}
//3����ʱ����ֵ��
#include<stdio.h>
typedef struct
{
	char name[20];
	int i;
}Book;

int main()
{
	Book a = { "android",8 };//ֻ���ڶ���ʱ������,�������ʾ��

	//Book a;
	//a={"android",8};    ����������

	a.i = 8;
	return 0;
}
//4ʹ��#include <string.h>����Ŀ�������
#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[20];
	int i;
}Book;

int main()
{
	Book a;
	strcpy(a.name, "android");  //������Ҳ�����ѡ��
	a.i = 8;
	return 0;
}