#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;//开辟一片空间
//	int *p = &a;//对变量a用&操作符取地址；
//	            //将a的地址存储在指针变量p中
//	printf("%d\n ",*p);//通过解引用操作符*访问p所指向的存储空间的内容，并打印
//	return 0;
//}
//int main()
//{
//	int ret = sizeof(char *);
//	int mid = sizeof(int *);
//	int dou = sizeof(double *);
//	printf("%d %d %d\n",ret,mid,dou);
//	return 0;
//}
//int my_strlen(char * s)//s为字符串首元素地址
//{
//	char * p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;//返回数组元素个数
//}
//int main()
//{
//	//char *s = "abcdef";
//	//int ret = my_strlen(s);
//	//printf("%d %c %c",ret,*s,*(s + 2));
//	int a = 10;
//	int *pa = &a;//一级指针
//	int *ppa = &pa;//二级指针
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6};
//	char *p = "abcdef";
//	printf(" %d\n ",arr[3]);
//	printf("%d\n ",arr[3]);
//	printf("%c\n ",p[2]);
//	printf("%c\n ",*(p+2));
//	return 0;
//}
//int main()
//{
//	char *p = "hello bit";//这是把字符串的首字母h的地址存在指针p中了
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello bit ";
//	char arr2[] = "hello bit ";
//	char *p1 = "hello bit ";
//	char *p2 = "hello bit ";
//	if (arr1 == arr2)//arr1和arr2分别是两个数组首元素的地址
//		printf("相同\n");
//	else
//		printf("不同\n");
//	if (*p1 == *p2)//而*p1和*p2是两个指针，当它们指向同一个字符串的时候，实际上
//		//指向同一片区域。
//		printf("相同\n");
//	else
//		printf("不同\n");
//	return 0;
//}
int * arr1[10];//整形指针数组
char * arr2[10];//一级字符指针数组
char ** arr3[10];//二级字符指针数组
int * p1[5];//指针数组
int(*p2)[5];//数组指针