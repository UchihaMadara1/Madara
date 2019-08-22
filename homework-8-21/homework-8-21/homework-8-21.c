#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 25;
//	int i = 0;
//	for (i = 31; i <= 1; i--)
//	{
//		a = a >> i;
//		printf("%u \n", a);
//	}
//	return 0;
//}
//#include <math.h>
//unsigned int reverse_bit(unsigned int n)
//{
//	int i = 0;
//	int ret = 0;
//	for (i = 32; i > 0; i--)
//	{
//		if ((n & 1) == 1)
//		{
//			ret += pow(2, i - 1);
//		}
//		n = n >> 1;
//	}
//	return ret;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = reverse_bit(n);
//	printf("%u \n",ret);
//	return 0;
//}
//double average(const int a,const  int b)
//{
//	return a + (b - a) / 2.0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	double aver = 0;
//	printf("请输入一个数：\n");
//	scanf("%d %d",&a,&b);
//	aver = average(a,b);
//	printf("a和b的平均数为：%lf\n",aver);
//	return 0;
//}
int main()
{
	int i = 0;
	int j = 0;
	int mid = 0;
	int arr[] = { 2,4,3,3,5,1,1,2,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	for (i = 0; i <= sz; i++)
	{
		int flag = 0;
		for (j = 0; j <= sz; j++)
		{
			if (i != j &&(arr[i] ^ arr[j]) == 0)
			{
				flag = 1;
				break;
			}
		}
		if (0 == flag)
		{
			printf("这个数为:\n %d\n",arr[i]);
			break;
		}
	}
	for (i = 0; i <= sz; i++)
	{
		mid = mid ^ arr[i];
	}
	printf("这个数为：\n %d",mid);
	return 0;
}
//int my_strlen(char *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(p+1);
//	}
//}
//char reversing_arr(char arr[],int mid)
//{
//	int left = 0;
//	int right = mid - 1;
//	for (left = 0, right = mid - 1; left < right; left++, right--)
//	{
//		char temp = 0;
//		n = arr[left];
//		arr[left] = arr[right];
//		arr[right] = num;
//	}
//	printf("%s \n",arr);
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int mid = 0;
//	char ret = '\0';
//	mid = my_strlen(arr);
//	printf("%d\n ",mid);
//	printf("%s \n",arr);
//	ret = reversing_arr(arr,mid);
//	return 0;
//}