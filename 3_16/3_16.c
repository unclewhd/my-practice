#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int max(int a, int b)
{
	if (a > b)
		printf("小王爱蚊蚊");
		return a;

}



int main()
{
	int c, d;
	printf("输入两个不同的数字");
		scanf("%d%d", &c, &d);
	printf("%d\n", max(c, d));
	

	return 0;
}