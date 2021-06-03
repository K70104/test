#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// stdio - 标准输入输出

// main函数是程序的入口
// 一个工程中main函数有且仅有一个
int main()
{
	// 库函数 - 打印函数 - 输出函数
	printf("hello world!\n");
	return 0;
}


int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	// 1 2 4 4 8 4 8
	return 0;
}


int main()
{
	char ch = 'e';
	printf("%c\n", ch); // e
	printf("%d\n", ch); // 101
	return 0;
}


int main()
{
	// age是变量 可以被改变
	short age = 10;
	age = 11;
	printf("%d\n", age);
	return 0;
}


int g = 100; // 全局变量
int main()
{
	int a = 10; // 局部变量 大括号内部
	return 0;
}


int a = 100;
int main()
{
	int a = 10;
	printf("%d\n", a); // 10 局部优先
	return 0;
}


int main()
{
	// 2个整数相加
	int num1 = 0;
	int num2 = 0;
	// 输入
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	// 输出
	printf("%d\n", sum);
	return 0;
}