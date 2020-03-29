#define _CRT_SECURE_NO_WARNINGS 1
//int My_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + My_strlen(str + 1);
//	
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = My_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[19] = { 1, 2, 3 };
//	int arr2[19] = { 1, 2, 3, 4, 5 };
//	int arr3[23] = { 1, 2, 3 };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abc";
//	printf("%d\n", strlen(arr5));
//	printf("%d\n", strlen(arr6));
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", sizeof(arr6));
//
//
//
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("&arr[%d] =%p\n",i,&arr[i]);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int *p = arr;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ",p);
//		p++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { { 1, 2 }, { 3, 4 } };
//}

//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//			
//		}
//	if (flag == 1)
//		break;
//	}
//}
//
//void printArr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	printfArr(arr,sz);
//}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6 };
	//1.sizeof(arr) 和&arr 只有这两种才是数组名代表整个数组

	return 0;
}