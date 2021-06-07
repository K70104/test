#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int b = 100;
	{
		int a = 10;
		printf("a = %d\n", a); // 10
		printf("b = %d\n", b); // 100
	}
	printf("b = %d\n", b); // 100
	return 0;
}


// �����ⲿ����
extern int g_val;

int main()
{
	printf("%d\n", g_val);
	return 0;
}


// 1. ���泣��
int main()
{
	3.14; // ���������泣��

}


// 2. const���εĵĳ�����
int main()
{
	// һ���������ܱ��ı����Ǿ�˵���г����� - ���ܱ��ı������
	const int a = 100;
	a = 200;
}


int main()
{
	const int n = 100; // n���ǳ�����ֻ�Ǿ��г����ԣ����ܱ��޸ģ�n���Ǳ���
	int arr[n] = { 0 }; // ERROR
	return 0;
}


// 3. #define ����ı�ʶ������
#define MAX 100
int main()
{
	int a = MAX;
	printf("a = %d\n", a); // 100

	// ����������
	int arr[MAX] = { 0 };
	return 0;
}


// 4. ö�ٳ���  ö�٣�һһ�о�
// enum - ö�ٹؼ���
// enum Sex - ö������
enum Sex
{
	// ö�ٵĿ���ȡֵ - ö�ٳ���
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	enum Sex s = MALE; // ��ʾ�Ա�ı���

	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	// ö�ٳ���Ĭ�ϴ�0��ʼ���� 0 1 2
	return 0;
}


// ����ֵ���Ը��ģ�ö�ٳ������ܸ�
enum Sex
{
	MALE = 3,
	FEMALE = 7,
	SECRET
};

int main()
{
	// MALE = 4; // ERROR
}


// C99������һ�����䳤����
int main()
{
	const int n = 3;
	int arr[n] = { 0, 1, 2 }; // ��������֧��C99��׼�䳤����ʹ�ñ���ָ������
	printf("%d", arr[0]);
	printf("%d", arr[1]);
	printf("%d", arr[2]);
	return 0;
}


// �ַ���
int main()
{
	// char - �ַ�����
	// 'a' - �ַ�:�е�����������
	// "abcdef" - �ַ���:��˫���������һ���ַ�
	"abcdef"; // �ַ�������ֵ

	char ch[10] = "abcdef"; // ��abcdef��ʼ������ 
	// �������߸��ַ�abcdef\0 ʣ�������ַ�Ĭ�Ϸ�\0 --abcdef\0\0\0\0
	printf("%s\n", ch); // %s
	return 0;
}


int main()
{
	char ch1[] = "abcdef";
	printf("%s\n", ch1);

	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
	// �����ַ���ӡʱ��û��\0����ʱҪ���'\0'��������������
	printf("%s\n", ch2);
}


#include <string.h>
int main()
{
	char ch1[] = "abcdef";
	printf("%d\n", strlen(ch1));
	// stelen �⺯�� - ���ַ������ȵ� \0���ַ���������־ ���㳤�� �������6

	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
	printf("%d\n", strlen(ch2));
	return 0;
}


// ת���ַ�
int main()
{
	printf("%s\n", "c:\test\test.c"); // c:      est     est.c
	printf("%s\n", "c:\\test\\test.c");
}


int main()
{
	// ����ĸ��
	// ??) --> ]
	// ??( --> [
	printf("%s\n", "????)");
	// ��֧������ĸ�ʣ� Ҫ����ת���ַ� ??\?\?)

	printf("%c", '\''); // ��ӡ������
	return 0;
}


int main()
{
	printf("%c\n", '\065');

	// ʮ����123 -- 1*10^2 + 2*10^1 + 3*10^0 = 100+20+3 = 123
	// �˽���065 -- 0*8^2 + 6*8^1 +5*8^0 = 48+5 = 53
	// 8���Ƶ�065ת��10�����ǣ�53
	// \ddd - ddd��8��������ת��10���ƺ��ֵ����ΪASCIIֵ��������ַ�
	// 53��Ӧ���ַ���5
	printf("%c\n", '5');
	return 0;
}


int main()
{
	printf("%c\n", '\x51');
	// 16����51 -- 5*16^1 + 1*16^0 = 80+1 = 81
	// 81��Ӧ��ASCII��ֵ��Q
	return 0;
}


// �������ʲô��
int main()
{
	printf("%d\n", strlen("abcdef"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	// �˽�������û��8 8������\32
	return 0;
}


int main()
{
	// C++ע�ͷ��
	// �������ͱ���a��������10
	int a = 10;

	/* C����ע�ͷ��
	int b = 20;
	*/

	return 0;
}


// ѡ�����
int main()
{
	int input = 0;
	printf("�������\n");
	printf("�ú��ô��루1/0��?\n");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("��offer\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}


int main()
{
	int line = 0;
	printf("�������\n");

	while (line < 20000)
	{
		printf("�ô��룺%d\n", line);
		line++;
	}

	if (line >= 20000)
	{
		printf("��offer\n");
	}

	return 0;
}


// ����
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	scanf("%d %d", &num1, &num2);

	sum = Add(num1, num2);

	printf("%d\n", sum);
	return 0;
}


// ����
// һ����ͬ����Ԫ�صļ���
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", arr[5]);
	return 0;
}


int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}


// ������
// 1. ����������  + -*/ %
int main()
{
	int a = 5 / 2; // ��2��1
	float b = 5 / 2;
	float c = 5 / 2.0; // ������һ�������� ���Ǹ���������

	printf("%d\n", a); // 2
	printf("%f\n", b); // 2.000000
	printf("%f\n", c); // 2.500000

	return 0;
}


// % - ȡģ���ࣩ �õ���������֮�������
int main()
{
	int a = 7 % 2; // 3 ���� 1
	printf("%d\n", a);
	return 0;
}


// ��λ������
//>> ���Ʋ�����
int main()
{
	int a = 6; // 110
	// 4���ֽ� 32bit
	// �ƶ����Ƕ�����λ
	// 00000000000000000000000000000110
	//  00000000000000000000000000001100 �ұ߲�0 -- 12
	int b = a << 1;
	printf("%d", b);
	return 0;
}