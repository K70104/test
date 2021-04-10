#include <stdio.h>

//循环 
int main()
{
	int line = 0;
	printf("加入\n");

	while (line < 2000)
	{
		printf("敲一行代码: %d\n", line);
		line++;
	}
	if (line > 2000);
	printf("成功\n");
	return 0;
}


//自定义函数
int add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 1;
	int num2 = 2;
	int a = 3;
	int b = 4;
	int sum1 = 0;
	int sum2 = 0;

	// sum = num1 + num2; 代替
	sum1 = add(num1, num2);
	sum2 = add(a, b);
	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);

	return 0;
}


//数组
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; // 定义一个存放10个整数数字的数组
	// char ch[10] 字符类型    float arr2[5]

	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);  // 下标方式访问元素
		i++;
	}
	// arr[下标]
	// 数组的下标从0开始 0-9
}





//操作符
//算术操作符 + - * / %
int main()
{
	int a = 5 % 2; // 取模
	printf("%d\n", a);
	return 0;
}



//移位操作符    << 左移  >> 右移  2进制
int main()
{
	int a = 1;
	// 整型1占4个字节，32bit位    000000000000000000000000000000000000001
	int b = a << 1;
	// 左移右补 左移1个0, 右补1个0, 10转化成十进制1*2^1 + 0*1^0 = 2 
	printf("%d\n", b);
	// a不变
	return 0;
}



//位操作符    &按位与  |按位或  ^按位异或
int main()
{
	int a = 3;
	int b = 5;
	// 3 -> 011
	// 5 -> 101
	int c = a & b;
	// 0为假 非0为真  并且关系001
	printf("%d\n", c);

	int d = a | b;
	printf("%d\n", d);
	// |按位或：只要有1个真就为真    111 -> 1*2^2 + 1*2^1 +1*2^0 = 7

	int e = a ^ b; // ^不是次方是异或
	printf("%d\n", e);
	// 异或的计算规律：
	// 对应的二进制位相同,则为0；
	// 对应的二进制位相异,则为1
	// 110 -> 6

	return 0;
}



//赋值操作符
int main()
{
	int a = 10;
	a = 20; // =赋值 ==判断是否相等
	a = a + 10; //1
	a += 10; //2
	a = a & 2; //1
	a %= 2; //2
	// 复合赋值符 += -= *= /= &= ^= |= >>= <<=
	return 0;
}



//单目操作符 双目操作符 三目操作符
//!逻辑反操作 -负值 +正值 sizeof操作数的类型长度
int main()
{
	int a = 10;
	int b = 20;
	a + b;  //+双目操作符，左右两个操作数

	int a = 10;
	printf("%d\n", a); // 0假 非0真
	printf("%d\n", !a); // !逻辑反操作  10是真，变为假0

	int a = -2; // -负值
	int b = -a;
	int c = +3; // 正值  +一般省略

	int a = 10;
	printf("%d\n", sizeof(a)); // sizeof 计算的是变量/类型所占空间的大小，单位是字节
	printf("%d\n", sizeof(int)); // 意思一样 4

	int arr[10] = { 0 }; //10个整型元素的数组
	int sz = 0;
	//计算数组的元素大小
	//个数 = 数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);

	return 0;
}


// ~第一个数的二进制按位取反  -- ++ 前置、后置
#include <stdio.h>

int main()
{
	int a = 0; // 4个字节，32bit位
	int b = ~a; // b是有符号的整形
	// 00000000000000000000000000000000
	// 11111111111111111111111111111111  有符号的整形最高位是1为负，0为正
	// 原码 反码 补码    原码符号位不变，其余按位取反得反码；反码加一得补码。补码减一得反码；反码按位取反得原码。 
	// ~ 按（2进制）位取反
	// 负数在内存中存储的时候，存储的是二进制的补码
	printf("%d\n", b); //使用的，打印的是这个数的原码
	// 11111111111111111111111111111111补
	// 11111111111111111111111111111110反
	// 10000000000000000000000000000001原  1为负，-1
	return 0;
}
// 只要是整数，内存中存储的都是二进制的补码
// 正数  原码，反码，补码 相同
// 负数  按以上原码按位取反得反码，反码加一得补码


#include <stdio.h>
// -- ++ 前置、后置
int main()
{
	int a = 10;
	int b = a++; // 后置++，先使用再++
	printf("a = %d b = %d\n", a, b); // 11 10

	int c = 10;
	int v = ++c; // 前置
	printf("c =%d v = %d\n", c, v); // 11 11

	return 0;
}


#include <stdio.h>

int main()
{
	int a = (int)3.14; // (类型) 强制类型转换 
	return 0;
}



// 关系操作符  >  >=  <  <=  != 用于测试“不相等”  == 用于测试“相等”



// 逻辑操作符  && 逻辑与  ||逻辑或
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 5;

	int c = a && b; // 两个都为真则为真 
	printf("c = %d\n", c); // 0为假 非0为真

	int e = a || b; // 只要有一个为真则为真
	printf("e = %d\n", e);
	return 0;
}



//条件操作符  exp1 ? exp2 : exp3; // 先执行exp1；若为真，执行exp2为整个表达式的结果；若为假，执行exp3为整个表达式的结果
#include <stdio.h>
//三个操作数 三目操作符
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;

	max = (a > b ? a : b);
	printf("max = %d\n", max);

	//if (a > b)
	//	max = a;
	//else
	//	max = b;

	return 0;
}



// 逗号表达式  exp1, exp2, exp3, ...expn



// 下标引用、函数调用和结构成员  []  ()  .  ->
#include <stdio.h>

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//int arr[10] = { 0 };
	//arr[4]; // [] - 下标引用操作符

	int a = 10;
	int b = 20;
	int sum = add(a, b); // () - 函数调用操作符

	return 0;
}





// 常用关键字
// auto break case char const contine default do double else enum枚举
// extern引入外部符号 float单精度浮点数 for goto语句 if int long 
// register寄存器关键字 return short signed有符号的 sizeof计算大小
// static静态的 struct结构体关键字 switch typedef类型定义 union联合体/共用体 
// unsigned void空 volatile while循环    不能与符号名冲突

//auto int a = 10; // 局部变量-自动变量 auto自动省略
// register - 寄存器关键字    register int a = 10; // 建议把a定义成寄存器变量 编译器自行判断
// signed - 有符号的    int 定义的变量是有符号的  signed int - signed省略    无符号：unsigned  ---unsigned int num = 1;无符号数
// typedef - 类型定义/类型重定义    unsigned int  u_int
// static - 静态的


#include <stdio.h>

void test()
{
	int a = 1;
	a++;
	printf("a = %d\n", a); // 22222
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	return 0;
}


#include <stdio.h>

void test()
{
	static int a = 1; // a是一个静态的局部变量    
	// static的作用是修饰局部变量，局部变量的生命周期边长
	a++;
	printf("a = %d\n", a); // 23456
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	return 0;
}


#include <stdio.h>

int main()
{
	// 新建一个项ad.c 写出int g_val = 20  定义可用于所有
	// 若加上static 则无法使用    
	// static修饰全局变量 改变了变量的作用域
	// 静态的全局变量只能在自己所在的源文件内部使用 出了源文件就无法使用了
	extern int g_val; // ectern 声明外部符号
	printf("g_val = %d\n", g_val);
	return 0;
}