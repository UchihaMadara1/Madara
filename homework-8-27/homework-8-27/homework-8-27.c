#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;//����һƬ�ռ�
//	int *p = &a;//�Ա���a��&������ȡ��ַ��
//	            //��a�ĵ�ַ�洢��ָ�����p��
//	printf("%d\n ",*p);//ͨ�������ò�����*����p��ָ��Ĵ洢�ռ�����ݣ�����ӡ
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
//int my_strlen(char * s)//sΪ�ַ�����Ԫ�ص�ַ
//{
//	char * p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;//��������Ԫ�ظ���
//}
//int main()
//{
//	//char *s = "abcdef";
//	//int ret = my_strlen(s);
//	//printf("%d %c %c",ret,*s,*(s + 2));
//	int a = 10;
//	int *pa = &a;//һ��ָ��
//	int *ppa = &pa;//����ָ��
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
//	char *p = "hello bit";//���ǰ��ַ���������ĸh�ĵ�ַ����ָ��p����
//	return 0;
//}
//int main()
//{
//	char arr1[] = "hello bit ";
//	char arr2[] = "hello bit ";
//	char *p1 = "hello bit ";
//	char *p2 = "hello bit ";
//	if (arr1 == arr2)//arr1��arr2�ֱ�������������Ԫ�صĵ�ַ
//		printf("��ͬ\n");
//	else
//		printf("��ͬ\n");
//	if (*p1 == *p2)//��*p1��*p2������ָ�룬������ָ��ͬһ���ַ�����ʱ��ʵ����
//		//ָ��ͬһƬ����
//		printf("��ͬ\n");
//	else
//		printf("��ͬ\n");
//	return 0;
//}
int * arr1[10];//����ָ������
char * arr2[10];//һ���ַ�ָ������
char ** arr3[10];//�����ַ�ָ������
int * p1[5];//ָ������
int(*p2)[5];//����ָ��