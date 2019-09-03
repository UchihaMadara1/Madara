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
	printf("%20s\t%5s\t%5s\t%12s\t%20s\t\n","����","�Ա�","����","��ַ","�绰����");
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
				Swap((char*)base + width *j, (char*)base + width * (j + 1),width);//����
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
		printf("ͨѶ¼Ϊ�գ������Ƿ���\n");
		return;
	}
	Use_Sort_Contact(pcon->data, pcon->sz, sizeof(pcon->data[0]), Sort_By_Name);
	printf("�������\n");
}
void SearchContact(Contact *pcon)
{
	char name[20] = { 0 };
	int pos = 0;
	int input = 0;
	assert(pcon);
	do
	{
		printf("������Ҫ���ҵ���ϵ�˵�����;>");
		scanf("%s", name);
		pos = FindByName(pcon, name);
		if (pos == -1)
		{
			printf("���û�������!\n");
			printf("��ѡ��1���������ѡ��0�˳�:>\n");
			scanf("%d", &input);
		}
		else
		{
			printf("%20s\t%5s\t%5s\t%12s\t%20s\t\n", "����", "�Ա�", "����", "��ַ", "�绰����");
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
	printf("������Ҫ�޸ĵ���ϵ������:>");
	scanf("%s",name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("���û�������!\n");
		return;
	}
	do
	{
		printf("�밴ѡ��ѡ��Ҫ�޸ĵ����ݻ�ѡ��0�˳�:>\n");
		TEXT();
		scanf("%d",&input);
		switch (input)
		{
		case NAME:
		{
					 printf("������Ҫ�޸ĺ������:>\n");
					 scanf("%s",name);
					 memcpy(pcon->data[pos].name,name,sizeof(pcon->data[pos].name));
					 printf("�޸ĳɹ�\n");
					 break;
		}
		case SEX:
		{
					printf("�������޸ĺ���Ա�:>\n");
					scanf("%s",sex);
					memcpy(pcon->data[pos].sex, sex, sizeof(pcon->data[pos].sex));
					printf("�޸ĳɹ�\n");
					break;
		}
		case AGE:
		{
					printf("�������޸ĺ������:>\n");
					scanf("%d",&age);
					memcpy(pcon->data[pos].age, age, sizeof(pcon->data[pos].age));
					printf("�޸ĳɹ�\n");
					break;
		}
		case ADDR:
		{
					 printf("�������޸ĺ�ĵ�ַ:>\n");
					 scanf("%s",addr);
					 memcpy(pcon->data[pos].addr, addr, sizeof(pcon->data[pos].addr));
					 printf("�޸ĳɹ�\n");
					 break;
		}
		case TELE:
		{
					 printf("�������޸ĺ�ĵ绰����:>\n");
					 scanf("%s",tele);
					 memcpy(pcon->data[pos].tele, tele, sizeof(pcon->data[pos].tele));
					 printf("�޸ĳɹ�\n");
					 break;
		}
		case EEXIT:
		{
					 printf("�˳�����:>\n");
					 break;
		}
		default:
		{
				   printf("ѡ�����������ѡ��:>\n");
				   break;
		}
	  }
	} while (input);
}