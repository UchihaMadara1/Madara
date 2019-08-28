#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include <stdio.h>
#include <string.h>
//char *my_strncpy(char *dest, const char *sor, size_t num)
//{
//	char *start = dest;
//	assert(dest && sor);
//	while (num--)
//	{
//		while (*dest++ = *sor++)
//		{
//			;
//		}
//			*dest = '\0';
//			dest++;
//	}
//	return start;
//}
//int main()
//{
//	const char *p = "abcdef";
//	int i = 0;
//	char arr[20] = {0};
//	unsigned int  num = 0;
//	char * ret = NULL;
//	scanf("%d",&num);
//	ret = my_strncpy(arr,p,num);
//	return 0;
//}
//char * my_strncat(char *dest, char *sor, size_t num)
//{
//	char * ret = dest;
//	assert(dest && sor);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (num--)
//	{
//		if (sor != '\0')
//		{
//			*dest++ = *sor++;
//		}
//		else
//		{
//			*dest = '\0';
//			dest++;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	char * ret = NULL;
//	ret = my_strncat(arr,"world",3);
//	return 0;
//}
//int my_strncmp(const char *dest, const char *sro, size_t num)
//{
//	assert(dest && sro);
//	while (num--)
//	{
//		if (*dest != *sro)
//		{
//			return *dest - *sro;
//		}
//		dest++;
//		sro++;
//	}
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	int *p = "abcdef";
//	ret = my_strncmp(p,"abcfg",4);
//	return 0;
//}
