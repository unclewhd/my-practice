#define _CRT_SECURE_NO_WARNINGS 1



int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 16;
	default: b = 0;
	}
	return b;
}

int main()
{
	int ret = func(1);
	printf("ret = %d\n", ret);
	return 0;
}