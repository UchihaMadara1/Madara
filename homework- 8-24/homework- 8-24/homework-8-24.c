#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void my_find(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		int flag = 0;
//		for (j = 0; j <= sz; j++)
//		{
//			if (i != j && arr[i] == arr[j])
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (0 == flag)
//			printf("%d\n",arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	my_find(arr, sz);
//	return 0;
//}
//int main()
//{
//	int pop = 20;
//	int i = 0;
//	int sum = pop;
//	while (pop > 1)
//	{
//		int odd = pop % 2;
//		pop /= 2;
//		sum += pop;
//		pop += odd;
//	}
//	printf("可以喝的水为%d瓶\n",sum);
//	return 0;
//}
#include <string.h>
#include <assert.h>
//char * my_strcpy(char *dest, const char *src)
//{
//	assert(dest && src);
//	char *ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	const char *p = "yihuayishijie";
//	char arr[30] = {0};
//	my_strcpy (arr, p);
//	printf("%s\n",arr);
//	return 0;
}
//char * my_strcat(char *dest, const char *src)
//{
//	assert(dest && src);
//	char *ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char *p = "world";
//	my_strcat(arr,p);
//	printf("%s\n",arr);
//	return 0;
//}