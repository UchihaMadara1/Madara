#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>
//void cheng(int i)
//{
//	int j = 0;
//	int k = 0;
//	int mid = 0;
//	for (j = 1; j <= i; j++)
//	{
//		for (k = 1; k <= j; k++)
//	 {
//			mid = j * k;
//			printf("%d * %d  = %d\t",j,k,mid);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	cheng (i);
//	return 0;
//}
//void swap(int *p1, int *p2)
//{
//	int x = 0;
//	x = *p1;
//	*p1 = *p2;
//	*p2 = x;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	swap(&a, &b);
//	printf("%d %d\n ",a,b);
//	return 0;
//}
//int pax(int year)
//{
//	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//	int mid = 0;
//	scanf("%d",&year);
//	mid = pax(year);
//	if (mid == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}
//int pdd(int a)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(a); i++)
//	{
//		if (0 == a % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	int mid = 0;
//	scanf("%d", &a);
//	mid = pdd(a);
//	if (1 == mid)
//	{
//		printf("是素数\n");
//	}
//	else if (0 == mid)
//	{
//		printf("不是素数");
//	}
//	return 0;
//}
void reverse(int arr1[], int sz)
{
	int i = 0;
	int j = 0;
	int mid = 0;
	for (i = 0; i < (sz + 1) / 2; i++)
	{
		mid = arr1[i];
		arr1[i] = arr1[sz - i];
		arr1[sz - i] = mid;
	}

	for (j = 0; j < sz + 1; j++)
	{
		printf("%d ", arr1[j]);
	}
	printf("\n");
}
void init(int arr1[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz + 1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (j = 0; j < sz + 1; j++)
	{
		printf("%d ",arr1[j]);
	}
	printf("\n");
}
void empty(int arr1[], int sz)
{
	int i = 0;
	/*int j = 0;
	for (i = 0; i < sz + 1; i++)
	{
		arr1[i] = 0;
	}
	for (j = 0; j < sz + 1; j++)
	{
		printf("%d ",arr1[j]);
	}
	printf("\n");*/
	memset(arr1,0,(sz+1) * sizeof(int));
	for (i = 0; i < sz + 1; i++)
	{
		printf("%d ",arr1[i]);
	}
}
int main()
{
	int i = 0;
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;
	for (i = 0; i < sz + 1; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	init(arr1,sz);//初始化数组
	reverse(arr1,sz);//完成数组元素逆置
	empty(arr1, sz);//完成数组清零
	return 0;
}