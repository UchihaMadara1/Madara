#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
//������
//int find(int arr1[],int k,int sz)
//{
//	int left = 0;
//	int right = sz;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr1[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]) - 1;
//	int i = 0;
//	int ret = 0;
//	again:
//	scanf("%d",&i);
//	ret = find(arr1,i,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//		goto again;
//	}
//	else
//		printf("�ҵ��ˣ��±�Ϊ%d\n ",ret);
//	return 0;
//}
// ��дתСд��Сдת��д��
//int main()
//{
//	char a = '\0';
//	char b = 'a' - 'A';
//  again:
//	scanf("%c",&a);
//	if (a - 'Z' <= 0 &&a - 'Z' >=-25)
//	{
//		a += b;
//		printf("%c\n ",a);
//      goto again;
//	}
//	else if (a - 'Z' >= 7 && a - 'Z' <= 42)
//	{
//		a -= b;
//		printf("%c\n", a);
//      goto again;
//	}
//	else
//		printf("������һ����ĸ\n");
//	return 0;
//}
//�����������Σ����ζ����ɹ��˳���¼��
//int main()
//{
//	char arr1[20] = "";
//	int i = 0;
//	for (i = 1; i < 4; i ++)
//	{
//		printf("����������:\n");
//		scanf("%s",arr1);
//		if (0 == strcmp(arr1, "woaini"))
//			break;
//	}
//	if (i <= 3)
//	{
//		printf("��½�ɹ�");
//	}
//	else
//	{
//		printf("��¼ʧ�ܣ������˳���");
//	}
//	return 0;
//}
//��������Ϸ
//void menu()
//{
//	printf("************************\n");
//	printf("**********1.play********\n");
//	printf("**********0.exit********\n");
//	printf("************************\n");
//}
//void game()
//{
//	int mid = rand() % 100 + 1;
//	int a = 0;
//	printf("��ܰ��ʾ��������1��100��֮��\n");
//		while (1)
//		{
//			printf("������������֣�\n");
//			scanf("%d", &a);
//			if (a > mid)
//			{
//				printf("�´���");
//			}
//			else if (a < mid)
//			{
//				printf("��С��");
//			}
//			else
//			{
//				printf("VICTORY\n");
//				break;
//			}
//		}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	menu();
//	do
//	{
//		printf("������1��ʼ��Ϸ��������0������Ϸ��\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 0:
//			break;
//		case 1:
//			game();
//			break;
//		default :
//			printf("ѡ��������������룺\n");
//		}
//	} while (input);
//	return 0;
//}