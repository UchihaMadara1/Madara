#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int arr1[] = {1,2,3,4,5,6};
	printf("%p \n",&arr1);
	printf("%p \n",&arr1 +1);
	return 0;
}