// д���뽻������������ֵ
# include <stdio.h>
# include <limits.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d b=%d\n", a, b);

	a = a + b; // a����a��b��ֵ b����
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





// ָ��
#include <stdio.h>

int main()
{
	int a = 0; // 4���ֽ�
	int* p = &a; // &- ȡ��ַ    p����������a�ĵ�ַ
	*p = 20; // & - �����ò�����    
	// p - ָ����� ��һ�ֱ�����������ŵ�ַ��
	// int* - p������
	printf("%p\n", &a); // ��ַ��%p
	printf("a = %d\n", a);

	return 0;
}


#include <stdio.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);

	return 0;
}


// ָ������Ĵ�С
// ָ���С��32λƽ̨ʽ4���ֽڣ�64λ��8���ֽ�
#include <stdio.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));

	return 0;
}



// �ṹ��
#include <stdio.h>

struct Book
{
	char name[20]; // C���Գ������
	short price; // 55
};
int main()
{
	struck Book b1 = { "C���Գ������"�� 55 };
	struck Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	b1.price = 15;
	printf("�޸ĺ�%d\n", pb->price);

	rturn 0;
}