#include<stdio.h>
int main() 
{
	//������ ������Ϣ 
	//0- No error 
	//1- Operation not permitted 
	// 2 - No such file or directory
		//...
		//errno ��һ��ȫ�ֵĴ�����ı���
		//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
		//char*str = strerror(errno);//printf("%s\n"��str);
		//���ļ�
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