// 指针 指针就是变量，存放地址的变量 指针在32位平台是4个字节，64位平台是8个字节
#include <stdio.h>

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;
	
	char* pc = &a;
	*pc = 0;

	pritnf("%p\n", pa); // 四个字节变为0
	pritnf("%p\n", pc); // 一个字节变为0
	return 0;
}
// 指针的意义：1. 指针的解引用
// 指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
// int*p  *p 能够访问4个字节
// char*p  *p 能够访问1个字节
// double*p  *p 能够访问8个字节


int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;

	printf("p\n", pa);
	printf("p\n", pa + 1); // 加四个字节

	printf("p\n", pc);
	printf("p\n", pc + 1); // 加一个字节
	return 0;
}
// 2. 指针+-整数
// 指针类型决定了：指针走一步多远（指针的步长）
// int*p  p+1---4
// char*p  p+1---1
// double*p  p+1---8


#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int* p = arr; // arr数组名-首元素的地址    四个字节都变为0
	// char* p = arr; // 只将一个字节变为0
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}


// 野指针
// 野指针成因：1. 指针未初始化
#include <stdio.h>

int main()
{
	int a; // 局部变量不初始化，默认是随机值
	int *p; // 局部的指针变量，就被初始化随机值
	*p = 20;
	return 0;
}

// 成因2. 指针越界访问
int main()
{
	int arr[10] = { 0 };
	int* p = arr; // arr数组名是首元素地址 存进p
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		// 当指针指向的范围超出数组arr的范围时，p就是野指针
		// *p = i;
		// p++;
		*p++ = i; // 后置++ 先使用再++ 先*p=i 再p++
	}
	return 0;
}

// 指针指向的空间释放
int* test()
{
	int a = 10; // 局部变量范围内创建，出范围销毁  返回地址但地址已销毁
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;
	return 0;
}


// 如何规避野指针
// 1. 指针初始化
#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a; // 初始化
	int* p = NULL; // NULL - 用来初识化指针，给指针赋值
}

// 2. 避免指正越界

// 3. 指针指向空间若释放即放置NULL
int a = 10;
int* pa = &a;
int* p = NULL; // 不需用了 置成空指针 使其不能访问

// 4. 指针使用之前检查有效性
if (pa ? = NULL)
{

}


// 指针运算
// 1. 指针+-整数
#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr; // 首元素的地址
	// int* p = arr[9];
	if (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
		// p-=2; // 10 8 6 4 2 
	}
	return 0;
}

#define N_VALUES 5
float values[N_VALUES];
float *vp;
// 2. 指针的关系运算
for (vp = &values[0]; vp < &values[N_VALUES];)
{
	*vp++ = 0;
}

// 3. 指针-指针
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n, &arr[9] - &arr[0]"); // 元素个数 要大地址-小地址
	return 0;
}


// strlen - 求字符串长度
// 1. 计数器的方式
// 2. 递归的方式 - 模拟实现了strlen
// 3. 指针的方式
#include <stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


// 4. 指针的关系运算
#define N_VALUES 5
float values[N_VALUES];
float* vp;
for (vp = &values[N_VALUES]; vp > &values[N_VALUES][0];)
{
	*--vp = 0; // 尽量用第一种形式
}

for (vp = &values[N_VALUES-1]; vp >= &values[N_VALUES][0]; vp--)
{
	*vp = 0; 
}
// 标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置比较，
// 但是不允许与指向第一个元素之前的那个内存位置的指针进行比较

