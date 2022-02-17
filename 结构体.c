//结构体类型的声明
//结构体的自引用
//结构体的变量的定义和初始化
//结构体的内存对折
// 1第一个成员在与结构体变量偏移量为0的地址处。
//2.其他成员变量要对齐到某个数字(对齐数)的整数倍的地址处。对齐数 = 编译器默认的一个对齐数与该成员大小的较小值。VS中默认的值为8
//3结构体总大小为最大对齐数(每个成员变量都有一个对齐数)的整数倍。
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数(含嵌套结构体的对齐数)的整数倍。
//结构体传参
#include<stdio.h>
struct a    //a为结构体组名
{
	char name[20];
	char xingbi[20];
	int age;
	struct b st;
}a3, a4, a5;//全局变量
struct a a6;//全局变量
struct b
{
	char bb[30];
	char bbb[30];
	int bbbb;
};
//匿名结构体类型
struct
{
	int b;
	char e;
	float f;
}x;
//结构体的自引用
typedef struct arr
{
	int date;
	struct arr *arr2;//结构体指针
}arr;
//在struct后面加上typedef可以在构建结构体变量时，不写struct，，，后面要写arr

int main()
{
	//构建结构体变量
	struct a a1 = { "张三","男",30,{"李四","女",18} };
	
	struct arr arr1;
	       arr arr2;
	return 0;
}