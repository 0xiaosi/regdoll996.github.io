//memcpy不限数据类型以一个字节为单位拷贝
//处理不重叠的内存拷贝
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int brr[1024] = {0};
//	int num = sizeof(arr);
//	memcpy(brr, arr,num);
//	int i;
//	for ( i = 0; i < 10; i++)
//	{
//		printf(" %d",*(brr+i));
//	}
//	
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
 struct s
{
	char name[20];
	char xing[20];
	int age;
};
 void* my_memcpy(void* arr2,  void* arr1, size_t sum)
 {
	 void* ret = arr2;
	 assert(arr1 != NULL);
	 assert(arr2 != NULL);
	 while (sum--)
	 {
		 *(char*)arr2 = *(char*)arr1;
		 ++(char*)arr2;
		 ++(char*)arr1;
		
	 }
	 return ret;
 }
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[1024] = {0};
	int num = sizeof(arr1);
	struct s arr3[] = { {"张三","男",20},{"李四","女",18} };
	struct s arr4[] = { 0 };
	int i;
	my_memcpy(arr2, arr1, sizeof(arr3));
	for (i = 0; i < 10; i++)
			{
			printf("%d",arr2[i]);
			}
	system("pause");
	return 0;
}