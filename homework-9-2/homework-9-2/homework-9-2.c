#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
//struct stu
//{
//	char name[20];
//	unsigned int age;
//};
//int cmp_by_name(const void *e1, const void *e2)
//{
//	return strcmp(((struct stu *)e1)->name,((struct stu*)e2)->name);
//}
//int cmp_by_age(const void *e1, const void *e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//void Swap(char *buf1, char *buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width - 1; i++)
//	{
//		char temp = *(buf1 + i);
//		*(buf1 + i) = *(buf2 + i);
//		*(buf2 + i) = temp;
//	}
//}
//void buble_sort(void *base, int sz, int width,
//	int (*cmp)(const void* e1, const void*e2))
//{
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char *)base + width * j, (char*)base + width * (j + 1)) > 0)
//			{
//				Swap((char *)base + width * j, (char*)base + width * (j + 1), width);
//				flag = 1;
//			}
//		}
//		if (flag = 0)
//			break;
//	}
//}
//TEXT()
//{
//	struct stu arr[] = {{ "yichidi", 20 }, { "yufan", 21 }, {"changruoyu",26}};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	buble_sort(arr,sz,sizeof(arr[0]),cmp_by_age);
//}
//int main()
//{
//	TEXT();
//	return 0;
//}
