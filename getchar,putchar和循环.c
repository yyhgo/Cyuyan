#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}



#include<stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");  //此时不用换行(\n)
	scanf("%s", password);  //输入密码，并存放在password中
	//缓冲区还剩下一个\n，会直接被读取(或password中有空格存在的话，会分两次被读取)
	//需要用一个循环，把缓冲区清空
	while ((ch = getchar()) != '\n')
	{
		;             //用此循环将缓冲区清空，都放到ch里
	}
	printf("请确认(Y/N):>");
	ret = getchar();   //Y/N
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	return 0;
}