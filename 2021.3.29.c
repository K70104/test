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
int Add(int x, int y)
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
	sum1 = Add(num1, num2);
	sum2 = Add(a, b);
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
    
	int arr[10] = {0}; //10个整型元素的数组
	int sz = 0;
	//计算数组的元素大小
	//个数 = 数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);

	return 0;
}