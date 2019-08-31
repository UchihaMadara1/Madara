#define _CRT_SECURE_NO_WARNINGS 1
#include  <stdio.h>
int main()
/*{
 int a = 0;
 int b = 0;
 int i = 0;
 scanf("%d %d",&a,&b);
 i = a;
 a = b;
 b = i;
 printf("a=%d\nb=%d", a, b);
 return 0;
 }
 {
 int a = 0;
 int b = 0;
 int c = 0;
 int x = 0;
 int y = 0;
 int max = 0;
 scanf("%d %d %d",&a,&b,&c);
 if (a==b&&a==c)
 printf("%d %d %d",a,b,c);
 else
 {
 if (a >= b&&a >= c)
 {
 max = a;
 x = (b > c ? b : c);
 y = (b < c ? b : c);
 printf("%d %d %d\n", max, x, y);
 }
 else   if (b >= a&&b >= c)
 {
 max = b;
 x = (a > c ? a : c);
 y = (a <c ? a : c);
 printf("%d %d %d", max, x, y);
 }
 else  if (c >= a&&c >= b)
 {
 max = c;
 x = (a > b ? a : b);
 y = (a < b ? a : b);
 printf("%d %d %d", max, x, y);
 }
 }
 return 0;
 }
 {
 int arr[10] = {0};
 int i = 0;
 int j = 1;
 int a = 0;
 int b = 0;
 int max = 0;
 while (i < 10)
 {
 scanf("%d", &arr[i]);
 i++;
 }
 a = arr[0];
 while (j<10)
 {
 b= arr[j];
 if (a>b)
 max = a;
 else
 a = b;
 j++;
 }
 printf("%d",max);
 return 0;
 }*/

{
	int a = 0;
	int b = 0;
	int x = 0;
	int j = 0;
	scanf("%d %d", &a, &b);
	x = (a<b ? a : b);
	for (j = x; j>0; j--)
	{
		if (a%j == 0 && b%j == 0)
			break;
	}
	printf("a和b的最大公约数为%d\n", j);
	return 0;
}
