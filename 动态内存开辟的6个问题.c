#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int* p = (int*)malloc(44);
	//1.动态内存开辟失败，对NULL进行解引用
	*p = 10;
	//2.对动态内存开辟的越界访问
	int* pp = (int*)calloc(10, 4);
	if (pp == NULL)
	{
		return 0;
	}
	int i = 0;
	for (i = 0; i < 11; i++)//越界访问
	{
		*(pp + i) = i;
	}
	free(pp);
	pp = NULL;
	//3.对非动态内存开辟的空间用free释放
	int* ppp;
	free(ppp);
	ppp = NULL;
	//4.使用free释放动态内存开辟空间的一部分
	int* pppp = (int*)calloc(11, 4);
	if (pppp = NULL)
	{
		return 0;
	}
	int ii = 0;
	for (ii = 0; ii < 6; ii++)
	{
		*pppp++ = ii;//随着*pppp=*pppp+1的进行，*pppp的位置也移动了
	}
	free(pppp);
	pppp = NULL;
	//5.对同一块动态内存空间进行多次释放
	int* ppppp = (int*)malloc(40);
	if (ppppp = NULL)
	{
		return 0;
	}
	free(ppppp);
	//...
	free(ppppp);
	//6.动态内存开辟忘记释放(内存泄漏）
	while (1)
	{
		 malloc(4);
	}
	return 0;
}