#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int b = 100;
	{
		int a = 10;
		printf("a = %d\n", a); // 10
		printf("b = %d\n", b); // 100
	}
	printf("b = %d\n", b); // 100
	return 0;
}


// 声明外部变量
extern int g_val;

int main()
{
	printf("%d\n", g_val);
	return 0;
}


// 1. 字面常量
int main()
{
	3.14; // 浮点型字面常量

}


// 2. const修饰的的常变量
int main()
{
	// 一个变量不能被改变我们就说具有常属性 - 不能被改变的属性
	const int a = 100;
	a = 200;
}


int main()
{
	const int n = 100; // n不是常量，只是具有常属性，不能被修改，n还是变量
	int arr[n] = { 0 }; // ERROR
	return 0;
}


// 3. #define 定义的标识符常量
#define MAX 100
int main()
{
	int a = MAX;
	printf("a = %d\n", a); // 100

	// 可用于数组
	int arr[MAX] = { 0 };
	return 0;
}


// 4. 枚举常量  枚举：一一列举
// enum - 枚举关键字
// enum Sex - 枚举类型
enum Sex
{
	// 枚举的可能取值 - 枚举常量
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = MALE; // 表示性别的变量

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	// 枚举常量默认从0开始递增 0 1 2
	return 0;
}


// 赋初值可以更改，枚举常量不能改
enum Sex
{
	MALE = 3,
	FEMALE = 7,
	SECRET
};

int main()
{
	// MALE = 4; // ERROR
}


// C99中引入一个：变长数组
int main()
{
	const int n = 3;
	int arr[n] = { 0, 1, 2 }; // 若编译器支持C99标准变长允许使用变量指定数组
	printf("%d", arr[0]);
	printf("%d", arr[1]);
	printf("%d", arr[2]);
	return 0;
}


// 字符串
int main()
{
	// char - 字符类型
	// 'a' - 字符:有单引号引起是
	// "abcdef" - 字符串:由双引号引起的一串字符
	"abcdef"; // 字符串字面值

	char ch[10] = "abcdef"; // 用abcdef初始化数组 
	// 其中有七个字符abcdef\0 剩下三个字符默认放\0 --abcdef\0\0\0\0
	printf("%s\n", ch); // %s
	return 0;
}


int main()
{
	char ch1[] = "abcdef";
	printf("%s\n", ch1);

	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
	// 单个字符打印时，没有\0，此时要添加'\0'，否则会出现乱码
	printf("%s\n", ch2);
}


#include <string.h>
int main()
{
	char ch1[] = "abcdef";
	printf("%d\n", strlen(ch1));
	// stelen 库函数 - 求字符串长度的 \0是字符串结束标志 不算长度 结果都是6

	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
	printf("%d\n", strlen(ch2));
	return 0;
}


// 转义字符
int main()
{
	printf("%s\n", "c:\test\test.c"); // c:      est     est.c
	printf("%s\n", "c:\\test\\test.c");
}


int main()
{
	// 三字母词
	// ??) --> ]
	// ??( --> [
	printf("%s\n", "????)");
	// 若支持三字母词， 要加上转义字符 ??\?\?)

	printf("%c", '\''); // 打印单引号
	return 0;
}


int main()
{
	printf("%c\n", '\065');

	// 十进制123 -- 1*10^2 + 2*10^1 + 3*10^0 = 100+20+3 = 123
	// 八进制065 -- 0*8^2 + 6*8^1 +5*8^0 = 48+5 = 53
	// 8进制的065转换10进制是：53
	// \ddd - ddd的8进制数字转成10进制后的值，作为ASCII值所代表的字符
	// 53对应的字符是5
	printf("%c\n", '5');
	return 0;
}


int main()
{
	printf("%c\n", '\x51');
	// 16进制51 -- 5*16^1 + 1*16^0 = 80+1 = 81
	// 81对应得ASCII码值是Q
	return 0;
}


// 程序输出什么？
int main()
{
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	// 八进制数里没有8 8不算入\32
	return 0;
}


int main()
{
	// C++注释风格
	// 创建整型变量a，并复制10
	int a = 10;

	/* C语言注释风格
	int b = 20;
	*/

	return 0;
}


// 选择语句
int main()
{
	int input = 0;
	printf("加入比特\n");
	printf("好好敲代码（1/0）?\n");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("好offer\n");
	}
	else
	{
		printf("卖红薯\n");
	}
	return 0;
}


int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line < 20000)
	{
		printf("敲代码：%d\n", line);
		line++;
	}

	if (line >= 20000)
	{
		printf("好offer\n");
	}

	return 0;
}


// 函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	scanf("%d %d", &num1, &num2);

	sum = Add(num1, num2);

	printf("%d\n", sum);
	return 0;
}


// 数组
// 一种相同类型元素的集合
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", arr[5]);
	return 0;
}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}


// 操作符
// 1. 算术操作符  + -*/ %
int main()
{
	int a = 5 / 2; // 商2余1
	float b = 5 / 2;
	float c = 5 / 2.0; // 左右有一个浮点数 就是浮点数除法

	printf("%d\n", a); // 2
	printf("%f\n", b); // 2.000000
	printf("%f\n", c); // 2.500000

	return 0;
}


// % - 取模（余） 得到的是整除之后的余数
int main()
{
	int a = 7 % 2; // 3 …… 1
	printf("%d\n", a);
	return 0;
}


// 移位操作符
//>> 右移操作符
int main()
{
	int a = 6; // 110
	// 4个字节 32bit
	// 移动的是二进制位
	// 00000000000000000000000000000110
	//  00000000000000000000000000001100 右边补0 -- 12
	int b = a << 1;
	printf("%d", b);
	return 0;
}