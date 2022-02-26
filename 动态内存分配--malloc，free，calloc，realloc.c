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
//	scanf("%d", &n);//n为变量，不能用scanf接收
//	struct S arr[n] = { 0 };
//	return 0;
//}
// int main()
// {
//	//向内存申请10个整形空间--void* malloc(size_t size);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int* p = (int*)malloc(10 * sizeof(11111111111111111111));
//	if (p == NULL)
//	{
//		//printf("%s", strerror(errno));
//		printf("空间不足\n");
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
//	 //向内存申请10个整形空间
//	 //int* p = (int*)malloc(10 * sizeof(int));
//	 int* p = (int*)malloc(10 * sizeof(11111111111111111111));
//	 if (p == NULL)
//	 {
//		 //printf("%s", strerror(errno));
//		 printf("空间不足\n");
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
//		 //将动态申请的空间还给内存
//		 //free函数--用来释放动态开辟的内存空间
//		 free(p);
//		 *p = NULL;
//	 }
//	 return 0;
int main()
{
	//calloc和malloc不同的是，calloc会把申请来的空间内的数值初始化为零
//calloc-void    元素个数   元素类型
	///void* calloc(size_num, size_t size);
	int* p =(int *)calloc(10 , sizeof(int));
	if (p == NULL)
	{
		//printf("%s", strerror(errno));
		printf("空间不足\n");
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
	/*realloc函数的出现让动态内存管理更加灵活。
		有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，那为了合理的时候内存，
		我们一定会对内存的大小做灵活的调整。那rea110c函数就可以做到对动态开辟内存大小的调整。函数原型如下 :
	void* realloc(void* ptr, size_t size);
	ptr是要调整的内存地址· size 调整之后新大小
		·返回值为调整之后的内存起始位置。
		。这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
		·realloc在调整内存空间的是存在两种情况 :
o情况1:原有空间之后有足够大的空间*/

	    int *p2= realloc(p, 30);
		
		if (p2 == NULL)
		{
			//printf("%s", strerror(errno));
			printf("空间不足\n");
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
