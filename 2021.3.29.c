#include <stdio.h>

//ѭ�� 
int main()
{
	int line = 0;
	printf("����\n");

	while (line < 2000)
	{
		printf("��һ�д���: %d\n", line);
		line++;
	}
	if (line > 2000);
	    printf("�ɹ�\n");
	return 0;
}


//�Զ��庯��
int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int num1 = 1;
	int num2 = 2;
	int a = 3;
	int b = 4;
	int sum1 = 0;
	int sum2 = 0;

    // sum = num1 + num2; ����
	sum1 = Add(num1, num2);
	sum2 = Add(a, b);
	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);

	return 0;
}


//����
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; // ����һ�����10���������ֵ�����
	// char ch[10] �ַ�����    float arr2[5]

	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);  // �±귽ʽ����Ԫ��
		i++;
	}
	// arr[�±�]
	// ������±��0��ʼ 0-9
}


//������
//���������� + - * / %
int main()
{
	int a = 5 % 2; // ȡģ
	printf("%d\n", a);
	return 0;
}


//��λ������    << ����  >> ����  2����
int main()
{
	int a = 1;
	// ����1ռ4���ֽڣ�32bitλ    000000000000000000000000000000000000001
	int b = a << 1;
	// �����Ҳ� ����1��0, �Ҳ�1��0, 10ת����ʮ����1*2^1 + 0*1^0 = 2 
	printf("%d\n", b);
	// a����
	return 0;
}


//λ������    &��λ��  |��λ��  ^��λ���
int main()
{
	int a = 3;
	int b = 5;
	// 3 -> 011
	// 5 -> 101
	int c = a & b;
	// 0Ϊ�� ��0Ϊ��  ���ҹ�ϵ001
	printf("%d\n", c);
	
	int d = a | b;
	printf("%d\n", d);
	// |��λ��ֻҪ��1�����Ϊ��    111 -> 1*2^2 + 1*2^1 +1*2^0 = 7

	int e = a ^ b; // ^���Ǵη������
	printf("%d\n", e);
	// ���ļ�����ɣ�
	// ��Ӧ�Ķ�����λ��ͬ,��Ϊ0��
	// ��Ӧ�Ķ�����λ����,��Ϊ1
	// 110 -> 6

	return 0;
}


//��ֵ������
int main()
{
	int a = 10;
	a = 20; // =��ֵ ==�ж��Ƿ����
	a = a + 10; //1
	a += 10; //2
	a = a & 2; //1
	a %= 2; //2
	// ���ϸ�ֵ�� += -= *= /= &= ^= |= >>= <<=
	return 0;
}


//��Ŀ������ ˫Ŀ������ ��Ŀ������
//!�߼������� -��ֵ +��ֵ sizeof�����������ͳ���
int main()
{
	int a = 10;
	int b = 20;
	a + b;  //+˫Ŀ����������������������
	
	int a = 10;
	printf("%d\n", a); // 0�� ��0��
	printf("%d\n", !a); // !�߼�������  10���棬��Ϊ��0
    
	int a = -2; // -��ֵ
	int b = -a;
	int c = +3; // ��ֵ  +һ��ʡ��
	
	int a = 10;
	printf("%d\n", sizeof(a)); // sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	printf("%d\n", sizeof(int)); // ��˼һ�� 4
    
	int arr[10] = {0}; //10������Ԫ�ص�����
	int sz = 0;
	//���������Ԫ�ش�С
	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);

	return 0;
}