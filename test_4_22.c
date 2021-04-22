// goto语句  作用：跳出嵌套的深层
#include <stdio.h>
#include <stdlib.h> // ststem
#include <string.h> // strcmp

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 180");
again:
    printf("三分钟内关机 若输入：我是猪 取消关机\n");
	scanf_s("%s", input);
	if (strcmp(input, "我是猪") == 0) // 比较两个字符串用strcmp()
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 180");
	while (1)
	{
		printf("三分钟内关机 若输入：我是猪 取消关机\n");
		scanf_s("%s", input);
		if (strcmp(input, "我是猪") == 0) // 比较两个字符串用strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


// 库函数
// www.cplusplus.com
// www.zh.cppreference.com www.en.cppreference.com
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "bit";
	char arr2[20] = "###########";
	strcpy(arr2, arr1); // strcpy - string copy - 字符串拷贝
	printf("%s\n", arr2);
	return 0;
} // strlen - string length - 字符串长度有关


#include <stdio.h>

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5); // memory - 内存  set - 设置
	printf("%s\n", arr); // ***** world
	return 0;
}


// 自定义函数
#include <stdio.h> // 写一个函数！比较两个数大小

int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);
	printf("max = %d\n", max);
	max = get_max(100, 200);
	printf("max = %d\n", max);
	return 0;
}


#include <stdio.h> // 交换两个整形变量的内容

int main()
{
	int a = 10;
	int b = 20;
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	tmp = a;
	a = b;
	b = tmp;
	printf("a=%d b=%d\n", a, b);
	return 0;
}

#include <stdio.h>// 写一个函数！交换两个整形变量的内容

void Swap1(int x, int y) // 不能完成任务
{ 
  // 当实参传给形参的时候，形参其实是伤实参的一份临时拷贝，
  // 对形参的修改是不会改变实参的 
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb) // 形参
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 10;
	int b = 20;
	// int tmp = 0;
	printf("a=5d b=%d\n", a, b);
	// Swap1(a, b);
	Swap2(&a, &b); // 实参
	printf("a=%d b=%d\n", a, b);
	return 0;
}


// 函数的调用
