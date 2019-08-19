#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
//找数字
//int find(int arr1[],int k,int sz)
//{
//	int left = 0;
//	int right = sz;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr1[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	int i = 0;
//	int ret = 0;
//	again:
//	scanf("%d",&i);
//	ret = find(arr1,i,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//		goto again;
//	}
//	else
//		printf("找到了，下标为%d\n ",ret);
//	return 0;
//}
// 大写转小写，小写转大写。
//int main()
//{
//	char a = '\0';
//	char b = 'a' - 'A';
//  again:
//	scanf("%c",&a);
//	if (a - 'Z' <= 0 &&a - 'Z' >=-25)
//	{
//		a += b;
//		printf("%c\n ",a);
//      goto again;
//	}
//	else if (a - 'Z' >= 7 && a - 'Z' <= 42)
//	{
//		a -= b;
//		printf("%c\n", a);
//      goto again;
//	}
//	else
//		printf("请输入一个字母\n");
//	return 0;
//}
//输入密码三次，三次都不成功退出登录。
//int main()
//{
//	char arr1[20] = "";
//	int i = 0;
//	for (i = 1; i < 4; i ++)
//	{
//		printf("请输入密码:\n");
//		scanf("%s",arr1);
//		if (0 == strcmp(arr1, "woaini"))
//			break;
//	}
//	if (i <= 3)
//	{
//		printf("登陆成功");
//	}
//	else
//	{
//		printf("登录失败，即将退出！");
//	}
//	return 0;
//}
//猜数字游戏
//void menu()
//{
//	printf("************************\n");
//	printf("**********1.play********\n");
//	printf("**********0.exit********\n");
//	printf("************************\n");
//}
//void game()
//{
//	int mid = rand() % 100 + 1;
//	int a = 0;
//	printf("温馨提示：该数在1到100百之间\n");
//		while (1)
//		{
//			printf("请输入你的数字：\n");
//			scanf("%d", &a);
//			if (a > mid)
//			{
//				printf("猜大了");
//			}
//			else if (a < mid)
//			{
//				printf("猜小了");
//			}
//			else
//			{
//				printf("VICTORY\n");
//				break;
//			}
//		}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do
//	{
//		printf("请输入1开始游戏，或输入0结束游戏：\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 0:
//			break;
//		case 1:
//			game();
//			break;
//		default :
//			printf("选择错误，请重新输入：\n");
//		}
//	} while (input);
//	return 0;
//}