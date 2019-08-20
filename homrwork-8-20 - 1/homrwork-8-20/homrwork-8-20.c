#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
//						{
//							if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d && c != e && d != e)
//							{
//								printf("a第%d b第%d c第%d d第%d e第%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#define  px  20
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int arr[][px] = {0};
//	printf("请输入需要的杨辉三角最后一行序数：\n");
//	scanf("%d",&n);
//	n -= 1;
//	for (i = 0; i <= n; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (j = 0; j <= i; j++)
//		{
//			if (i >= 2 && j > 0 && j < i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//      return 0;
//}
//int main()
//{
//	char munder = '\0';
//	for (munder = 'A'; munder <= 'D'; munder++)
//	{
//		if ( (munder != 'A') + (munder == 'C') + (munder == 'D') + (munder != 'D') == 3)
//		{
//			printf("%c\n",munder);
//		}
//	}
//	return 0;
//}
