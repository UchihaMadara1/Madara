#define _CRT_SECURE_NO_WARNINGS 1
#include "liudao-Madara.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void init (char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void display(char board[ROW][COL], int row, int col)
{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf("%c %c %c",' ',board[i][j],' ');
				if (j < row - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			if (i < row - 1)
			{
				for (j = 0; j < row; j++)
				{
					printf("%c %c %c",'_','_','_');
					if (j < row-1)
					{
						printf("|");
					}
				}
			}
			printf("\n");
		}
		
}
void player_move(char board[ROW][COL], int row, int col)
{
	printf("玩家走\n");
	printf("请输入要落子的坐标：\n");
	int i = 0;
	int j = 0;
	do
	{
		scanf("%d %d",&i, &j);
		if (board[i - 1][j - 1] == '*' || board[i - 1][j - 1] == '#')
		{
			printf("该处已有棋子，请重新输入：");
		}
		else if ((i > row || j > col) || (i < 0 || j < 0))
		{
			printf("请输入正确的坐标：\n");
		}
		else 
			{
				board[i - 1][j - 1] = '*';
				break;
			}
	} while (1);
}
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑走：\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if ( '*'!= board[i][j]&&board[i][j] != '#')
		{
			board[i][j] = '#';
			break;
		}
	}
}
char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board != ' ')
		{
			return board[1][i];
		}

	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (isfull(board,row,col) == 1)
	{
		return 'p';
	}
	return 'q';
}
static int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}