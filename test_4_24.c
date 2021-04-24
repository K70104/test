/* 创建一个头文件add.h 
#ifndef __ADD_H__
#dendef __ADD_H__
int Add(int x, int y); // 函数的声明
#endif
创建一个源文件add.c
int Add(int x, int y)
{
    return x + y;
}
*/
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int sum = Add(a, b);
    printf("%d\n", sum);
    return 0;
}


// 函数递归  --把大事化小
#include <stdio.h>

int main()
{
    // 栈区 局部变量、函数形参
    // 堆区 动态开辟的内存、malloc、calloc
    // 静态区 全局变量、static修饰的变量
    printf("hehe\n"); // 死循环打印 stack overflow栈溢出
    main();
    return 0;
}


// 例1. 接受一个整形数 按照顺序打印它的每一位 例：输入1234 输出1 2 3 4
#include <stdio.h>

void print(int n)
{
    if (n > 9) // 条件1
    {
        print(n / 10); // 条件2
    }
    printf("%d", n % 10);
}

int main()
{
    unsigned int num = 0;
    scanf_s("%d", &num);
    print(num); // 递归
    return 0;
}
// 递归要求：1. 存在限制条件，当满足这个限制条件的时候，递归便不再继续
// 2. 每次递归调用之后越来越接近这个限制条件


// 例2. 编写函数不允许创建临时变量，求字符串的长度
#include <stdio.h>

int my_strlen(char* str)
{
    /*int count = 0;
    while (*str != '\n')
    {
        count++;
        str++;
    }
    return count; 题目不允许创建临时变量 */ 
    if (*str != '0') // 条件1
        return 1 + my_strlen(str + 1); // 条件2
    else
        return 0;
}

int main()
{
    char arr[] = "bit";
    // int len = strlen(arr); // 求字符串长度
    // printf("%d\n", len);
    int len = my_strlen(arr); // arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
    printf("len = %d\n", len);
    return 0;
}


// 递归与迭代
#include <stdio.h> // 例3. 求n的阶乘（不考虑溢出）

int Fac1(int n)
{
    int i = 0;
    int ret = 1;
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }
    return ret;
}

int Fac2(int n) // 递归
{
    if (n <= 1)
        return 1;
    else
        return n * Fac2(n - 1);
}

int main()
{
    int n = 0;
    int ret = 0;
    scanf_s("%d", &n);
    ret = Fac1(n); // 循环的方式
    ret = Fac2(n); // 递归
    printf("%d\n", ret);
    return 0;
}


// 例4. 求第n个斐波那契数（不考虑溢出）
#include <stdio.h> 

/* int count = 0; */
int Fib(int n)
{
    /*if (n == 3) // 测试第三个斐波那契数的计算次数
    {
        count++;
    }*/
    if (n <= 2)
        return 1;
    else
        return Fib(n - 1) + Fib(n - 2);
}

int main()
{
    // 斐波那契数：前两个数之和等于第三个数
    int n = 0;
    int ret = 0;
    scanf_s("%d", &n);
    // TDD - 测试驱动开发 -- 先写怎用用 再写过程
    ret = Fib(n);
    printf("ret = %d\n", ret);
    /* printf("count = %d\n", count) */
    return 0;
} // 4分57 负数


#include <stdio.h>

int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2) // 循环的方法
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
}

int main()
{
    int n = 0;
    int ret = 0;
    scanf_s("%d", &n);
    ret = Fib(n);
    printf("ret = %d\n", ret);
    return 0;
}

// 汉纳塔问题 青蛙跳台