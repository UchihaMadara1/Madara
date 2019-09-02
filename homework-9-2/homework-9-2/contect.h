#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#define MAX 1000
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
typedef struct Contact
{
	PeoInfo data[MAX];
	int sz;
}Contact;
void InitContact(Contact* pcon);
void AddContact(Contact *pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);


