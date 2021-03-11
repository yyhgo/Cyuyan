#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	// 在一个有序数组中找到 7
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{                     //大于一行时，记得用大括号
			printf("找到了，下标是:%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}






// 使用 折半(二分)查找算法
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]); //计算元素个数
	int left = 0;  //左下标
	int right = sz - 1;  //右下标
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是:%d\n", mid);
			break;
		}
	}
	if (left > right)
		{
			printf("找不到\n");
		}

	return 0;
}