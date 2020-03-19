#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct Book
{
	char name[30];
	double price;
	char id[30];
};

//int main()
//{
//	//定义一本书
//	struct Book b1 = { "射雕英雄传", 30 ,"ISBN-6156465185961" };
//	struct Book b2 = { "c++",50,"ISBN-654621365" };
//	struct Book* ps = &b1;
//	printf("书名：%s\n", (*ps).name);
//		printf("书名：%s\n", ps->name);
//	printf("书名%s\n", b1.name);
//	printf("价格%lf\n", b1.price);
//	printf("编号%s\n", b1.id);
//}
//
//int main()    //分支语句
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("chengnian\n");
//	return 0;
//
//}
//int main()    //分支语句
//{
//	int age = 20;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("未成年不能谈恋爱\n");
//	}
//
//	else if (18 <= age && age < 30)
//	printf("chengnian\n");
//	else
//		printf("laobusi\n");
//
//	return 0;
//
//}
//int main()
//{
//	int age = 20;
//	if (18 > age)
//		printf("1");
//	else if (18 <= age && 30 > age)
//		printf("2");
//	else
//		printf("3");
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	/*while (i < 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}*/
//	return 0;
//
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//	{
//		printf("1");
//	}
//	else if(2 == day)
//	{
//		printf("2");
//	}
//	else
//		printf("3");
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//		printf("aiaiaini\n");
//		break;
//	default:
//		printf("wrong");
//		break;
//	}
//}	switch (day)	// 必须是整形
//	{
//	case 1:  // 必须是整型常量。
//		printf("爱你\n");
//		break;
//	case 2:


//
//int main()
//{
//	int i = 0;
//	while (i <= 9 )
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//			
//		i++;
//	}
////}
//int func(int a）
//int main()
//{
//	//int i = 0;
//	//for (i = 0; i<10; i++)
//	//{
//	//	if (i = 5)
//	//		printf("%d ", i);
//	//}
//	
//	{
//		int b ;
//		switch (a)
//		{
//		case 1: b = 30;
//		case 2: b = 20;
//		case 3: b = 16;
//		default: b = 0;
//		}
//		return b;
//	}
//	//return 0;
//}
//int func(int a)
//
//{
//	
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int b;
//	printf("%d", func(1));
//}

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
////	return 0;
////
//
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d;
//	scanf("%d%d%d", &a,&b,&c);
//	if (a > b && b > c)
//	{
//		printf("%d %d %d", a, b, c);
//	}
//	else if (a > c && c > b)
//		printf("%d %d %d", a, c, b);
//	else if (b > a && a > c)
//		printf("%d %d %d", b, a, c);
//	else if (b > c && c > a)
//		printf("%d %d %d", b, c, a);
//	else if (c > a && a > b)
//		printf("%d %d %d", c, a, b);
//	else
//		printf("%d %d %d", c, b, a);
//	return 0;
//
//}
//
//int main()
//
//{
//	int i = 3;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i = i + 3;
//	}
//
//}

//void main()
//{
//	int a, b, r;
//	do
//	{
//		printf("请输入a和b:\n");
//		scanf("%d%d", &a, &b);
//	} while (a<0 || b<0 || a>b);
//	do
//	{
//		r = b%a;
//		b = a;
//		a = r;
//	} while (r != 0);
//	printf("这两个数的最大公约数是%d\n", r);
//}
//
//int main()
//{
//	int i = 1000;
//	while(i < 2000  )
//	{
//  i = i + 4;
//		if (i % 100 == 0)
//			continue;
//		
//		printf("%d ", i);
//		
//	}
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i = i + 1;
//	}
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int i = 100;
	while (i < 200)
	{
		i += 1;
		
		if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 13 == 0 || i % 7 == 0)
			continue;
			printf("%d ", i);

		
	}
}