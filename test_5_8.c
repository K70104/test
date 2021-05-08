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
