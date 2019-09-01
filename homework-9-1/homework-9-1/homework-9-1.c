#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
struct stu
{
	char name[20];
	int age;
};
int com_stu_by_name(const void *e1, const void *e2)
{
	return strcmp(((struct stu *)e1)->name, ((struct stu*)e2)->name);
}
void Swap(char * buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = temp;
	}
}
void *buble_sort(void *base, int sz, int width,
	int(*cmp)(const void *e1, const void *e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + width * j, (char *)base + width * (j + 1)) > 0)
			{
				Swap((char*)base + width * j, (char*)base + width * (j + 1), width);
			}
		}
	}
}
void TEXT()
{
	struct stu arr[] = { { "zhangsan", 15 }, { "lisi", 50 }, { "wangwu", 20 } };
	int sz = sizeof(arr) / sizeof (arr[0]);
	//qsort(arr, sz, sizeof(arr[0]), com_stu_by_name);
	buble_sort(arr, sz, sizeof(arr[0]), com_stu_by_name);
}
int main()
{
	TEXT();
	return 0;
}
