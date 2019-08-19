#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n & 1) == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0; 
//	int ret = 0;
//	printf("请输入入一个正整数：\n");
//	scanf("%d",&n);
//	ret = count_one_bit(n);
//	printf("n的二进制位中1的个数为:\n%d\n",ret);
//	return 0;
//}
//int bit(int m,int n)
//{
//	int ret = 0;
//	while (m !=0 || n !=0)
//	{
//		if (((m & 1) == 1 && (n & 1) == 0) || ((m & 1) == 0 && (n & 1) == 1))
//		{
//			ret++;
//		}
//		m = m >> 1;
//		n = n >> 1;
//	}
//	return ret;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d %d",&m,&n);
//	ret = bit(m,n);
//	printf("它们有%d个二进制位不同\n:",ret);
//	return 0;
//}
//void jishuwei(int n)
//{
//	printf("这个数的奇数位位：\n");
//	while (n != 0)
//	{
//		int a = n & 1;
//		printf("%d ",a);
//		n = n >> 2;
//	}
//	printf("0");
//	printf("\n");
//}
//void oushuwei(int n)
//{
//	n = n >> 1;
//	printf("这个数的偶数位为：\n");
//	while (n != 0)
//	{
//		int a = n & 1;
//		printf("%d ",a);
//		n = n >> 2;
//	}
//	printf("0");
//	printf("\n");
//}
//int main()
//{
//	int n = 0;
//	int mid = 0;
//	int ret = 0;
//	printf("请输入一个数：\n");
//	scanf("%d",&n);
//	jishuwei(n);
//	oushuwei(n);
//  return 0;
//}
//void print(int n)//正序
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//void  print(int n)//逆序
//{
//	while (n)
//	{
//		printf("%d ",n % 10);
//		n /= 10;
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：\n");
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}
