// 函数调用exec((v1, v2), (v3, v4), v5, v6);中，实参的个数是4
// 逗号表达式 v2 v4 v5 v6
#include <stdio.h>

int main()
{
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d", arr[i][j]); // 123
			                         // 456
		}
		printf("\n");
	}
	return 0;
}


// 1. 创建一个整形数组 完成1. 函数init初始化数组为0  2.print()打印每个元素  3.reverse()函数完成数组元素逆置
#include <stdio.h>

void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// Init(arr, sz); // 把数组初始化为0
	Print(arr, sz); // 打印
	Reverse(arr, sz);
	Print(arr, sz);

	return 0;
}


// 2. 将数组A中的内容和数组B中的内容进行交换
#include <stdio.h>

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}


#include <stdio.h>

int main()
{
	int  arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr; // 把arr强制转换成short* 访问2个字节 加一是2个字节
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]); // 0 0 3 4 5
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int a = 0x11223344; // int四个字节 倒着放44 33 22 11 各占一个字节 
	char* pc = (char*)&a; // char* *pc解引用只能访问一个字节
	*pc = 0;
	print("%x\n", a); // 11223300
	return 0;
}


#include <stdio.h>

int i; // 全局变量 不初始化好默认是0
int main()
{
	i--;
	if (i > sizeof(i)) // sizeof()-计算变量/类型所占内存的大小>=0 无符号数
	{
		printf(">\n"); // >
		// 整型与无符号数相比 把i转化为无符号数
		// 10000000000000000000000000000001 -1
		// 11111111111111111111111111111110
		// 11111111111111111111111111111111 补码  转换为无符号数 最高位1变有效位-正数-原反补相同
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++; // c=8 b=7 a=8
	b += a++ + c; // b=23 a=9 逗号表达式 从左到右计算 最后一个是结果
	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
}


// 3. 统计二进制中1的个数
#include <stdio.h>

int count_bit_one(unsigned int n) // 无符号数 避免负数
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}

int count_bit_one(int n) // 用二进制补码判断
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			// -1
			// 10000000000000000000000000000001  -1原码
			// 11111111111111111111111111111110  -1反码
			// 11111111111111111111111111111111  -1补码
			// 00000000000000000000000000000001  1
			count++;
		}
	}
	return count;
}

int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
// n = n&(n-1)
// n 13
// 1101 n
// 1100 n-1
// 1100 n = n&(n-1)
// 1011 n-1
// 1000 n = n&(n-1)
// 0111 n-1
// 0000 n = n&(n-1)

int main()
{
	int a = 0;
	scanf_s("%d", &a);
	// 写一个函数求a的二进制 （补码）表示中有几个1
	int count = count_bit_one(a);
	printf("count = %d\n", count);
	return 0;
}


// 4. 求二进制中不同位的个数
#include <stdio.h>

get_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf_s("%d%d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}


// 5. 打印二进制的奇数位和偶数位  13579位是奇数位 2468是偶数位
#include <stdio.h>

void print(int m)
{
	int i = 0;
	print("奇数位:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	print("偶数位:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int m = 0;
	scanf_s("%d", &m);
	print(m);
	return 0;
}


// 6. 用指针打印数组内容
#include <stdio.h>

void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}


int Fun(int n)
{
	if (n == 5)
		return 2; // 调用函数Fun(2) 结果是16
	else
		return 2 * Fun(n + 1);
	// Fun3- Fun4- Fun5-  
	// n== 5 返回2  2*2- 2*4- 2*8
}


// 7. 输入9 打印9*9乘法口诀表 输入n 打印n*n乘法口诀表
#include <stdio.h>

print_table(n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j < i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	print_table(n);
	return 0;
}


// 8. 字符串逆序 编写一个函数reverse_string(char*string) 将字符串中的字符反向排序
#include <stdio.h>
#include <string.h>

void reverse_string(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef"; // fedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}