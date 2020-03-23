#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}// 

//int main()
//{ 
//	int i = 0;
//	int n = 0;
//	for (i = 9; n <= 8; n++)
//	{
//		i = n * 10 + 9;
//		printf("%d ", i);
//	}
//	for (i = 90; i <= 99; i++)
//		printf("%d ", i);
//}
//
//int main()
//{
//	int i = 0;
//	float n = 0;
//	int a = 1;
//	float b = 1;
//	for (b = 1; b <= 100; b++,i++)
//	{
//		if ( i % 2 == 1)
//			a = -1;
//		else
//			a = 1;
//		n = n + ((1 / b)*a);
//	}
//	printf("%lf", n);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int max;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i <= 9; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("最大值为%d", max);
//}

int main()
{
	int i=1;
	int n=1;
	int ret=1;
	for (i = 1; i < 10; i++)
	{
		for (n = i; n < 10; n++)
		{
			ret = n*i;
			printf("%c*%c=%d ", i, n, ret);
		}

	}

}