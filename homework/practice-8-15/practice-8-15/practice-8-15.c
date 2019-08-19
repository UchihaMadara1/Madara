#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(int mid)
//{
//	if (mid > 9)
//	{
//		print(mid / 10);
//	}
//		printf("%d ",mid % 10);
//}
//int main()
//{
//	int mid = 0;
//	scanf("%d",&mid);
//	print(mid);
//	return 0;
//}
//int strlen (char *p)
//{
//	if ('\0' == *p)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlen (p + 1);
//	}
//}
//int main()
//{
//	char arr1[] = "niumouren";
//	int i = 0;
//	int ret = 0;
//	ret = strlen(arr1);
//	printf("%d ",ret);
//	return 0;
//}
//int fac(int mid)
//{
//	if (mid <= 1 && mid > 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return mid * fac(mid - 1);
//	}
//}
//int main()
//{
//	int mid = 0;
//	int ret = 0;
//	scanf("%d",&mid);
//	ret = fac(mid);
//	printf("%d ",ret);
//	return 0;
//}
//int fib(int mid)
//{
//	if (mid <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(mid - 1) + fib(mid - 2);
//	}
//}
//int main()
//{
//	int mid = 0;
//	int ret = 0;
//	scanf("%d",&mid);
//	ret = fib(mid);
//	printf("第%d个数为：%d\n",mid,ret);
//	return 0;
//}