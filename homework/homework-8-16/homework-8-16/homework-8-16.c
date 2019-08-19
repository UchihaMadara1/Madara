#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "liudao-Madara.h"
void game()
{
	char board[ROW][COL] = { 0 };
	char mid = 0;
	init(board, ROW, COL);
	display(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		display(board, ROW, COL);
		mid = iswin(board, ROW, COL);
		if (mid != 'q')
		{
			break;
		}
		computer_move(board, ROW, COL);
		display(board, ROW, COL);
		mid = iswin(board, ROW, COL);
		if (mid != 'q')
		{
			break;
		}
	}
		if (mid == '*')
		{
			printf("���Ӯ\n");
		}
		else if (mid == '#')
		{
			printf("����Ӯ");
		}
		else if (mid == 'p')
		{
			printf("ƽ��\n");
		}
}
void menu()
{
	printf("***************************\n");
	printf("*********1. play  *********\n");
	printf("*********0. exit  *********\n");
	printf("***************************\n");

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
	menu();
	scanf("%d",&input);
		switch (input)
		{
		case 0 :
			break;
		case 1 :
			game();
			break;
		default:
			printf("����������������룺\n");
		}
	} while (input);
	return 0;
}