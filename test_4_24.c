/* ����һ��ͷ�ļ�add.h 
#ifndef __ADD_H__
#dendef __ADD_H__
int Add(int x, int y); // ����������
#endif
����һ��Դ�ļ�add.c
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


// �����ݹ�  --�Ѵ��»�С
#include <stdio.h>

int main()
{
    // ջ�� �ֲ������������β�
    // ���� ��̬���ٵ��ڴ桢malloc��calloc
    // ��̬�� ȫ�ֱ�����static���εı���
    printf("hehe\n"); // ��ѭ����ӡ stack overflowջ���
    main();
    return 0;
}


// ��1. ����һ�������� ����˳���ӡ����ÿһλ ��������1234 ���1 2 3 4
#include <stdio.h>

void print(int n)
{
    if (n > 9) // ����1
    {
        print(n / 10); // ����2
    }
    printf("%d", n % 10);
}

int main()
{
    unsigned int num = 0;
    scanf_s("%d", &num);
    print(num); // �ݹ�
    return 0;
}
// �ݹ�Ҫ��1. ���������������������������������ʱ�򣬵ݹ�㲻�ټ���
// 2. ÿ�εݹ����֮��Խ��Խ�ӽ������������


// ��2. ��д��������������ʱ���������ַ����ĳ���
#include <stdio.h>

int my_strlen(char* str)
{
    /*int count = 0;
    while (*str != '\n')
    {
        count++;
        str++;
    }
    return count; ��Ŀ����������ʱ���� */ 
    if (*str != '0') // ����1
        return 1 + my_strlen(str + 1); // ����2
    else
        return 0;
}

int main()
{
    char arr[] = "bit";
    // int len = strlen(arr); // ���ַ�������
    // printf("%d\n", len);
    int len = my_strlen(arr); // arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
    printf("len = %d\n", len);
    return 0;
}


// �ݹ������
#include <stdio.h> // ��3. ��n�Ľ׳ˣ������������

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

int Fac2(int n) // �ݹ�
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
    ret = Fac1(n); // ѭ���ķ�ʽ
    ret = Fac2(n); // �ݹ�
    printf("%d\n", ret);
    return 0;
}


// ��4. ���n��쳲��������������������
#include <stdio.h> 

/* int count = 0; */
int Fib(int n)
{
    /*if (n == 3) // ���Ե�����쳲��������ļ������
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
    // 쳲���������ǰ������֮�͵��ڵ�������
    int n = 0;
    int ret = 0;
    scanf_s("%d", &n);
    // TDD - ������������ -- ��д������ ��д����
    ret = Fib(n);
    printf("ret = %d\n", ret);
    /* printf("count = %d\n", count) */
    return 0;
} // 4��57 ����


#include <stdio.h>

int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while (n > 2) // ѭ���ķ���
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

// ���������� ������̨