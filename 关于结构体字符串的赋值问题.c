
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
//	a.name = "android";//出问题，C语言中结构体赋值不能直接这样做！
//	a.i = 8;//但是不是数组可以
//
//	return  0;
//}
//正确做法
//1将数组改成指针：
#include<stdio.h>
typedef struct
{
	char *name;   //那就不用数组，改成指针就没毛病
	int i;
}Book;

int main()
{
	Book a;
	a.name = "android";
	a.i = 8;
	return 0;
}
//2使用scanf输入：
#include<stdio.h>
typedef struct
{
	char name[20];
	int i;
}Book;

int main()
{
	Book a = { "android",8 };//只能在定义时这样做,下面错误示例

	//Book a;
	//a={"android",8};    这样不允许

	a.i = 8;
	return 0;
}
//3定义时赋初值：
#include<stdio.h>
typedef struct
{
	char name[20];
	int i;
}Book;

int main()
{
	Book a = { "android",8 };//只能在定义时这样做,下面错误示例

	//Book a;
	//a={"android",8};    这样不允许

	a.i = 8;
	return 0;
}
//4使用#include <string.h>里面的拷贝函数
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
	strcpy(a.name, "android");  //这样做也不错的选择
	a.i = 8;
	return 0;
}