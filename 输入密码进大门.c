#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		// if (password == "123456")   
		// 上句代码错误:==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp，如下:
		if (strcmp(password,"123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			if (i < 2)
				printf("密码错误，请重新输入\n");
			else if (i == 2)
				printf("三次输入错误，无法进入\n");
		}
	}
	return 0;
}