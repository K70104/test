// 类型的意义：1. 开辟空间的大小 2. 看待内存空间的视角

// 整数
// 有符号数：1.负数--原码、反码、补码--各不相同   2. 正数--相同 
// 无符号数：原码、反码、补码--相同

// 整形存补码原因：
// 补码可以将符号位和数值域统一处理 加法减法也可以统一处理（CPU只有加法器）
// 1 + (-1)
// 00000000000000000000000000000001 1补码
// 11111111111111111111111111111111 -1补码
// 100000000000000000000000000000000 33位 去1 得00000000000000000000000000000000

// 大端小端存储模式：
// 大端 数据的低位保存在内存的高地址中，而数据的高位保存在内存的低地址中
// 小端 数据的低位保存在内存的低地址中，而数据的高位保存在内存的高地址中
// 左是低地址 右是高地址
// 0x11223344  -- 44是低位 
// 44 33 22 11  -- 44存在低地址中  小端


// 请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序
#include <stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}


// 优化 用函数
#include <stdio.h>

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	/*if (*p == 1)
		return 1;
	else
		return 0;*/
	return *p;
	// 返回1，大端  返回0，小端
}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}


// 练习1. 输出什么
#include <stdio.h>

int main()
{
	char a = -1;
	// 10000000000000000000000000000001
	// 11111111111111111111111111111110
	// 11111111111111111111111111111111  1的补码是全1
	// 11111111  char
	// 打印整形 整形提升 char有符号位 高位补符号位
	// 11111111111111111111111111111111 算原码 还是-1
	signed char b = -1;
	//  同上
	unsigned char c = -1;
	// 11111111
	// 无符号位 补0
	// 00000000000000000000000011111111  正数 原反补相同
	// 255
	printf("a=%d, b=%d, c=%d", a, b, c);
	return 0;
}


// 练习2 
#include <stdio.h>

int main()
{
	char a = -128;
	// 1000 0000 0000 0000 0000 0000 1000 0000
	// 1111 1111 1111 1111 1111 1111 0111 1111
	// 1111 1111 1111 1111 1111 1111 1000 0000  补码
	// 10000000
	// 1111 1111 1111 1111 1111 1111 1000 0000  整形提升 补码
	// 打印无符号 原反补相同  4,294,967,168
	printf("%u\n", a);
	// %d - 打印十进制有符号数字
	// %u - 打印十进制无符号数字
	return 0;
}


// 有符号的char的范围是：-128 --> 127
// 无符号的char的范围是：0 --> 255


// 练习3
#include <stdio.h>

int main()
{
	char a = 128; // 127+1
	printf("%u\n", a);
	return 0;
}


// 练习4. 按照补码的形式运算，最后格式化为有符号整数
int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	return 0;
}
// 10000000 00000000 00000000 00010100
// 11111111 11111111 11111111 11101011
// 11111111 11111111 11111111 11101100  -20补码
// 00000000 00000000 00000000 00001010  10补码 无符号位 
// 11111111 11111111 11111111 11110110  相加结果i+j
// 打印原码
// 11111111 11111111 11111111 11110101  i+j反码
// 10000000 00000000 00000000 00001010  原码 -10


// 练习5
#include <stdio.h>
#include <windows.h>

int main()
{
	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i); // 死循环
		Sleep(100);
	}
	return 0;
}


// 练习6
#include <stdio.h>

int main()
{
	char a[1000];
	int i;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));
	return 0;
}
// char 在计算机中的计算范围 -128 --> 127
// -1 --> 128 --> 127 --> 3 --> 2 --> 1 --> 0
// strlen 求长度 在\0之前的数有多少
// -1到128--128位  127到1--127位  128+127=255


// 练习7
#include <stdio.h>

unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n"); // 死循环 unsigned char范围0-255 恒成立
	}
	return 0;
}


// 浮点数在内存中的存储
int main()
{
	double d = 1E10;
	printf("%If\n", d); // 1.0*10^10  1.0乘10的10次方
	return 0;
}