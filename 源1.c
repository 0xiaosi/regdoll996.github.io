//#include<stdio.h>
//int mystrlen(char* str)
//{
//	int b = 0;
//	while (*str != '\0')
//	{
//		str++;
//		b++;
//	}
//	return b;
//}
//int main()
//{
//	char a[] = "abcdef";
//	int len = mystrlen(a);
//	printf("%d", len);
//	
//	return 0;
//}
#include<stdio.h>
int mystrlen(char* str)
{
	if (*str != '\0')
		return 1 + mystrlen(str + 1);
	else
		return 0;
}
int main()
{
	char a[] = "abcdef";
	int len = mystrlen(a);
	printf("%d", len);

	return 0;
}