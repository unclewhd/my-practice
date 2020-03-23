#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 23;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到啦，下标是%d", i);
//			break;
//
//		}
//	}
//	if (i == sz)
//		printf("error\n");
//	
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int b = 0;
//	for (i = 0; i < 2; i++,b++)
//	{
//
//		printf("%d", b);
//	}

//}
//int main()
//{
//	int i = 1;
//	int b = 0;
//	do
//	{
//		i++;
//		b++;
//		printf("%d", b);
//	} while (i < 2);
//		if (i == 2)
//		{
//			printf("adasdsd");
//		}
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;// left = 0 
		                             // rhit = 9 
	                                 // mid  = 4
	if (arr[mid] < k)
	{
		left = mid + 1;
	}
	else if (arr[mid] > k)
	{
		right = mid - 1;
	}
	else
	{
		printf(" zdl %d",mid);
		break;
	}

	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}

//{
//	char arr[] = { "whd" };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	printf("%d",sizeof(arr));
//}
#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!!!!";
//	char arr2[] = "#########################";
//
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠函数 毫秒
//		system("cls");//清理屏幕
//		left++;
//		right--;
//	}
//}

#include<string.h>
#include<time.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);

		if (0 == strcmp(password, "123456"))
		{
			printf("成功");
			break;
		}
		else
		{
			printf("密码错误\n");
		}

	}
	if (i == 3)
	{
		printf("三次密码错误,退出");
	}
	return 0;
}
void menu()
{
	printf("********************************");
	printf("*****  1.play     **************");
	printf("*****  2.out      **************");
	printf("********************************");

}

void game()
{
	srand((unsigned)time(NULL));
	int random_num = rand()%100+1;
	int input = 0;
	while (1)
	{
		printf("请输入数字:>");
		scanf("%d", &input);
		if (input > random_num)
		{
			printf("大了");
		}
		else if (input < random_num)
		{
			printf("小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}

int main()
{
	
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input == 1);
	return 0;
}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max;
//	for (i = 0; i < 10; i++);
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//}


int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-7d ", i, j, i*j);
		}
		printf("\n");
	}
}