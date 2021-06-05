#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int b = 100;
//	{
//		int a = 10;
//		printf("a = %d\n", a); // 10
//		printf("b = %d\n", b); // 100
//	}
//	printf("b = %d\n", b); // 100
//	return 0;
//}
//
//
//// 声明外部变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//
//
// 1. 字面常量
//int main()
//{
//	3.14; // 浮点型字面常量
//
//}
//
//
// 2. const修饰的的常变量
//int main()
//{
//	// 一个变量不能被改变我们就说具有常属性 - 不能被改变的属性
//	const int a = 100;
//	a = 200;
//}
//
//
//int main()
//{
//	const int n = 100; // n不是常量，只是具有常属性，不能被修改，n还是变量
//	int arr[n] = { 0 }; // ERROR
//	return 0;
//}
//
//
// 3. #define 定义的标识符常量
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a); // 100
//
//	// 可用于数组
//	int arr[MAX] = { 0 };
//	return 0;
//}
//
//
// 4. 枚举常量  枚举：一一列举
// enum - 枚举关键字
// enum Sex - 枚举类型
//enum Sex
//{
//	// 枚举的可能取值 - 枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE; // 表示性别的变量
//
//	printf("%d\n", MALE); 
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	// 枚举常量默认从0开始递增 0 1 2
//	return 0;
//}
//
//
// 赋初值可以更改，枚举常量不能改
//enum Sex
//{
//	MALE = 3,
//	FEMALE = 7,
//	SECRET
//};
//
//int main()
//{
//	// MALE = 4; // ERROR
//}
//
//
// C99中引入一个：变长数组
//int main()
//{
//	const int n = 3;
//	int arr[n] = { 0, 1, 2 }; // 若编译器支持C99标准变长允许使用变量指定数组
//	printf("%d", arr[0]);
//	printf("%d", arr[1]);
//	printf("%d", arr[2]);
//	return 0;
//}
//
//
// 字符串
//int main()
//{
//	// char - 字符类型
//	// 'a' - 字符:有单引号引起是
//	// "abcdef" - 字符串:由双引号引起的一串字符
//	"abcdef"; // 字符串字面值
//
//	char ch[10] = "abcdef"; // 用abcdef初始化数组 
//	// 其中有七个字符abcdef\0 剩下三个字符默认放\0 --abcdef\0\0\0\0
//	printf("%s\n", ch); // %s
//	return 0;
//}
//
//
//int main()
//{
//	char ch1[] = "abcdef";
//	printf("%s\n", ch1);
//
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	// 单个字符打印时，没有\0，此时要添加'\0'，否则会出现乱码
//	printf("%s\n", ch2);
//}
//
//
//#include <string.h>
//int main()
//{
//	char ch1[] = "abcdef";
//	printf("%d\n", strlen(ch1)); 
//	// stelen 库函数 - 求字符串长度的 \0是字符串结束标志 不算长度 结果都是6
//
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	printf("%d\n", strlen(ch2));
//	return 0;
//}
//
//
