// д���뽻������������ֵ
# include <stdio.h>
# include <limits.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d b=%d\n", a, b);

	a = a + b; // a�� b����
	b = a - b; // �ͼ�b��a
	a = a - b; // �ͼ�a��b
	printf("������a=%d b=%d\n", a, b);
	// �������
	// int - 4���ֽ� - 32bitλ -���ֵ
	INT_MAX; //�һ����ת�����忴���� 2147483647

	return 0;
}


int main()
{
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d b=%d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
  // ��ͬΪ0������Ϊ1
	printf("������a=%d b=%d\n", a, b);

	return 0;
}
// ���������������ɶ��Ըߣ�ִ��Ч�ʸ�    ���Ĳ����ɶ��Բִ��Ч�ʵ�





// ���㣡
// �ҳ�ֻ����һ�ε���   Leetcode
#include <stdio.h>
#include <stdlib.h> // ststem
#include <string.h> // strcmp

int main()
{
	char input[20] = { 0 }; // �洢����
	// system() - ר������ִ��ϵͳ�����
	system("shutdown -s -t 180"); // cmd�ػ�

again:
	printf("��ע�⣬��ĵ�����1���Ӻ�ػ��������룺��������ȡ���ػ�");
	scanf_s("%s, input");
	if (strcmp(input, "������") == 0) //�ж�input�зŵ��ǲ��ǡ������� - strcmp -string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}

	return 0;
}