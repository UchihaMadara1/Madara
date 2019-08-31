#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*{
printf("shabi\n");
system("pause");
return 0;
}*/
swap(int *x, int *y)
{
	int a = 0;
	a = *x;
	*x = *y;
	*y = a;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	swap(&m, &n);
	printf("%d %d\n", m, n);
	return 0;
}