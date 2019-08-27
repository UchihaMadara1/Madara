#define _CRT_SECURE_NO_WARNINGS 1
#include  <string.h>
#include <stdio.h>
#include <assert.h>
//char * my_strstr(const char *dest, const char *src)
//{
//	assert(dest && src);
//	const char *p1 = dest;
//	const char *p2 = src;
//	const char *start = p1;
//	while(*start)
//	{
//		p2 = src;
//		p1 = start;
//		while (*p1 && *p2 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return (char*) start;
//		}
//		start++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[20] = "yihuayishijie";
//	char *p2 = "yishijie";
//	char *ret = my_strstr(arr,p2);
//	if (NULL != ret)
//		printf("%s\n", ret);
//	else
//		printf("ÕÒ²»µ½\n");
//	return 0;
//}
//char * my_strchr(const char *p1, const char ch)
//{
//	assert(p1 != NULL);
//	while (*p1 != ch)
//	{
//		p1++;
//	}
//	if (*p1 == ch)
//	{
//		return (char *)p1;
//	}
//	return NULL;
//}
//int main()
//{
//	const char *p = "yihuayishijie";
//	const char ch = 'i';
//	const char *ret = my_strchr(p, ch);
//	if (ret != NULL)
//	{
//	printf("%s\n", ret);
//	}
//	return 0;
//}
//int my_strcmp(const char *p1, const char *p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	if (*p1 - *p2 > 0)
//	{
//		return 1;
//	}
//	else if (*p1 - *p2 < 0)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	const char * p1 = "yihuayishijie";
//	const char * p2 = "yiyeyiputi";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n",ret);
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