#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main()
{
	int i = 1;
	double sum = 0;
	while (i < 101)
	{
		sum += 1.0 / i;
		if (i>0)
			i++;
		else
		{
			i--;
		}
		i *= (-1);
	}
	printf("sum=%f\n", sum);
	return 0;
}*/
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 101; i++)
	{
		if (i / 10 == 9 )
			j++;
		if (i % 10 == 9)
			j++;
	}
	printf("1到100的所有整数中出现9的次数为：%d\n",j);
	return 0;
}
//swap(int *x, int *y)
//{
//	int a = 0;
//	a = *x;
//	*x = *y;
//	*y = a;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int arr2[] = {11,12,13,14,15,16,17,18,19,20};
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int sz = (sizeof(arr1) / sizeof(arr1[0]));
//	for (k = 0; k < sz; k++)
//	{
	/*	i = arr1[k];
		arr1[k] = arr2[k];
		arr2[k] = i;
		printf("arr1[%d]=%d ",k, arr1[k]);
	}
	printf("\n");
	for (j = 0; j < sz; j++)
	{
		printf("arr2[%d]=%d ",j,arr2[j]);
	}
	return 0;
}*/
