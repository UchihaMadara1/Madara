#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[] = {21,3,41,51,36,14,31,72,21,4};
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			int temp = 0;
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//			j++;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	int arr[3][3] = {2,3,5,3,4,6,4,5,7};
//	scanf("%d",&n);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] == n)
//			{
//				flag = 1;
//				printf("这个数在第%d行第%d列\n",i,j);
//			}
//		}
//	}
//	if (0 == flag)
//	{
//		printf("数组中没有这个数\n");
//	}
//	return 0;
//}
//#define P 3
//int My_find(int arr[P][P], int n)
//{
//	int right = P - 1;
//	int up = 0;
//	while (1)
//	{	
//		if (n == arr[up][right])
//		{
//			return 1;
//			break;
//		}
//		else if (n > arr[up][right] && up < 3)
//		{
//			up++;
//		}
//		else if (n < arr[up][right] && right > 0)
//		{
//			right--;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//}
//int main()
//{
//	int arr[P][P] = { 2, 3, 4, 3, 4, 5, 5, 6, 7 };
//	int n = 0;
//	int ret = 0;
//	printf("请输入一个数：\n");
//	scanf("%d",&n);
//	ret = My_find(arr, n);
//	if (ret == 1)
//	{
//		printf("数组中存在这个数\n");
//	}
//	else
//	{
//		printf("数组中不存在这个数\n");
//	}
//	return 0;
//}