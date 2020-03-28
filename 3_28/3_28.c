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
//int my_strlen(char* str) //b  i  t  \0
//{                        //3  2  1   0
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	//int a = 1;
//	//int b = a + 1;
//	//int b = ++a;
//	return 0;
//}
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}
int count = 0;

int Fib(int n)
{
		count++;
	
	if (n <= 2)
	{
		return 1;
	}
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int ret = Fib(n);
	printf("\ncount=%d\n", count);
	printf("%d",ret);
	
	return 0;
}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);

	printf("%d", ret);

	return 0;
}
//char reverse_string(char* str)
//{
//	if (*str != '\0')
//	{
//		str++;
//	}
//	else
//	{
//		return reverse_string(str - 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "bit";
//	char a = reverse_string(arr);
//	printf("%d", a);
//	return 0;
//}


//void reverse_string(char* arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//
//	
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	*(arr + len - 1) = tmp;
//
//	}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s", arr);
//}
//int Dig(int* arr)
//{
//	int len = strlen(arr);
//	int i = -1;
//	if (i <= len)
//	{
//		i++;
//		return arr[i] + Dig(i++);
//		
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {0};
//	scanf("%d", &arr);
//	int a = Dig(arr);
//	printf("%d", a);
//}

//int DigitSum(int n)
//{
//	if (n>9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = DigitSum(n);
//	printf("%d",a);
//	return 0;
//}

int AD(int n,int k)
{

	if (k != 0)
	{
		k--;
		return n*AD(n, k);
	}
	else
		return 1;

}
int main()
{
	int k = 0;
	int n = 0;
	scanf("%d", &n);
	scanf("%d", &k);
	int a = AD(n,k);
	printf("%d", a);
}