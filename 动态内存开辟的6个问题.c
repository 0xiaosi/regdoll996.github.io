#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int* p = (int*)malloc(44);
	//1.��̬�ڴ濪��ʧ�ܣ���NULL���н�����
	*p = 10;
	//2.�Զ�̬�ڴ濪�ٵ�Խ�����
	int* pp = (int*)calloc(10, 4);
	if (pp == NULL)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i < 11; i++)//Խ�����
	{
		*(pp + i) = i;
	}
	free(pp);
	pp = NULL;
	//3.�ԷǶ�̬�ڴ濪�ٵĿռ���free�ͷ�
	int* ppp;
	free(ppp);
	ppp = NULL;
	//4.ʹ��free�ͷŶ�̬�ڴ濪�ٿռ��һ����
	int* pppp = (int*)calloc(11, 4);
	if (pppp = NULL)
	{
		return 0;
	}
	int ii = 0;
	for (ii = 0; ii < 6; ii++)
	{
		*pppp++ = ii;//����*pppp=*pppp+1�Ľ��У�*pppp��λ��Ҳ�ƶ���
	}
	free(pppp);
	pppp = NULL;
	//5.��ͬһ�鶯̬�ڴ�ռ���ж���ͷ�
	int* ppppp = (int*)malloc(40);
	if (ppppp = NULL)
	{
		return 0;
	}
	free(ppppp);
	//...
	free(ppppp);
	//6.��̬�ڴ濪�������ͷ�(�ڴ�й©��
	while (1)
	{
		 malloc(4);
	}
	return 0;
}