#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef struct
{
	int a;
	char b;
	short c;
	short d;
}AA_t;
//int main()
//{
	//int a[2][2] = { {1},2,3 };
	//int a[2][] = { { 1, 2 }, {2,3} };
	//int sz = sizeof(AA_t);
	//const char *p = "Hello";
	//printf("%c\n",*p);
	//int a = 10;
	//a += a *= a -= a / 3;
	//int i = 0;
	//int flag = 0;
	//while (i < 10)
	//{
		//flag++;
		//if (i < 1)
			//continue;
		//if (5 == i)
			//break;
		//i++;
	//}

	//return 0;
//}
void Swap(char *dest, int sz)
{
	char *p = "%20";
	assert(dest);
	while (sz--)
	{
		char *cp = p;
		while (*dest == ' ')
		{
			*dest++ = *cp++;
			sz--;
		}
		dest++;
	}
}
int main()
{
	char arr[] = "abc   defgx   yz";
	int sz = strlen(arr);
	Swap(arr,sz);
	return 0;
}
