#define _CRT_SECURE_NO_WARNINGS 1
#include "contect.h"
void InitContact(Contact *pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->data,0,sizeof(pcon->data));
}
void AddContact(Contact *pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pcon->data[pcon->sz].name); 
	printf("请输入性别:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &pcon->data[pcon->sz].age);
	printf("请输入地址:>");
	scanf("%s", pcon->data[pcon->sz].addr);
	printf("请输入电话号码:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	pcon->sz++;
	printf("添加成功\n");
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\t\n","姓名","性别","年龄","地址","电话号码");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%15s\t%5s\t%5d\t%12s\t%20s\t\n", pcon->data[i].name,
			pcon->data[i].sex,
			pcon->data[i].age,
			pcon->data[i].addr,
			pcon->data[i].tele);
	}
}
static int FindByName(Contact* pcon, char name[20])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if (strcmp(name, pcon->data[i].name) == 0)
			return i;
	}
	return -1;//找不到
}
void DelContact(Contact* pcon)
{
	char name[20] = {0};
	int pos = 0;
	int i = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录为空！\n");
		return;
	}
	//删除
	printf("请输入要删除的人的名字：>\n");
	scanf("%s",name);
	//查找
	pos = FindByName(pcon,name);
	if (pos == -1)
	{
		printf("通讯录不存在该用户！\n");
		return;
	}
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("删除成功\n");
}