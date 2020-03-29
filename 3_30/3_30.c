//#define _CRT_SECURE_NO_WARNINGS 1
//void init(int arr[], int i)
//{
//	int n = 9;
//	printf("请输入数组元素数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//	/*	printf("请输入数组元素：");
//		scanf("%d", &arr[i]);*/
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[],int sz)
//{
//	int i ;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0, right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr, i) ;
//	print(arr, sz);
//	reverse(arr,sz);
//
//}
void change(int *arr1,int *arr2,int *temp)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{

		temp[i] = arr1[i];
	}
	for (i = 0; i < 3; i++)
	{

		arr1[i] = arr2[i];
	}
	for (i = 0; i < 3; i++)
	{

		arr2[i] = temp[i];
	}
}
void print(int arr[])
{
	int i ;
	for (i = 0; i < 3; i++)
	{
		printf("%d", arr[i]);
	}
}

int main()
{
	int arr1[3] = { 1, 2, 3 };
	int arr2[3] = { 2, 1, 3 };
	int temp[3] = { 0 };
	print(arr1);
	change(arr1,arr2,temp);
	print(arr1);

}