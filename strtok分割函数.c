//char* strtok(char *str,const char *sep);
//str�Ǳ��ָ���ַ��� sep�Ƿָ��ַ��ļ���
//strtok�����ҵ�str����һ����ǣ���������\0��β������һ��ָ�������ǵ�ָ�롣��strtok������ı䱻�������ַ�����������ʹ��strtok��
//���зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ĵ�һ������ΪNULL��������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ��
#include<stdio.h>
int main()
{
	char arr[] = "sdfjkf@fkjakf.efuh";
	char* p = "@.";
	//strtok��ı��ַ��������ݣ���һ��buf��ֹԭ�ַ������и�
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = NULL;
	for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p))
	{
		printf("%s\n", ret);
	}
	return 0;
}