#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 1000

#include <stdio.h>

//enum Sex
//{/*
//	MALE,
//	FEMALE,
//	SCERET
//};*/
//写一个主函数main函数。
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//
//	return 0;
//}
//void main()
//{
//	
//}
//int main()
//{
//	int age = 0;
//	//输入一个数字到age
//	scanf("%d", &age);//100
//	printf("%d\n,", age);//100
//	return 0;
////}
//
//int main()
//{
//	float weight = 49.5;//double
//	printf("weight = %f\n", weight);
//	int hight = 180;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
////
////}
//
//int max = 1000;
//
//int main()
//
//{
//
//	return 0;
//}

//
//int main()
//{
//	int a = MAX;
//	printf("%d\n",a);
//	return 0;
//}
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	const int num = 19;
//	//num = 12;
//	printf("num = %d\n", num);
//
//	return 0;
//}


//{
//	int num = 10;
//enum Sex s = MALE;
//printf("%d\n", MALE);
//printf("%d\n", FEMALE);
//printf("%d\n", SECRET);
//return 0;
//}
//
//#include<string.h>
//
//int main()
//{
//	"adc";
//	char arr1[] =  "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	printf("num = %d\n", strlen(arr1));
//	printf("num = %d\n", strlen(arr2));
//	int n = 10; 
//	int arr[MAX] = { 0 };
//
//	printf("%d\n", strlen("c:\test\121"));
//	printf("%c\n", '\x41');
//	printf("%c\n", '\1');
//	return 0;
//

//
//int main()
//{
//	//int input = 0;
//	//printf("你要好好学习吗");
//	//	scanf("%d", &input);
//	//if (input == 1)
//	//	printf("good offer\n");
//	//else
//	//	printf("bad life\n");
//
//	//return 0;
//
//	int line = 0;
//	printf("endeaver!\n");
//
//	while (line < 20000)
//	{
//		printf("practice,%d\n", line);
//		line++;
//
//	}
//	printf("good offer\n");
//	return 0;
//



//
//
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	scanf("%d%d,&num1,&num2");
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//
//}

//Add(x, y) 
int Add(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}

int main()
{
	int a;
	int b;
	int z;
	scanf("%d%d", &a, &b);
	z = Add(a, b);
	printf("%d", Add(a, b));


	return 0;
}