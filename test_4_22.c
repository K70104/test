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

#include <stdio.h>// дһ�������������������α���������

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


// �����ĵ���
