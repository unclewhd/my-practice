#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int NumberOf1(insigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//
//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc );
//	printf("%p\n", pc + 1);
//
//	return 0;
//
//}

int main()
{
	int arr[10] = { 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344 };
	int i = 0;
	char* p = arr;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;

}