// goto���  ���ã�����Ƕ�׵����
#include <stdio.h>
#include <stdlib.h> // ststem
#include <string.h> // strcmp

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 180");
again:
	printf("�������ڹػ� �����룺������ ȡ���ػ�\n");
	scanf_s("%s", input);
	if (strcmp(input, "������") == 0) // �Ƚ������ַ�����strcmp()
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
		printf("�������ڹػ� �����룺������ ȡ���ػ�\n");
		scanf_s("%s", input);
		if (strcmp(input, "������") == 0) // �Ƚ������ַ�����strcmp()
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


// �⺯��
// www.cplusplus.com
// www.zh.cppreference.com www.en.cppreference.com
#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "bit";
	char arr2[20] = "###########";
	strcpy(arr2, arr1); // strcpy - string copy - �ַ�������
	printf("%s\n", arr2);
	return 0;
} // strlen - string length - �ַ��������й�


#include <stdio.h>

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5); // memory - �ڴ�  set - ����
	printf("%s\n", arr); // ***** world
	return 0;
}


// �Զ��庯��
#include <stdio.h> // дһ���������Ƚ���������С

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


#include <stdio.h> // �����������α���������

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


#include <stdio.h>// �ú����������������α���������

void Swap1(int x, int y) // �����������
{
	// ��ʵ�δ����βε�ʱ���β���ʵ����ʵ�ε�һ����ʱ������
	// ���βε��޸��ǲ���ı�ʵ�ε� 
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* pa, int* pb) // �β�
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
	Swap2(&a, &b); // ʵ��
	printf("a=%d b=%d\n", a, b);
	return 0;
}


// �����ĵ��� ��ֵ���� ��ַ����
#include <stdio.h> // ��1. дһ�������ж�һ�����ǲ�������

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++) // �Ż� j<=sqrt(n) ͷ�ļ�math.h
	{
		if (n % j == 0)
		{
			return 0;
		}
		return 1;
	}
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}


#include <stdio.h> // 2.дһ�������ж��Ƿ�Ϊ����

int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year)
	{
		if (1 == is_leap_year(year))
		{
			printf("%d ", year);
		}
	}
	return 0;
}


#include <stdio.h> // 3.дһ������ ʵ��һ��������������Ķ��ֲ���

int binary_search(int arr[], int k, int sz) // �����arr��������ָ�� ����ַ   ����sz
{
	// int sz = sizeof(arr) / sizeof(arr[0]); // 32ƽ̨4 ��һ��Ԫ��int-Ҳ��4 4/4=1 �ʲ�����Ԫ�ظ��� ��main����
	int left = 0;
	int right = sz - 1;
	while (left <= right) // С�ڵ���
	{
		int mid = (left + right) / 2; // ���м�Ԫ�ر�����ѭ����
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz); // ����sz
	if (ret == -1) // ����ҵ��ˣ�������������±� �Ҳ���������-1
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}


#include <stdio.h> // дһ������ ÿ����һ�ξͽ�num��ֵ����1

void Add(int* p)
{
	(*p)++; // *p++ ++������p
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}


// ������Ƕ�׵��ú���ʽ����
#include <stdio.h> // Ƕ�׵���

void new_line()
{
	printf("hehe\n");
}

void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}

int main()
{
	three_line();
	return 0;
}


#include <stdio.h> // ��ʽ����

int main()
{
	int len = 0;
	len = strlen("abc");
	printf("%d\n", len); // 1
	pritnf("%d\n", strlen("abc")); // 2 ��һ�������ķ���ֵ��Ϊһ����һ�������Ĳ���
	return 0;
}

#include <stdio.h>

int main()
{
	printf("%d", printf("%d", printf("%d", 43))); // 4321 printf����ֵ�Ǵ�ӡ���ַ��ĸ���
	// printf("%d", printf("%d", 2)); // 432
	// printf("%d", 1); // 4321
	return 0;
}


#include <stdio.h> // �����������붨��

int Add(int x, int y); // ��������

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b); // ��������
	pritnf("%d\n", sum);
	return 0;
}

int Add(int x, int y) // �����Ķ���
{
	int z = x + y;
	int z = z + y;
	return z;
}


#include <stdio.h>

int main()
{

	return 0;
}