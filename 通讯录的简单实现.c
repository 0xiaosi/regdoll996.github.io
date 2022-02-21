#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1024

//通讯录

typedef struct Person
{
	char name[N];
	char sex[N];
	char age[N];
	char phone[N];
	char address[N];
}Person;

typedef struct Addrbook
{
	Person* person_info;
	int size;
	int capacity;
}Addrbook;

Addrbook g_addr_book;

enum
{
	EXIT = 0,
	ADD = 1,
	FIND = 2,
	DEL = 3,
	MODFITY = 4,
	PRINT = 5,
	CLEAR = 6
};

//初始化通讯录
void Init()
{
	g_addr_book.size = 0;
	g_addr_book.capacity = 5;
	g_addr_book.person_info = (Person*)malloc(sizeof
	(Person)*g_addr_book.capacity);
}

int Menu()
{
	printf("(>^ω^<)喵\n");
	printf("0.退出\n");
	printf("1.添加\n");
	printf("2.查找\n");
	printf("3.删除\n");
	printf("4.修改\n");
	printf("5.显示\n");
	printf("6.清除\n");
	printf("(>^ω^<)喵\n");
	int n = 0;
	printf("请输入你要执行的操作：");
	scanf("%d", &n);
	if (n < 0 || n>6)
	{
		printf("你选择的操作有问题,请重新选择！！\n");
	}
	return n;
}

void CheckRealloc()
{
	if (g_addr_book.size < g_addr_book.capacity)
	{
		return;
	}
	g_addr_book.capacity *= 2;
	Person* tmp = (Person*)malloc(sizeof(Person)
		* g_addr_book.capacity);
	for (int i = 0; i < g_addr_book.size; ++i)
	{
		tmp[i] = g_addr_book.person_info[i];
	}
	free(g_addr_book.person_info);
	g_addr_book.person_info = tmp;
}

//添加个人信息
void ADDPerson()
{
	//扩容
	CheckRealloc();
	printf("添加一个新用户！\n");
	printf("请输入姓名：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].name);
	printf("请输入性别：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].sex);
	printf("请输入年龄：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].age);
	printf("请输入电话号码：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].phone);
	printf("请输入住址：");
	scanf("%s", g_addr_book.person_info[g_addr_book.size].address);
	printf("添加成功！\n");
	g_addr_book.size++;
}

//查找个人信息
void FINDPerson()
{
	char name[N] = { 0 };
	int count = 0;
	printf("请输入查找人的name：");
	scanf("%s", &name);
	for (int i = 0; i < g_addr_book.size; i++)
	{
		if (strcmp(name, g_addr_book.person_info[i].name) == 0)
		{
			printf("查找成功：");
			printf("姓名：%s  性别：%s  年龄：%s  电话：%s  住址：%s\n",
				g_addr_book.person_info[i].name,
				g_addr_book.person_info[i].sex,
				g_addr_book.person_info[i].age,
				g_addr_book.person_info[i].phone,
				g_addr_book.person_info[i].address);
			count++;
		}
	}
	if (count == 0)
	{
		printf("此用户不存在！\n");
	}
}

//删除个人信息
void DELPerson()
{
	int n = 0;
	printf("请输入删除人对应的序号：");
	scanf("%d", &n);
	if (n < 0 || n >= g_addr_book.size)
	{
		printf("此用户不存在,删除失败！\n");
		return;
	}
	if (n != g_addr_book.size)
	{
		strcpy(g_addr_book.person_info[n].name,
			g_addr_book.person_info[g_addr_book.size - 1].name);
		strcpy(g_addr_book.person_info[n].sex,
			g_addr_book.person_info[g_addr_book.size - 1].sex);
		strcpy(g_addr_book.person_info[n].age,
			g_addr_book.person_info[g_addr_book.size - 1].age);
		strcpy(g_addr_book.person_info[n].phone,
			g_addr_book.person_info[g_addr_book.size - 1].phone);
		strcpy(g_addr_book.person_info[n].address,
			g_addr_book.person_info[g_addr_book.size - 1].address);
	}
	--g_addr_book.size;
	printf("删除成功！\n");
}

//修改一个人的信息
void MODFITYPerson()
{
	int n = 0;
	printf("请输入要修改人的序号：");
	scanf("%d", &n);
	if (n < 0 || n >= g_addr_book.size)
	{
		printf("此用户不存在！\n");
		return;
	}
	char name[N] = { 0 };
	char phone[N] = { 0 };
	char sex[N] = { 0 };
	char age[N] = { 0 };
	char address[N] = { 0 };
	printf("请输入新name：");
	scanf("%s", &name);
	printf("请输入新sex：");
	scanf("%s", &sex);
	printf("请输入新age：");
	scanf("%s", &age);
	printf("请输入新phone：");
	scanf("%s", &phone);
	printf("请输入新address：");
	scanf("%s", &address);
	strcpy(g_addr_book.person_info[n].name, name);
	strcpy(g_addr_book.person_info[n].sex, sex);
	strcpy(g_addr_book.person_info[n].age, age);
	strcpy(g_addr_book.person_info[n].phone, phone);
	strcpy(g_addr_book.person_info[n].address, address);
	printf("修改成功！\n");
}

void Swap(char* arr1, char* arr2)
{
	for (int i = 0; i < N; ++i)
	{
		char tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
//字典序
void Qsort()
{
	int n = g_addr_book.size;
	while (n != 1)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			if (strcmp(g_addr_book.person_info[i].name,
				g_addr_book.person_info[i + 1].name) == 1)
			{
				Swap(g_addr_book.person_info[i].name,
					g_addr_book.person_info[i + 1].name);
				Swap(g_addr_book.person_info[i].sex,
					g_addr_book.person_info[i + 1].sex);
				Swap(g_addr_book.person_info[i].age,
					g_addr_book.person_info[i + 1].age);
				Swap(g_addr_book.person_info[i].phone,
					g_addr_book.person_info[i + 1].phone);
				Swap(g_addr_book.person_info[i].address,
					g_addr_book.person_info[i + 1].address);
			}
		}
		--n;
	}
}

//打印所有人的信息
void PRINTPerson()
{
	if (g_addr_book.size == 0)
	{
		printf("没有用户！\n");
		return;
	}
	Qsort();
	int i = 0;
	for (i = 0; i < g_addr_book.size; i++)
	{
		printf("%d 姓名：%s 性别：%s 年龄：%s 电话：%s 住址：%s\n",
			i, g_addr_book.person_info[i].name,
			g_addr_book.person_info[i].sex,
			g_addr_book.person_info[i].age,
			g_addr_book.person_info[i].phone,
			g_addr_book.person_info[i].address);
	}
	printf("显示成功！\n");
}

//确认是否退出
void CLEARPerson()
{
	printf("清除所有用户信息！\n");
	char n[N] = { 0 };
	printf("请再次确认你是否清除（yes/no）: ");
	scanf("%s", &n);
	if (strcmp(n, "yes") != 0)
	{
		printf("你取消了清除！\n");
		return;
	}
	g_addr_book.size = 0;
	printf("清除成功！\n");
}

//通讯录信息的保存
void Save()
{
	FILE* fp = fopen("../text.txt", "w");
	if (fp == NULL)
	{
		printf("文件保存失败！\n");
		return;
	}
	for (int i = 0; i < g_addr_book.size; ++i)
	{
		fwrite(&g_addr_book.person_info[i], sizeof(Person), 1, fp);
	}
	fclose(fp);
	printf("保存成功！保存了%d条！\n", g_addr_book.size);
}

//加载文件信息
void Load()
{
	FILE* fp = fopen("../text.txt", "r");
	if (fp == NULL)
	{
		printf("文件打开失败！\n");
		return;
	}
	//定一个新的Person存放读到信息
	Person tmp = { 0 };
	while (fread(&tmp, sizeof(tmp), 1, fp))
	{
		g_addr_book.person_info[g_addr_book.size] = tmp;
		++g_addr_book.size;
	}
	fclose(fp);
	printf("加载成功！加载了%d条！\n", g_addr_book.size);
}

int main()
{
	Init();
	Load();
	while (1)
	{
		int choice = Menu();
		switch (choice)
		{
		case ADD:ADDPerson();
			Save();
			break;
		case FIND:FINDPerson();
			break;
		case DEL:DELPerson();
			Save();
			break;
		case MODFITY:MODFITYPerson();
			Save();
			break;
		case PRINT:PRINTPerson();
			break;
		case CLEAR:CLEARPerson();
			break;
		case EXIT:
			printf("欢迎再见！！\n");
			Save();
			system("pause");
			return 0;
		default:
			break;
		}
	}
	system("pasue");
	return 0;
}