#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"



void menu()
{
	printf("******************************\n");
	printf("********    1.play    ********\n");
	printf("********    0.exit    ********\n");
	printf("******************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//初始化‘0’不是雷    定义两个二维数组
	char show[ROWS][COLS] = { 0 };//初始化  展现出* 表示 神秘 未排查
	InitBoard(mine, ROWS, COLS,'0');//初始化
	InitBoard(show, ROWS, COLS,'*');
	//DisplayBoard(mine, ROW, COL);
	//DisplayBoard(show, ROW, COL);//打印棋盘
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);//打印棋盘
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选：>");
		scanf("%d", &input);
		switch (input)
		{
	case 1:
		game();
	case 0:
		printf("推出\n");
		break;
	default:
		printf("选择错误\n");
		break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}



