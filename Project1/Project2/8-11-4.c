#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	scanf("%d %d", a, b);
	if (a < b)
	{
		a = i;
		a = b;
		b = i;
	}
	for (j = b; j >= 1; j--)
	{
		if (a%j == 0)
			break;
	}
	printf("a和b的最大公约数为%d", j);
	return 0;
}