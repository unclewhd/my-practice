#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** paa = &pa;
//	printf("%d", **paa);
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr2[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr2[i]));
//
//	}
//	return 0;
//}

struct Stu
{
	char name[20];
	char id[20];
	short age;
	char sex[5];
}s2, s3, s4;

int main()
{
	struct Stu s1;
	return 0;
}

struct S
{
	int a;
	char c;
	char arr[10];
	double d;
};

typedef struct T
{
	char buf[20];
	struct S s;
	int* p;
}T;

int main()
{
	int a = 10;
	struct S s = { 100, 'w', "bit", 3.14 };
	T st = { "hello bit", { 1000, 'b', "abcdef", 4.4 }, &a };
	T* pt = &st;
	printf("%s\n", pt->buf);
	printf("%lf\n", pt->s.d);

	struct T st2;
	return 0;
}