#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int max(int a, int b)
{
	if (a > b)
		printf("С��������");
		return a;

}



int main()
{
	int c, d;
	printf("����������ͬ������");
		scanf("%d%d", &c, &d);
	printf("%d\n", max(c, d));
	

	return 0;
}