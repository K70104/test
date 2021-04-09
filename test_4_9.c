// 写代码交换两个整数的值
# include <stdio.h>
# include <limits.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d b=%d\n", a, b);

	a = a + b; // a和 b不变
	b = a - b; // 和减b得a
	a = a - b; // 和减a得b
	printf("交换后：a=%d b=%d\n", a, b);
	// 溢出问题
	// int - 4个字节 - 32bit位 -最大值
	INT_MAX; //右击鼠标转到定义看数字 2147483647

	return 0;
}


int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d b=%d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
  // 相同为0，相异为1
	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}
// 第三个变量方法可读性高，执行效率高    异或的操作可读性差，执行效率低





// 慎点！
// 找出只出现一次的数   Leetcode
#include <stdio.h>
#include <stdlib.h> // ststem
#include <string.h> // strcmp

int main()
{
	char input[20] = { 0 }; // 存储数据
	// system() - 专门用来执行系统命令的
	system("shutdown -s -t 180"); // cmd关机

again:
	printf("请注意，你的电脑在1分钟后关机，若输入：我是猪，则取消关机");
	scanf_s("%s, input");
	if (strcmp(input, "我是猪") == 0) //判断input中放的是不是“我是猪” - strcmp -string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}