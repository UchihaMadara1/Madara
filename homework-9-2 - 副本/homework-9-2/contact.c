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
	printf("%20s\t%5s\t%5s\t%12s\t%20s\t\n","姓名","性别","年龄","地址","电话号码");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%20s\t%5s\t%5d\t%12s\t%20s\t\n", pcon->data[i].name,
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
int Sort_By_Name(const void *e1, const void *e2)
{
	assert(e1 && e2);
	return strcmp(((PeoInfo*)e1)->name,((PeoInfo*)e2)->name);
}
static void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = temp;
	}
}
static void Use_Sort_Contact(void *base,int sz,int width,
	int (*cmp)(const char *e1,const char *e2))
{
	int i = 0;
	assert(base);
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)base + width *j,(char*)base + width * (j + 1)) > 0)
			{
				Swap((char*)base + width *j, (char*)base + width * (j + 1),width);//出错
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
void SortContact(Contact *pcon)
{
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录为空，操作非法！\n");
		return;
	}
	Use_Sort_Contact(pcon->data, pcon->sz, sizeof(pcon->data[0]), Sort_By_Name);
	printf("排序完成\n");
}
void SearchContact(Contact *pcon)
{
	char name[20] = { 0 };
	int pos = 0;
	int input = 0;
	assert(pcon);
	do
	{
		printf("请输入要查找的联系人的姓名;>");
		scanf("%s", name);
		pos = FindByName(pcon, name);
		if (pos == -1)
		{
			printf("该用户不存在!\n");
			printf("请选择1重新输入或选择0退出:>\n");
			scanf("%d", &input);
		}
		else
		{
			printf("%20s\t%5s\t%5s\t%12s\t%20s\t\n", "姓名", "性别", "年龄", "地址", "电话号码");
			printf("%20s\t%5s\t%5d\t%12s\t%20s\t\n", pcon->data[pos].name,
				pcon->data[pos].sex,
				pcon->data[pos].age,
				pcon->data[pos].addr,
				pcon->data[pos].tele);
		}
	} while (input);
}
static void TEXT()
{
	printf("*******************************\n");
	printf("***** 1.NAME        2.SEX *****\n");
	printf("***** 3.AGE        4.ADDR *****\n");
	printf("***** 5.TELE       0.EEXIT *****\n");
	printf("*******************************\n");
}
void ModifyContact(Contact *pcon)
{
	char name[20] = {0};
	char sex[5] = {0};
	char addr[30] = {0};
	char  tele[20] = {0};
	int  age = 0;
	int pos = 0;
	int input = 0;
	printf("请输入要修改的联系人姓名:>");
	scanf("%s",name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("该用户不存在!\n");
		return;
	}
	do
	{
		printf("请按选项选择要修改的内容或选择0退出:>\n");
		TEXT();
		scanf("%d",&input);
		switch (input)
		{
		case NAME:
		{
					 printf("请输入要修改后的名字:>\n");
					 scanf("%s",name);
					 memcpy(pcon->data[pos].name,name,sizeof(pcon->data[pos].name));
					 printf("修改成功\n");
					 break;
		}
		case SEX:
		{
					printf("请输入修改后的性别:>\n");
					scanf("%s",sex);
					memcpy(pcon->data[pos].sex, sex, sizeof(pcon->data[pos].sex));
					printf("修改成功\n");
					break;
		}
		case AGE:
		{
					printf("请输入修改后的年龄:>\n");
					scanf("%d",&age);
					memcpy(pcon->data[pos].age, age, sizeof(pcon->data[pos].age));
					printf("修改成功\n");
					break;
		}
		case ADDR:
		{
					 printf("请输入修改后的地址:>\n");
					 scanf("%s",addr);
					 memcpy(pcon->data[pos].addr, addr, sizeof(pcon->data[pos].addr));
					 printf("修改成功\n");
					 break;
		}
		case TELE:
		{
					 printf("请输入修改后的电话号码:>\n");
					 scanf("%s",tele);
					 memcpy(pcon->data[pos].tele, tele, sizeof(pcon->data[pos].tele));
					 printf("修改成功\n");
					 break;
		}
		case EEXIT:
		{
					 printf("退出程序:>\n");
					 break;
		}
		default:
		{
				   printf("选择错误，请重新选择:>\n");
				   break;
		}
	  }
	} while (input);
}