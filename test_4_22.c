// goto语句  作用：跳出嵌套的深层
#include <stdio.h>
#include <stdlib.h> // ststem
#include <string.h> // strcmp

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 180");
again:
	printf("三分钟内关机 若输入：我是猪 取消关机\n");
	scanf_s("%s", input);
	if (strcmp(input, "我是猪") == 0) // 比较两个字符串用strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 180");
	while (1)
	{
		printf("三分钟内关机 若输入：我是猪 取消关机\n");
		scanf_s("%s", input);
		if (strcmp(input, "我是猪") == 0) // 比较两个字符串用strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


// 库函数
// www.cplusplus.com
// www.zh.cppreference.com www.en.cppreference.com
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "bit";
	char arr2[20] = "###########";
	strcpy(arr2, arr1); // strcpy - string copy - 字符串拷贝
	printf("%s\n", arr2);
	return 0;
} // strlen - string length - 字符串长度有关


#include <stdio.h>

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5); // memory - 内存  set - 设置
	printf("%s\n", arr); // ***** world
	return 0;
}


// 自定义函数
#include <stdio.h> // 写一个函数！比较两个数大小

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	max = get_max(100, 200);
	printf("max = %d\n", max);
	return 0;
}


#include <stdio.h> // 交换两个整形变量的内容

int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	return 0;
}


#include <stdio.h>// 用函数！交换两个整形变量的内容

void Swap1(int x, int y) // 不能完成任务
{
	// 当实参传给形参的时候，形参其实是伤实参的一份临时拷贝，
	// 对形参的修改是不会改变实参的 
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb) // 形参
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	// int tmp = 0;
	printf("a=5d b=%d\n", a, b);
	// Swap1(a, b);
	Swap2(&a, &b); // 实参
	printf("a=%d b=%d\n", a, b);
	return 0;
}


// 函数的调用 传值调用 传址调用
#include <stdio.h> // 例1. 写一个函数判断一个数是不是素数

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++) // 优化 j<=sqrt(n) 头文件math.h
	{
		if (n % j == 0)
		{
			return 0;
		}
		return 1;
	}
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}


#include <stdio.h> // 2.写一个函数判断是否为闰年

int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}


#include <stdio.h> // 3.写一个函数 实现一个整形有序数组的二分查找

int binary_search(int arr[], int k, int sz) // 这里的arr本质上数指针 传地址   加上sz
{
	// int sz = sizeof(arr) / sizeof(arr[0]); // 32平台4 第一个元素int-也是4 4/4=1 故不能求元素个数 在main里求
	int left = 0;
	int right = sz - 1;
	while (left <= right) // 小于等于
	{
		int mid = (left + right) / 2; // 求中间元素必须在循环内
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
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz); // 加上sz
	if (ret == -1) // 如果找到了，返回这个数的下标 找不到，返回-1
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}


#include <stdio.h> // 写一个函数 每调用一次就将num的值增加1

void Add(int* p)
{
	(*p)++; // *p++ ++作用于p
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}


// 函数的嵌套调用和链式访问
#include <stdio.h> // 嵌套调用

void new_line()
{
	printf("hehe\n");
}

void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}

int main()
{
	three_line();
	return 0;
}


#include <stdio.h> // 链式访问

int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len); // 1
	pritnf("%d\n", strlen("abc")); // 2 把一个函数的返回值作为一个另一个函数的参数
	return 0;
}

#include <stdio.h>

int main()
{
	printf("%d", printf("%d", printf("%d", 43))); // 4321 printf返回值是打印的字符的个数
	// printf("%d", printf("%d", 2)); // 432
	// printf("%d", 1); // 4321
	return 0;
}


#include <stdio.h> // 函数的声明与定义

int Add(int x, int y); // 函数声明

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b); // 函数调用
	pritnf("%d\n", sum);
	return 0;
}

int Add(int x, int y) // 函数的定义
{
	int z = x + y;
	int z = z + y;
	return z;
}


#include <stdio.h>

int main()
{

	return 0;
}