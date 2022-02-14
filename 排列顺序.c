#include<stdio.h>
void px(int arr[], int sx)
{
	int i = 0;
	int s = 0;
	for (i = 0; i < sx - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sx - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				s = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = s;
	        }

		}

	}
}
int main()
{
	int arr[] = { 1,3,2,5,4,7,8,6,9 };
	
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	px(arr,sz);
	for (i = 0; i < sz; i++)

	{
		printf("%d", arr[i]);
	}
	
	return 0;
}