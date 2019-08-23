//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//void rotate(char arr[], int sz,int k)
//{
//	assert(arr != NULL);
//	while (k--)
//	{
//		int i = 0;
//		char temp = arr[0];
//		for (i = 0; i < sz; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[sz] = temp;
//	}
//	printf("%s\n",arr);
//}
//int main()
//{
//	int k = 0;
//	char arr[] = "ABCD";
//	int sz = strlen(arr) - 1;
//	printf("请输入要字符左旋几次\n");
//	scanf("%d",&k);
//	rotate(arr,sz,k);
//	return 0;
//}
//#include <string.h>
//int my_decide(char arr1[], const char arr2[], int sz)
//{
//	assert(arr1 != NULL && arr2 != NULL);
//	int i = 0;
//	int flag = 0;
//	while (sz)
//	{
//		char temp = arr1[0];
//		for (i = 0; i < sz - 1; i++)
//		{
//			arr1[i] = arr1[i + 1];
//		}
//		arr1[sz - 1] = temp;
//		if (strcmp(arr1, arr2) == 0)
//		{
//			flag = 1;
//			break;
//		}
//		sz--;
//	}
//	return flag;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "ABCDA";
//	int sz = strlen(arr1);
//	int flag = my_decide(arr1, arr2, sz);
//	if (flag == 1)
//	{
//		printf("arr2[]是由arr1[]旋转得到的\n");
//	}
//	else
//	{
//		printf("arr2不是由arr1旋转得到的\n");
//	}
//	return 0;
//}
//	