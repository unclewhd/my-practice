#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a = 10;
//	int arr[6] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(double));
//	return 0;
//
//}

//int main()
//
//{
//	int a = 10;
//	int b = ~a;
//	printf("%d\n", b);
//	//按位取反0000000000000000000000000001010
////            1111111111111111111111111110101	
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int b = ++a;
//	//printf("b=%d a=%d\n", b, a);
//	//int b = --a;
//	//printf("b=%d a=%d\n", b, a);
//	int b = a--;
//	printf("b=%d a=%d\n", b, a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	//int a = 0;
//	int b = 0;
//	if (a && b)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//	max = (a > b) ? (a) : (b);
//
//	printf("%d\n", max);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	float a;
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	return 0;
//}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int age;
//	u_int age2;
//
//	double a;
//		return 0;
//}

//int main()
//{
//	register int a = 0;
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//#define MAX 10
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}
//
//
//#define MAX（X,Y) ((X)>(Y)?(X):(Y))

//int Max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max =%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//}


//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'w';
//	printf("%c\n",ch);
//	return 0;
//}
//

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	char ch = 'a';
//	int a = 10;
//	char *pc = &ch;
//	int *pa = &a;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof 18);
//	return 0;
//}





int sum(int a)
{
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	return (a + b + c);//c=1 b=3+2n
}
int main()
{
	int i;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d,", sum(a));
	}
}