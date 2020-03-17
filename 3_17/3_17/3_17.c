#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void main()
{
	int a, b, c, d;
	char x, y;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	x = (a>b) ? a : b;
	y = (c>d) ? c : d;
	printf("%d\n", x>y ? x : y);
}