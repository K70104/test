#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// stdio - ��׼�������

// main�����ǳ�������
// һ��������main�������ҽ���һ��
int main()
{
	// �⺯�� - ��ӡ���� - �������
	printf("hello world!\n");
	return 0;
}


int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	// 1 2 4 4 8 4 8
	return 0;
}


int main()
{
	char ch = 'e';
	printf("%c\n", ch); // e
	printf("%d\n", ch); // 101
	return 0;
}


int main()
{
	// age�Ǳ��� ���Ա��ı�
	short age = 10;
	age = 11;
	printf("%d\n", age);
	return 0;
}


int g = 100; // ȫ�ֱ���
int main()
{
	int a = 10; // �ֲ����� �������ڲ�
	return 0;
}


int a = 100;
int main()
{
	int a = 10;
	printf("%d\n", a); // 10 �ֲ�����
	return 0;
}


int main()
{
	// 2���������
	int num1 = 0;
	int num2 = 0;
	// ����
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	// ���
	printf("%d\n", sum);
	return 0;
}