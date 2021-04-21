// 1.三个数从大到小输出
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	// a中放最大值 b其次 c中放最小值
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}


// 2.打印1-100之间所有3的倍数的数字
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d", i);
	}
	return 0;
}


// 3.求两个数的最大公约数
#include <stdio.h>

int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf_s("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	// 优化 while(r=m%n) 省略r=m%n
	printf("%d\n", n);
	return 0;
}


// 4.打印1000-2000年的闰年
#include <stdio.h>

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		// 判断闰年方法：
		// 1. 能被4整除并且不能被100整除
		// 2. 能被400整除
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	// 优化
	// if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	// {
	//  	printf("%d ", year);
	//   	count++;
	// }
	printf("\ncount = %d\n", count);
	return 0;
}


// 5.打印100-200之间的素数
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		// 判断素数方法：1. 试除法  产生2->i-1
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

// 用平方比较 i=a*b 则a和b中至少有一个数字<=开平方i
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	// sqrt - 开平方的数学库函数
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

// 优化 for (i = 101; i <= 200; i+=2) 排除所有偶数 提高效率


// 作业二 1.计算1-100多少个数字9  -- 有多少个9而不是有9的数字
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	// 9 19 29 39... 99十个 90 91 92... 99十个 
	printf("count = %d\n", count);
	return 0;
}


// 2. 分数求和 计算1/1 - 1/2 + 1/3 - 1/4 +1/5... +1/99 -1/100 的值
#include <stdio.h>

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%if\n", sum);
	return 0;
}


// 3. 打印10个数中的最大值
#include <stdio.h>

int main()
{
	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
	int max = arr[0]; // 不能等于0 避免负数比较 从第一个数开始 
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}


// 4. 在屏幕上输出9*9乘法口诀表
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d%d=%-2d ", i, j, i * j); // -2左对齐
		}
		printf("\n");
	}
	return 0;
}


// 猜数字 1. 生成一个随机数 2. 猜数字
#include <stdio.h>
#include <time.h>

void menu()
{
	printf("############################\n");
	printf("######  1. play   0. exit###\n");
	printf("############################\n");
}

void game()
{
	// 生成一个随机数
	int ret = 0;
	int guess = 0; // 接受猜的数字
	// 拿时间戳来设置随机数的生成起始点
	// time_t time(time_t *timer)
	ret = rand() % 100 + 1; // RAND_MAX - 32767  将随机数范围定在100内
    // printf("%d\n", ret); // 不直接打印随机值 用while猜出来
	while (1)
	{
		printf("请猜数字:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜到了\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}