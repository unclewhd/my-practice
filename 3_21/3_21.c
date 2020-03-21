#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d ", a, b, c);
//}

//int main()
//{
//	int m = 124135456;
//	int n = 534;
//	int min = (m > n ? n : m);
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("最大公约数：%d\n", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}
//
//int main()
//{
//	//辗转相除法
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//
//	}
//	printf("最大公约数是：%d", n);
//}


//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000)
//	{
//		if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
//			printf("%d ", year);
//		count++; year++;
//	}
//	
//}
//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year <= 2000)
//	{
//		//判断year是否为闰年
//		//闰年的判断规则
//		//1. 能被4整除，并且不能被100整除是闰年
//		//2. 能被400整除是闰年
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//
//		year++;
//	}
//	printf("\ncount = %d\n", count);
//	int c = 24 * 11;
//	printf("%d",c);
//
//	return 0;
//}

//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j < i)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			 j++;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//
//		}
//		i++;
//		
//	}printf("%d", count);
//	return 0;
//}
//
#include <math.h>
#include<stdio.h>
//
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j <= sqart(i))
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		while (j > sqart(i))
//		{
//			printf("%d", i);
//			count++;
//		}
//		i++;
//	}
//	return 0;
//
//}
//#include <math.h>
//
//
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j<=sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}



//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j<=sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i = i + 2;
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("a=%d ", a);
//	a = a + 1;
//	return 0;
//}
//
//int main()
//{
//	int ch = 0;
//	printf("请输入密码：>");
//	scanf("%s", input);
//	printf("请确认密码（Y/N）:>");
//	while ((ch = getchar()) != '\n');
//}
//int main()
//{
//	int ch = 0;
//	//EOF - end of file - 文件结束标志 - 放在文件末尾
//	while ((ch = getchar()) != EOF)  //EOF end of file ctrl+z结束。
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：>");
//	scanf("%s", input);
//	printf("请确认密码（Y/N:>");
//	//清空缓冲区
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//}
 
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++
//	}
//}
//
//int main()
//{
//	for (;;)// 判断部分省略恒为真
//		printf("hehe\n");
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; k++)
//		;
//	printf("%d", k);
//} 
//int main()
//{
//	int i = 0;
//	int k = 0;
//	while (k == 0)
//	{
//	
//		printf("%d", k);
//		k++;
//	}
//}
//int main()
//{
//	int i = 0;
//	do
//	printf("%d", i);
//	i++;
//
//}
//while ()
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ",i);
//		i++;
//	}
//
//	while (i < 10);
//	return 0;
//}// 至少循环一次

//int main()
//{
//	//5*4*3*2*1
//	//n*(n-1)*(n-22)*...*3*2*1
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret *i;
//	}
//		//while (i <= n)
//		//{
//		//	ret = ret*i;
//		//	i++;
//		//}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret *i;
//	}
//	
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = i*ret;
//		}
//		sum = sum + ret;
//	}
//	printf("%d ", sum);
//}

int main()
{
	int n = 0;
	int i = 1;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		
		ret = n*ret;
		sum = sum + ret;
	}
	printf("%d ", sum);
}