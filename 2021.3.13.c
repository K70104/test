#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	return 0;
}





// 字面常量
// 100;


// const 修饰的常变量


// #define 定义的标识符常量
#define max 10

int main()
{
	int arr[max] = { 0 };
	printf("%d\n", max);
	return 0;
}


// 枚举常量
// 枚举关键 enum
enum Sex
{
	MALE,  // 枚举常量
	FEMALE,  // 枚举常量
	SECRET  // 枚举常量
};
int main()
{
	printf("%d\n", MALE);  // 0
	printf("%d\n", FEMALE);  // 1
	printf("%d\n", SECRET);  // 2

	return 0;
}