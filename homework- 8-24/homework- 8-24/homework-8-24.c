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
//}
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
//void * my_memcpy(void *dest,void *src, size_t count)
//{
//	assert(dest && src);
//    void *ret = src;
//	while (count--)
//	{
//		*(char *)dest = *(char *)src;
//		dest = (char *)dest + 1;
//		src = (char *)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,6,7};
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 28);
//	return 0;
//}
//void * my_memmove(void *left, void * right, size_t count)
//{
//	assert(left && right);
//	void * ret = left;
//		if (left > right)
//		{
//			while (count--)
//			{
//				*((char *)left + count) = *((char *)right + count);
//			}
//		}
//		else
//		{
//			while (count--)
//			{
//				*(char *)left = *(char *)right;
//				left = (char *)left + 1;
//				right = (char *)right + 1;
//			}
//		}
//		return ret;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	my_memmove(arr +2,arr, 16);
//	return 0;
//}