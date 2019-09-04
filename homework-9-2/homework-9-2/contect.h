#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#define MAX 1000
#define DEFALT_SZ 3
typedef struct PeoInfo
{
	char name[20];
	char sex[5];
	int  age;
	char addr[30];
	char  tele[20];
}PeoInfo;
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};
enum TEXT
{
	EEXIT,
	NAME,
	SEX,
	AGE,
	ADDR,
	TELE,
};
//typedef struct Contact
//{
//	PeoInfo data[MAX];
//	int sz;//有效元素个数
//}Contact;
typedef struct Contact
{
	PeoInfo *data;//存放有效元素的空间
	int sz;//有效元素个数
	int capacity;//容量
}Contact;
void InitContact(Contact* pcon);
void AddContact(Contact *pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
int Sort_By_Name(const void *e1, const void *e2);
void SortContact(Contact *pcon);
void SearchContact(Contact *pcon);
void ModifyContact(Contact *pcon);
void DestoryContact(Contact *pcon);








