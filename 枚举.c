#include<stdio.h>
//枚举的优点
//为什么使用枚举 ?
//我们可以使用#define定义常量，为什么非要使用枚举 ? 枚举的优点 :
//	1增加代码的可读性和可维护性
//	2和#define定义的标识符比较枚举有类型检查，更加严谨。3防止了命名污染(封装)
//	4.便于调试
//	5使用方便，一次可以定义多个常量
enum Sex
{
	//枚举的可能取值-常量
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