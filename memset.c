#include<stdio.h>
int main()
{
	char arr[10] = "" ;
	memset(arr, '#', 8);
	printf("%s", arr);//arr="########"
	return 0;
}