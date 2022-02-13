#include<stdio.h>
char mystrcpy(char* d, const char* c)
{
	while (*d++ = *c++)
	{ }
		return d;

}
int main()
{
	char a[256] = { 0 };
	char b[256] = { 0 };
	gets(a);
	gets(b);
	mystrcpy(a, b);
	printf("%s", a);
	return 0;
}