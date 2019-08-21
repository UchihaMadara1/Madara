#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float sum = 0;
	int n = 1;
	while (n < 101)
	{
		sum += 1.0 / n;
		if (n>0)
			n++;
		else
		{
			n--;
		}
		n *= -1;
	}
	printf("%f ", sum);
	return 0;
}