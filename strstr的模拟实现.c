#include<stdio.h>
char* mystrstr(char* p1, char* p2)
{
	char* a = NULL;
	char* b = NULL;
	char* c = p1;
	while (*c)
	{
		a = c;
		b = p2;

		while (*a && *b && !(*a - *b))
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return c;//找到了
		}
		c++;

	}

	return NULL;//找不到
}
int main()
{
	char* p1 = "abc";
	char* p2 = "bc";
	char* arr = mystrstr(p1, p2);
	if (arr == NULL)
		printf("p2不是p1的子串");
	else
		printf("%s\n", arr);
	return 0;
}