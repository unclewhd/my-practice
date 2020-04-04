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

//int main()//¿´²»¶®
//{
//	int arr[10] = { 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344, 0x11223344 };
//	int i = 0;
//	char* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//
//}
//int NumberOf1(unsigned int n)
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
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = NumberOf1(num);
//
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	int a = 10;
//	double d = 10.0;
//	
//	char* pc = &ch;
//	int* pa = &a;
//	double* pd = &d;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	char* pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* p2 = NULL;
//	p = NULL;
//	if (p != NULL)
//		*p = 0;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	char ch[5] = { 0 };
//
//		printf("%d ", &arr[0] - &arr[9]);
//
//	return 0;
//}

#include <string.h>

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//			printf("%d\n", *p);
//
//	}
//}
//void print(int arr[])
//{
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p+i));
//		
//	}
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	print(arr);
//	return 0;
//}
void upsetdown(char* arr,int sz)
{
    
	char temp = 0 ;
	int right = sz - 2;
	int left = 0;
	int i = 0;


	while (left+i < right-i)
	{
		temp = arr[left+i];
		arr[left+i] = arr[right-i];
		arr[right-i] = temp;
		i++;

	}

}
int main()
{
	
	char arr[100] = { "abcdef" };
	gets(arr);
	int sz = sizeof(arr) / sizeof(arr[0]);
	upsetdown(arr,sz);
	printf("%s", arr);
	return 0;
}

//void r(char* arr)
//{
//	int len = strlen(arr);
//	char* left = arr;
//	char* right = arr + len - 1;
//	char tmp = 0;
//	
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//}

int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;
	scanf("%d%d", &a, &n);

	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	return 0;

}
//void print()
//{
//	int i = 0;
//	int n = 0;
//	for (i = 0; i < 100001; i++)
//	{
//		while (i /= 10)
//		{
//
//		}
//		while (i == n) // n = 
//		{
//
//			printf("%d ", i);
//		}
//	}
//}
//
//int main()
//{
//
//	print();
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int sum = 0;
		int count = 1;

		int tmp = i;
		while (tmp/=10)
		{
			count++;
		}

		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}

		if (sum == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}

int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
		for (i = 0; i < line-1; i++)
		{

			int j = 0;

			for (j = 0; j<=i; j++)
			{
				printf(" ");
			}

			for (j = 0; j < 2*(line-1-i)-1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		return 0;
	}
