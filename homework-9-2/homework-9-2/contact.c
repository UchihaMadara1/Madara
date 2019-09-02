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
		printf("ͨѶ¼����");
		return;
	}
	printf("����������:>");
	scanf("%s", pcon->data[pcon->sz].name); 
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("����������:>");
	scanf("%d", &pcon->data[pcon->sz].age);
	printf("�������ַ:>");
	scanf("%s", pcon->data[pcon->sz].addr);
	printf("������绰����:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	pcon->sz++;
	printf("��ӳɹ�\n");
}
void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5s\t%5s\t%12s\t%20s\t\n","����","�Ա�","����","��ַ","�绰����");
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
	return -1;//�Ҳ���
}
void DelContact(Contact* pcon)
{
	char name[20] = {0};
	int pos = 0;
	int i = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
		return;
	}
	//ɾ��
	printf("������Ҫɾ�����˵����֣�>\n");
	scanf("%s",name);
	//����
	pos = FindByName(pcon,name);
	if (pos == -1)
	{
		printf("ͨѶ¼�����ڸ��û���\n");
		return;
	}
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}