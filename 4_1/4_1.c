#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int compare(int m ,int n,int i)
//{
//	
//	
//	if (i == 0)
//		return 0;
//	if (i % 2 == 1)
//	{
//		 i = i >> 1 ;
//		return 1 + compare(m, n, i);
//	}
//	else
//	{
//		i = i >> 1;
//		return 0 + compare(m, n, i);
//
//	}
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int i = m^n;
//	printf("%d",compare(m,n,i));
//}
//  0000000000000000000000000001101011 2的六次方加2的五次方加2的三次方加2加1


//15 00000001111
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	int arr[32] = {0};
//	
//	int i = 0;
//	for (i = 0; i < 32; i = i + 2)
//	{
//		b = a & 1;
//		a = a >> 2;
//		if (b == 1)
//		{
//			arr[i] = 1;
//		}
//		else
//			arr[i] = 0;
//	}
//	for (i = 0; i < 32; i = i + 2)
//	{
//		printf("%d ", arr[32 - i]);
//	}
//	
//	for (i = 0; i < 32; i = i + 2)
//	{
//		a = a >> 1;
//		b = a & 1;
//		a = a >> 2;
//		if (b == 1)
//		{
//			arr[i] = 1;
//		}
//		else
//			arr[i] = 0;
//	}
//	for (i = 0; i < 32; i = i + 2)
//	{
//		printf("%d ", arr[32 - i]);
//	}
//}

//int compare(int m )
//{
//	if (m < 0)
//	{
//
//	}
//	
//	if (m == 0)
//		return 0;
//	if (m % 2 == 1)
//	{
//		 m = m >> 1 ;
//		return 1 + compare(m);
//	}
//	else
//	{
//		m = m >> 1;
//		return 0 + compare(m);
//
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//
//	printf("%d",compare(m));
//}

int main()
{
	int m = 3;
	int n = 5;
	m = m^n;
	n = m^n;
	m = m^n;
	printf("%d%d", m, n);
		               //000101N
					   //000110Mm
}