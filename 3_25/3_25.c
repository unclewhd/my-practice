#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char arr1[20] = "#############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//
//}
//void * memset(void * ptr, int value, size_t num);
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

#include <math.h>

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2 )
//	
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap2(int *pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0  ;
//	int b = 0  ;
//	scanf("%d%d", &a,&b);
//	printf("a=%d b=%d\n", a,b);
//	swap2(&a,&b);
//	printf("a=%d b=%d\n", a,b);
//	printf("%d%d", a, b);
//	return 0;
//}
//void r(int *pi, int *pj, int *pret)
//{
//	*pret = *pi**pj;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 0;
//
//	scanf("%d",&n);
//	for (j = 0; i <= n; i++)
//	{
//		for (j = 0; j <= n; j++)
//		{
//			
//			r(&i, &j,&ret);
//			printf("%d*%d=%2d ", i, j, ret);
//			
//		}
//		printf("\n");
//	}
//}
//
//int r(int x, int y)
//{
//	int z = x*y;
//	return z;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	
//
//	scanf("%d", &n);
//	for (j = 0; i <= n; i++)
//	{
//		for (j = 0; j <= n; j++)
//		{
//
//			int z = r(i, j);
//			printf("%d*%d=%2d ", i, j,z);
//
//		}
//		printf("\n");
//	}
//}
//#include <string.h>
//int main()
//{
//	char arr[] = "hello bit";//***** bit
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = get_max(a, get_max(30,5));
//	printf("max=%d\n", max);
//	return 0;
//}

//void Swap2(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;//等价于tmp = a;
//	*pa = *pb;//a = b;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//
//	Swap2(&a, &b);
//
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//}
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid - 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了下标是：%d\n", ret);
//
//	}
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0; 
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	int len = strlen("bit");
//	printf("len =%d\n", strlen("bit"));
//
//	return 0;
//}

#include"3_25.h"

int main()
{
	int a = 10;
	int b = 20;
	int c = Sub(a, b);
	int sum = Add(a, b);
	printf("sum = %d\n", sum);
	return 0;
}