// Debug - 调试版本  包括调试信息，并且不作任何优化，便于程序员调试程序
// Release - 发布版本  进行各种优化使程序在代码大小和运行速度上都是最优的，以便用户更好地使用

// VS环境 调试技巧
// F5-启动调试  和F9配合使用

// F9 切换断点
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d ", 10 - 1); // F9断点
	}
	return 0;
}

// F10 逐过程    F11 逐语句（进入函数内部使用）
// Shift+F11 跳出函数    Shift+F9 快速监视    Shift+F5 停止调试
// F10调试后才能用  调试-窗口  1.监视窗口  2.内存窗口-观察内存变化信息  3.反汇编  4.寄存器  5.调用堆栈


#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0; // 最终保持的结果
	int n = 0;
	int ret = 1; // 计算n的阶乘
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		int j = 0;
		ret = 1; // 调试找错误 发现ret需要初始化为1 
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 0; // 死循环
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// VC6.0 环境下 <=10 死循环
	// gcc 编译器 <=11 死循环
	// VS2013 <= 死循环
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
// 1. 栈区的默认使用：
// 先使用高地址的空间，再使用低地址的空间
//
// 2. 数组随着下标的增长，地址是由低到高变化
//
// 死循环原因：main函数内部创建了i和arr 都是局部变量 放在栈上 因为占空间的使用习惯是1... 所以i在arr上面创建 又因为2...
// arr往后越界 就有可能在越界的过程中遇到i 而在改变数组元素的时候 越界改变的时候 就有可能将i改变为0 死循环

// 上述死循环代码	在Debug版本中错误  在Release版本中正常
// Release中优化 i在arr下面存放



#include <stdio.h>

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src; // '0'
}

int main()
{
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2); // strcpy 字符串拷贝
	printf("%s\n", arr1);
	return 0;
}


// 优化4
#include <stdio.h>
#include <assert.h>
// 优化4 char
char* my_strcpy(char* dest, const char* src) // 优化3 const 避免写反 src不需要改变，改的是dest
{
	char* ret = dest;
	// 优化1
	assert(dest != NULL);// 断言
	assert(src != NULL);// 断言

	//优化2
	// 把src指向的字符串拷贝到dest指向的空间，包括'\0'字符
	while (*dest++ = *src++) // \0 ASCII值是0 
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2); // strcpy 字符串拷贝
	printf("%s\n", arr1);
	return 0;
}



int main()
{
	const int num = 10;
	const int* p = &num;
	*p = 20; // err const 放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p（num）的值

	int* const p = &num;
	int n = 100;
	p = &n; // const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了

	printf("%d\n", num);
	return 0;
}



#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL); // 保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = len_strlen(arr);
	printf("%d\n", len);
	return 0;
}