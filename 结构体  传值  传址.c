#include<stdio.h>
struct S
{
	char *arr1;
	char *name;
	int arr3;
};
void chhhh(struct S* pp)//��ַ
{
	
	pp-> arr3 = 18;
}
void ch(struct S ppt)//��ֵ
{
	printf("%s %s %d", ppt.arr1, ppt.name, ppt.arr3);
}
int main()
{
	struct S s= { 0 };
	chhhh(&s );
	s.arr1 = "С��";
	s.name = "nan";
	ch(s);
return 0;
}