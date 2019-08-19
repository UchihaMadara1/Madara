#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 2; i < n; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	int mid = 0;
//	printf("请输入您要求的斐波那契数序数：\n");
//	scanf("%d",&n);
//	mid = fib(n);
//	printf("第%d个斐波那契数为:\n%d \n",n,mid);
//	return 0;
//}
//int Digit_sum(int n)
//{
//	if (n < 10)
//	{
//		return (n % 10);
//	}
//	else
//	{
//		return (n % 10) + Digit_sum(n / 10);
//	}
//}
//int main()
//{
//	int n = 0;
//	int mid = 0;
//	while (1)
//	{
//	printf("请输入一个正整数：\n");
//	scanf("%d", &n);
//		if (n >= 0)
//		{
//			break;
//		}
//	}
//	mid = Digit_sum(n);
//	printf("%d\n ",mid);
//	return 0;
//}
//int strlen(char *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	return 1 + strlen(p + 1);
//}
//int strlen(char *p)
//{
//	int ret = 0;
//	while (*p != '\0')
//	{
//		ret++;
//		*p++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "yihuayishijie";
//	int ret = strlen(arr1);
//	printf("数组arr1中元素个数为:\n%d\n",ret);
//	return 0;
//}
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	return n * fac(n - 1);
//}
//int fac(int n)
//{
//	int i = 1;
//	int mid = 1;
//	for (i = 1; i <= n; i++)
//	{
//		mid *= i;
//	}
//	return mid;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	while (1)
//	{
//		printf("请输入一个正整数：\n");
//		scanf("%d", &n);
//		if (n >= 0)
//		{
//			break;
//		}
//	}
//	ret = fac(n);
//	printf("%d的阶乘为:\n%d\n",n,ret);
//	return 0;
//}
//void  print(int n)
//{
//	if (n > 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：\n");
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}
//int pow(int n,int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else  
//	{
//		return  n * pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	printf("请输入一个数和它的幂\n");
//	scanf("%d %d",&n,&k);
//	ret = pow(n,k);
//	printf("%d \n",ret);
//	return 0;
//}
//char reverse_string(char *p)
//{
//	if (*p == '\0')
//	{
//		return NULL;
//	}
//	reverse_string(p + 1);
//	printf("%c ", *p );
//}
//int main()
//{
//	char arr1[] = "yiyeyiputi";
//	char b = '0';
//	reverse_string(arr1);
//	return 0;
//}