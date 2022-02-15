#include<stdio.h>
int main() 
{
	//错误码 错误信息 
	//0- No error 
	//1- Operation not permitted 
	// 2 - No such file or directory
		//...
		//errno 是一个全局的错误码的变量
		//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
		//char*str = strerror(errno);//printf("%s\n"，str);
		//打开文件
		FILE* pf = fopen("test.txt", "r");
		if (pf == NULL) 
		{
		printf("%s\n", strerror(error));
	     }
		else 
		{ printf("open file success\n");
		}

	return 0;
}