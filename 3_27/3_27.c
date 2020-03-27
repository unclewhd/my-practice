#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//123
//	Print(num);
//	//Print(123)
//	//Print(12) + 3
//	//Print(1) + 2 + 3
//	//1 2 3
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	while (i <= n)
//	{
//		ret = ret * i;
//		i++;
//	}
//	printf("n=%d", ret);
//
//}
//int a(int n)
//{
//	int i = 1;
//	int ret = 1;
//
//		if (i <= n)
//	{
//		a(ret);
//		i++;
//	}
//		return ret;
//}
//
//int main()
//{
//	int n = 1 ;
//	scanf("%d", &n);
//	a(n) ;
//	printf("n=%d", a(n));
//}

//int a(int n)
//{
//	int z;
//	if (n == 0 || n == 1)
//		return 1;
//	else z = a(n - 1)*n;
//	return (z);
//}
//
//int main()
//{
//	int  n, i;
//	scanf("%d", &n);
//	i = a(n);
//	printf("%d", i);
//
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//#include <string.h>
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	int a = 1;
//	int b = a + 1;
//	int b = ++a; 
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//
//}
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);

	//int a = 1;
	//int b = a + 1;
	//int b = ++a;
	return 0;
}