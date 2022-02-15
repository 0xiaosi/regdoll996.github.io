//char* strtok(char *str,const char *sep);
//str是被分割的字符串 sep是分割字符的集合
//strtok函数找到str的下一个标记，并将其用\0结尾，返回一个指向这个标记的指针。（strtok函数会改变被操作的字符串，所以在使用strtok函
//数切分的字符串一般都是临时拷贝的内容并且可修改。）
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数的第一个参数为NULL函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回NULL指针
#include<stdio.h>
int main()
{
	char arr[] = "sdfjkf@fkjakf.efuh";
	char* p = "@.";
	//strtok会改变字符串的内容，定一个buf防止原字符串被切割
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = NULL;
	for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s\n", ret);
	}
	return 0;
}