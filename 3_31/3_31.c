#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//int a = 7 / 2;
//	double a = 7.0 / 2;
//	printf("%lf\n", a);
//	return 0;
//
//}

//int main()
//{
//	//int a = 14;
//	//00001110
//	//00000111
//	int a = -1;
//	//10000000000000000000000000000001 yuanma
//	//11111111111111111111111111111110 fanma
//	//11111111111111111111111111111111 fanma+1
//	int b = a >> 1;
//	printf("b = %d\n", b);
//	
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a&b; an wei yu：都是1就是1
//	//int c = a | b; an wei huo：有1 就是1
//	//int c = a^b; yi huo:不同的是1
//	printf("%d", c);  
//	return 0;
//}

//int main()
//{
//	int a = 3; //0011 0101
//	int b = 5; //0101 
//	int c = 0; //0110
//	printf("a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//
//}

//int main()
//{
//	int a = 0;
//	a = 20;
//	int age = 0;
//	age = 1;
//	int num = 0;
//	num = num + 10;
//	num += 10;
//	num = num >> 1;
//	num >= 1;
//
//	num = num & 1
//		;
//	
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", !a);
//
//	int flag = 0;
//	if (flag)
//	{
//
//	}
//	if (!flag)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = -3;
//	a = -a;
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	*pa = 20;
//	printf("%d", a);
//}

//int main()
//{
//	int a = 0;
//	int arr[10] = { 0 };
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof (int));
//	//printf("%d\n", sizeof (arr));
//	printf("%d\n", sizeof (int [10]));
//
//
//
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//}

//int main()
//{
//	int a = 13;
//	//a = a | (1 << 4);
//	//printf("%d\n", a);
//	a &= (~(1 << 4));
//	printf("%d\n", a);
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	int b = ++a;
//	int b = --a;
//	
//}

//int main()
//{
//	/*int a = (int)3.14;
//	printf("a = %d\n", a);
//	return 0;*/
//
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//
//}
//
//void test2(char ch)
//{
//	printf("%d\n", sizeof(ch));//(1)
//}
//
//int main()
//{
//	char ch[10] = { 0 };
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(2)
//	test1(arr);
//	test2(ch);
//}

//int main()
//{
//	int flag = 3;
//	if (flag)
//	{
//		printf("a");
//	}
//	if (!flag)
//	{
//		printf("b");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a && b;
//	printf("%d", c);
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\n", a, b, d);
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	max = (a > b) ? (a) : (b);
//
//	return 0;
//}

//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5, 6 };
//	//printf("%d\n", arr[3])
//
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//}
#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = { "zs", 10, "9383535", "man" };
//
//	strcpy(s.name, "zhangsan");
//	printf("%s\n", s.name);
//	struct Stu* ps = &s;
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->age);
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
int main()
{
	char a = 0xb6;
	short b = 0xb600;
	int c = 0xb6000000;

		if (a == 0xb6)
			printf("a");
		if (b == 0xb600)
			printf("b");
		if (c == 0xb6000000)
			printf("c");
		return 0;
}