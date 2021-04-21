// 1.�������Ӵ�С���
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	// a�з����ֵ b��� c�з���Сֵ
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}


// 2.��ӡ1-100֮������3�ı���������
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d", i);
	}
	return 0;
}


// 3.�������������Լ��
#include <stdio.h>

int main()
{
	int m = 24;
	int n = 18;
	int r = 0;
	scanf_s("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	// �Ż� while(r=m%n) ʡ��r=m%n
	printf("%d\n", n);
	return 0;
}


// 4.��ӡ1000-2000�������
#include <stdio.h>

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		// �ж����귽����
		// 1. �ܱ�4�������Ҳ��ܱ�100����
		// 2. �ܱ�400����
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}
	// �Ż�
	// if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	// {
	//  	printf("%d ", year);
	//   	count++;
	// }
	printf("\ncount = %d\n", count);
	return 0;
}


// 5.��ӡ100-200֮�������
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		// �ж�����������1. �Գ���  ����2->i-1
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

// ��ƽ���Ƚ� i=a*b ��a��b��������һ������<=��ƽ��i
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	// sqrt - ��ƽ������ѧ�⺯��
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}

// �Ż� for (i = 101; i <= 200; i+=2) �ų�����ż�� ���Ч��


// ��ҵ�� 1.����1-100���ٸ�����9  -- �ж��ٸ�9��������9������
#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	// 9 19 29 39... 99ʮ�� 90 91 92... 99ʮ�� 
	printf("count = %d\n", count);
	return 0;
}


// 2. ������� ����1/1 - 1/2 + 1/3 - 1/4 +1/5... +1/99 -1/100 ��ֵ
#include <stdio.h>

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%if\n", sum);
	return 0;
}


// 3. ��ӡ10�����е����ֵ
#include <stdio.h>

int main()
{
	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
	int max = arr[0]; // ���ܵ���0 ���⸺���Ƚ� �ӵ�һ������ʼ 
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max = %d\n", max);
	return 0;
}


// 4. ����Ļ�����9*9�˷��ھ���
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d%d=%-2d ", i, j, i * j); // -2�����
		}
		printf("\n");
	}
	return 0;
}


// ������ 1. ����һ������� 2. ������
#include <stdio.h>
#include <time.h>

void menu()
{
	printf("############################\n");
	printf("######  1. play   0. exit###\n");
	printf("############################\n");
}

void game()
{
	// ����һ�������
	int ret = 0;
	int guess = 0; // ���ܲµ�����
	// ��ʱ����������������������ʼ��
	// time_t time(time_t *timer)
	ret = rand() % 100 + 1; // RAND_MAX - 32767  ���������Χ����100��
    // printf("%d\n", ret); // ��ֱ�Ӵ�ӡ���ֵ ��while�³���
	while (1)
	{
		printf("�������:>");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�µ���\n");
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}