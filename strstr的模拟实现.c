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
			return c;//�ҵ���
		}
		c++;

	}

	return NULL;//�Ҳ���
}
int main()
{
	char* p1 = "abc";
	char* p2 = "bc";
	char* arr = mystrstr(p1, p2);
	if (arr == NULL)
		printf("p2����p1���Ӵ�");
	else
		printf("%s\n", arr);
	return 0;
}