#define _CRT_SECURE_NO_WARNINGS 1
#include "contect.h"
void menu()
{
	printf("**************************************\n");
	printf("****** 1.add     2. del         ******\n");
	printf("****** 3.search  4. modify      ******\n");
	printf("****** 5.show    6.sort         ******\n");
	printf("****** 0.exit                   ******\n");
	printf("**************************************\n");
}
int main()
{
	int input = 0;
	Contact con;//创建通讯录
	InitContact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入：>\n");
			break;
		}
	} while (input);
	return 0;
}