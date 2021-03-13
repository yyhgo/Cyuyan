#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "#####################";
	char arr2[] = "happy new year !!!!!!";
	int left = 0;
	int right = strlen(arr1) - 1;   // 或  = sizeof(arr1) - 2
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s\n", arr1);
		Sleep(1000);   // 休息1秒
		system("cls");   // 执行系统命令的一个函数- cls -清空屏幕
		left = left + 1;   // left++
		right = right - 1;   // right--
	}
	printf("%s\n", arr2);
	return 0;
}