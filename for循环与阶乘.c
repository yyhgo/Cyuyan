// 一 : 求阶乘
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	scanf("%d", & n);
	for (i = 1; i <= n; i++)   //for循环中间用分号
	{
		ret = ret * i;
	}
	printf("ret = %d", ret);
	return 0;
}


// 二 ： 求阶乘之和 (用两次循环)
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &a);
	for (n = 1; n <= a; n++)
	{
		ret = 1;     //开始时要赋值ret=1
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;    //ret不会每次都从起始位置1开始，所以每次开始时要赋值1
		}
		sum = sum + ret;
	}
	printf("sum的值为%d", sum);
	return 0;
}
// 简化 : (用一次循环即可)
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}





