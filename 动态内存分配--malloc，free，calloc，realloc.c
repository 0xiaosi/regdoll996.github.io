#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct S
{
	int age;
	char name[20];
};
//int main()
//{
//	int n;
//	scanf("%d", &n);//nΪ������������scanf����
//	struct S arr[n] = { 0 };
//	return 0;
//}
// int main()
// {
//	//���ڴ�����10�����οռ�--void* malloc(size_t size);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int* p = (int*)malloc(10 * sizeof(11111111111111111111));
//	if (p == NULL)
//	{
//		//printf("%s", strerror(errno));
//		printf("�ռ䲻��\n");
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			*(p+i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p + i));
//		}
//	}
//	return 0;
//}
// int main()
// {
//	 //���ڴ�����10�����οռ�
//	 //int* p = (int*)malloc(10 * sizeof(int));
//	 int* p = (int*)malloc(10 * sizeof(11111111111111111111));
//	 if (p == NULL)
//	 {
//		 //printf("%s", strerror(errno));
//		 printf("�ռ䲻��\n");
//	 }
//	 else
//	 {
//		 int i;
//		 for (i = 0; i < 10; i++)
//		 {
//			 *(p + i) = i;
//		 }
//		 for (i = 0; i < 10; i++)
//		 {
//			 printf("%d", *(p + i));
//		 }
//		 //����̬����Ŀռ仹���ڴ�
//		 //free����--�����ͷŶ�̬���ٵ��ڴ�ռ�
//		 free(p);
//		 *p = NULL;
//	 }
//	 return 0;
int main()
{
	//calloc��malloc��ͬ���ǣ�calloc����������Ŀռ��ڵ���ֵ��ʼ��Ϊ��
//calloc-void    Ԫ�ظ���   Ԫ������
	///void* calloc(size_num, size_t size);
	int* p =(int *)calloc(10 , sizeof(int));
	if (p == NULL)
	{
		//printf("%s", strerror(errno));
		printf("�ռ䲻��\n");
	}
	else
	{
		int i;
		/*for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}*/
		for (i = 0; i < 10; i++)
		{
			printf("%d", *(p + i));
		}
		printf("\n");
	}
	//free(p);
	
	
	//realloc
	/*realloc�����ĳ����ö�̬�ڴ���������
		��ʱ�����Ƿ��ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�������ֻ��������Ŀռ�����ˣ���Ϊ�˺����ʱ���ڴ棬
		����һ������ڴ�Ĵ�С�����ĵ�������rea110c�����Ϳ��������Զ�̬�����ڴ��С�ĵ���������ԭ������ :
	void* realloc(void* ptr, size_t size);
	ptr��Ҫ�������ڴ��ַ�� size ����֮���´�С
		������ֵΪ����֮����ڴ���ʼλ�á�
		�������������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ䡣
		��realloc�ڵ����ڴ�ռ���Ǵ���������� :
o���1:ԭ�пռ�֮�����㹻��Ŀռ�*/

	    int *p2= realloc(p, 30);
		
		if (p2 == NULL)
		{
			//printf("%s", strerror(errno));
			printf("�ռ䲻��\n");
		}
		else
		{
			int i;
			for (i = 0; i < 10; i++)
			{
				*(p2 + i) = i;
			}
			for (i = 0; i < 10; i++)
			{
				printf("%d", *(p2 + i));
			}
		}
		
	return 0;
}
