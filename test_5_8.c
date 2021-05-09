// 操作符

// 算术操作符 + - * / %    除了%操作符之外，其他操作符可以作用于整数和浮点数

// 右移操作符
// 1. 算术右移 - 右边丢弃，左边补原符号位 0为正1为负
// 2. 逻辑右移 - 右边丢弃，左边补0
#include <stdio.h>

int main()
{
	int a = 16;
	// >> 右移操作符 移动的是二进制位
	// 00000000000000000000000000010000
	int b = a >> 2;
	printf("%d\n", b);
	return 0;
}

int main()
{
	int a = -1;
	int b = a >> 1;
	// 整数的二进制表示有：原码、反码、补码
	// 存储到内存的是补码
	// 原码 1000000000000000000000000000001
	// 反码 1111111111111111111111111111110
	// 补码 1111111111111111111111111111111
	printf("%d\n", b);
	return 0;
}


//左移操作符 左边丢弃，右边补0
#include <stdio.h>

int main()
{
	int a = 5; // 101
	int b = a << 1;
	// 000000000000000000000000000101  8+2=10
	printf("%d", b);
	return 0;
}

// 对于移位运算符，不能移动负数位，这是标准未定义
// int num = 10;
// num >> -1;


// 位操作符  &按位与  |按位或  ^按位异或  操作数必须是整数（移位操作数同整数）
// & 只要有一个为0则为0  | 只要有一个1则为1  ^ 相同为0，相异为1
#include <stdio.h>

int mian()
{
	int a = 3;
	int b = 5;
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;

	a = a + b; // 加减法 可能会溢出
	b = a - b;
	a = a - b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	return 0;
}


#include <stdio.h> // 求一个整数存储在内存中的二进制中1的个数

int main()
{
	int num = 0;
	int count = 0;
	scanf_s("%d", &num); // 3
	// num%1 == 1
	// 00000000000000000000000000000011  3 011
	// 00000000000000000000000000000001  1 001
	// 00000000000000000000000000000001  011&001=1 count++ 右移001&001=001=1 count++

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}


// 复合赋值符  
// a = a >> 1 --- a >>= 1    a = a & 1 --- a &= 1

// 单目操作符：只有一个操作数
#include <stdio.h>

int main()
{
	int a = 0;
	if (a)
	{
		printf("h\n");
	}
	if (!a) // 逻辑反操作符
	{
		printf("u\n");
	}


	int b = -5;
	b = -b; // 负值 （正值省略）


	int c = 10;
	int* p = &c; // 取地址操作符
	// p - 指针变量  int* - p的类型
	*p = 20; // * - 解引用操作符 


	int e = 10; // sizeof操作数的类型长度（以字节为单位）
	char r = 'o';
	char* p = &r;
	int arr[10] = { 0 };
	// sizeof计算的是变量所占内存空间的大小，单位是字节
	printf("%d\n", sizeof(e)); // 4  --e可替换为int
	printf("%d\n", sizeof(r)); // 1  --char
	printf("%d\n", sizeof(p)); // 32位操作系统是4  --char*
	printf("%d\n", sizeof(arr)); // 4*10=40  --int [10]

	short s = 0;
	int z = 10;
	printf("%d\n", sizeof(s = z + 5)); // 2 sizeof内部的表达式不参与运算
	printf("%d\n", s); // 0


	int v = 0;
	// ~按（二进制）位取反
	// 00000000000000000000000000000000
	// 11111111111111111111111111111111 - 补码
	// 11111111111111111111111111111110 - 反码
	// 10000000000000000000000000000001 - 原码 打印是原码 -1
	printf("%d\n", ~v);

	return 0;
}

#include <stdio.h>

int main()
{
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n", a); // 15
	// 00000000000000000000000000001011
	// 00000000000000000000000000000100
	// 1<<2
	// 00000000000000000000000000000001
	// 00000000000000000000000000001111

	a = a & (~(1 << 2));
	printf("%d\n", a); // 11
	// 00000000000000000000000000001111  & (~(1 << 2))
	// 11111111111111111111111111111011  ~(1 << 2)
	// 00000000000000000000000000000100  1<<2
	// 00000000000000000000000000001011  a & (~(1 << 2))

	return 0;
}


// ++ -- 前置后置    * 解引用操作符    （类型） 强制类型转换
int main()
{
	int a = (int)3.14;
	return 0;
}


#include <stdio.h>

void test1(int arr[])
{
	printf("%d\n", sizeof(arr)); // 4 传地址 用指针接收 32/64操作系统arr是4/8
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch)); // 4 同上指针
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr)); // 40
	pritntf("%d\n", sizeof(ch)); // 10
	test1(arr);
	test2(ch);
	return 0;
}


// 逻辑将操作符  && - 逻辑与  || - 逻辑或
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 5;
	int c = a && b;
	int k = a || b;
	printf("%d\n", c); // 只要有一个假就为假 0
	printf("%d\n", k); // 只要有一个真就为真 1
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	// a++ 0 后面都不算了 a=1 b, c, d不变  1 2 3 4
	printf("a =%d\n b = %d\n c =%d\n d = %d\n", a, b, c, d);
	return 0;
}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	// a++ 1为真 后面不执行 a=2 b,c,d不变  2 2 3 4 
	printf("a =%d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	return 0;
}


// 条件表达式 exp1 ? exp2 : exp3
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	if (a > 5)
		b = 3;
	else
		b = -3;

	b = (a > 5 ? 3 : -3);

	return 0;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;

	if (a > b)
		max = a;
	else
		max = b;

	max = (a > b ? a : b);

	return 0;
}


// 逗号表达式  用逗号隔开的多个表达式
// 从左向右依次执行，整个表达式的结果是最后一个表达式的结果
int a = 1;
int b = 2;
int c = (a > b, a = b + 10, a, b = a + 1); // 逗号表达式    结果是最后一个表达式 a=b+10=12  b=a+1=12+1=13  c=13

if (a = b + 1, c = a / 2, d > 0) // 算出前两个表达式 判断最后一个 最后一个>0则条件为真


// 下标引用 函数调用 结构成员
int main()
{
	int a[10] = { 0 };
	a[4] = 10; // [] 的两个操作数是数组名a 和下标值4
	// 1 + 2; 加法操作符的两个操作数 
	return 0;
}


#include <stdio.h>

get_max(int x, int y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b); 	// 调用函数的时候()就是函数调用操作符
	// 操作数有三个 函数名max 参数a 参数b  函数操作数至少有1个-没有参数时
	printf("max = %d\n", max);
	return 0;
}


// 结构体
#include <stdio.h>

// 创建了一个结构体类型-struct Stu
struct Stu
{
	// 成员变量
	char name[20];
	int age;
	char id[20];
};

int main()
{
	int a = 10;
	// 使用struct Stu这个类型创建了一个学生对象s1， 并初始化
	struct Stu s1 = { "张三",20, "25768907531" };

	struct Stu* ps = &s1;

	printf("%s\n", ps->name);
	printf("%s\n", ps->age);
	// 结构体指针->成员名

	printf("*s\n", (*ps).name);
	printf("%d\n", (*ps).id);

	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);
	// 结构体变量。成员名

	return 0;
}


// 表达式求值
// 表达式求值顺序一部分是由操作符的优先级和结合性决定
// 有些表达式的操作数在求值的过程中可能需要转换为其他类型 1.隐式类型转换 2.

// 隐式类型转换  1. 整型提升 2. 算术转换
#include <stdio.h>

int main()
{
	char a = 3;
	// 00000000000000000000000000000011
	// 00000011 - a 二进制补码中只有8个比特位

	char b = 127;
	// 00000000000000000000000001111111
	// 01111111 - b

	// a和b如何相加
	// 00000000000000000000000000000011 char时有符号的char a整型提升时高位补充符号位0
	// 00000000000000000000000011111111 b补符号位0
	// 00000000000000000000000010000010 加
	// 负数补1 整数补0 无符号整型提升高位补0

	char c = a + b;
	// 10000010 - c
	// 11111111111111111111111110000010 - 补码
	// 11111111111111111111111110000011 - 反码
	// 10000000000000000000000001111100 - 原码
	// 126

	printf("%d\n", c);

	return 0;
}


int main()
{
	char a = 0xb6; // 8个比特位 b6-10110110 在if中比较时，a整型提升补符号位 所以不相等
	short b = 0xb600; // 同上
	int c = 0xb6000000;
	if (a == 0xb6)
		printf("a");
	if (b == 0xb600)
		printf("b");
	if (c == 0xb6000000) // 只打印c
		printf("c");
	return 0;
}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c)); // 1
	printf("%u\n", sizeof(+c)); // 4  c参与表达式运算，发生整型提升，sizeof(+c) -> int 是4个字节
	printf("%u\n", sizeof(!c)); // 1
	return 0;
}


// 算术转换 整型提升-小于整型 算数转换-大于等于整型
// long double, double, float, unsigned long int, long int, unsigned int, int 从大到小

// 操作符的属性 1. 操作符的优先性 2. 操作符的结合性 3.是否控制求值顺序
// 结合性 L-R 从左到右    
// && || ?: ,  控制求值顺序-逻辑与左边为假后面不计算，逻辑或左边为真后面不计算，条件操作符表达式1为真则表达式3不计算,逗号从左向右依次计算但起作用的是最后的表达式


// 问题表达式1 
a* b + c * d + e * f // 表达式没有唯一计算路径 先准备a*b c*d e*f 再+ 还是先算a*b 再算a*b + c*d
// 2
c + --c // 设c=1  情况1. 先准备c 再准备--c 再+  1+0=1  情况2. 先准备--c 再准备c 再++  0+0=0
// 3
int main()
{
	int i = 10;
	i = i-- - --i * (i == 3) * i++ + ++i; // ……
	printf("i = %d\n", i);
	return 0;
}
// 4
int fun()
{
	static int count = 1;
	return ++count;
}

int main()
{
	int answer;
	answer = fun() - fun() * fun(); // 谁先调用
	printf("%d\n", answer);
	return 0;
}
// 5
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}