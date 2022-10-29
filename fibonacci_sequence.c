#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fibon_1(int n) //时间复杂度接近O(n^2)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return(Fibon_1(n - 1) + Fibon_1(n - 2));
}

int Fibon_2(int n) //时间复杂度为O(n)
{
	int a = 1, b = 1, c = 1;
	for (int i = 2; i < n; i++)
	{
		c = a + b;
		b = a;
		a = c;
	}
	return c;
}

int main()
{
	int i;
	printf("\n***斐波那契数列计算器***\n\n");
	printf("请输入一个数:>");
	scanf("%d", &i);
	printf("第%d个斐波那契数列数值为%d", i, Fibon_2(i));
}
