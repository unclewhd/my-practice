#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <assert.h>

//1.//模拟strcpy这个函数。
//
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "######";
//	char arr2[] = "abcdef";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}
////2.模拟strlen这个函数    三种方法实现了strlen:1,计数器，2,递归,3,指针-指针
//
//
//int my_strlen(char* str)//指针-指针
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	//[a][b][c][\0]
//	printf("%d\n", len);
//	return 0;
//}
//
//
//int my_strlen(const char* str)//return count 计数器
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}
//int my_strlen(char* str)//递归
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);//str++
//	else
//		return 0;
//}
////3.逆序一个数组
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	char tmp = 0;
//
//	while (left<right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[20] = {0};
//	//scanf("%s", arr);
//	gets(arr);
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse_string(char *string)//用了一个巧妙的方法递归
//{
//	assert(string);
//	if (*string == '\0')
//	{
//		return;
//	}
//	else
//	{
//		int len = strlen(string);
//		char tmp = string[0];
//		string[0] = string[len - 1];
//		string[len - 1] = '\0';
//		reverse_string(string + 1);
//		string[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char p[] = "abcde";
//	reverse_string(p);
//	printf("%s\n", p);
//	system("pause");
//	return 0;
//}
//
////4.//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;//存储计算好的每一项
//	scanf("%d%d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//
//
//
//5.冒泡排序
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	//确定冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void PrintArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//*(arr+i)
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//写一个冒泡排序函数，将数组arr排成升序
//	PrintArr(arr, sz);
//	BubbleSort(arr, sz);
//	PrintArr(arr, sz);
//
//	return 0;
//}
//
//6.//交换一个数 
//void Swap1(int x, int y)//复制变量  实际上没有改变
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}
////ok
//void Swap2(int *pa, int *pb)//传递一个指针变量
//{
//	int tmp = 0;
//	tmp = *pa;//等价于tmp = a;
//	*pa = *pb;//a = b;
//	*pb = tmp;
//	//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/	
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//
//7.//二分法打印数组中的元素
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//找不到
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//数组传参的时候，传过去一个数组名，本质上传过去的是数组的首元素的地址 &arr[0]
//	int ret = binary_search(arr, k, sz);//找到了返回下标，找不到返回-1
//	//数组传参发生降级-变成首元素的地址
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}
void scanf1(int* arr1)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &arr1[i]);
	}
}

void print(int* arr1)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr1[i]);
	}
}
void adjust(int* arr1,int j)
{
	int tmp = 0;
	int i = 0;
	while (i <= j)
	{
		if (arr1[i] % 2 == 0 &&arr1[j] % 2 == 1)
		{
			tmp = arr1[i];
			arr1[i] = arr1[j];
			arr1[j] = tmp;
			i++;
			j--;
		}
		else if (arr1[i] % 2 == 0 && arr1[j] % 2 != 1)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
}
int main()
{
	
	int arr1[3] = { 0 };
	
	scanf1(arr1);
	int j = (sizeof(arr1) / sizeof(arr1[0])) - 1;
	adjust(arr1,j);
	print(arr1);
	return 0;
}