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
int add(int x, int y)
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
	sum1 = add(num1, num2);
	sum2 = add(a, b);
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

	int arr[10] = { 0 }; //10������Ԫ�ص�����
	int sz = 0;
	//���������Ԫ�ش�С
	//���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz = %d\n", sz);

	return 0;
}


// ~��һ�����Ķ����ư�λȡ��  -- ++ ǰ�á�����
#include <stdio.h>

int main()
{
	int a = 0; // 4���ֽڣ�32bitλ
	int b = ~a; // b���з��ŵ�����
	// 00000000000000000000000000000000
	// 11111111111111111111111111111111  �з��ŵ��������λ��1Ϊ����0Ϊ��
	// ԭ�� ���� ����    ԭ�����λ���䣬���ఴλȡ���÷��룻�����һ�ò��롣�����һ�÷��룻���밴λȡ����ԭ�롣 
	// ~ ����2���ƣ�λȡ��
	// �������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
	printf("%d\n", b); //ʹ�õģ���ӡ�����������ԭ��
	// 11111111111111111111111111111111��
	// 11111111111111111111111111111110��
	// 10000000000000000000000000000001ԭ  1Ϊ����-1
	return 0;
}
// ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ����  ԭ�룬���룬���� ��ͬ
// ����  ������ԭ�밴λȡ���÷��룬�����һ�ò���


#include <stdio.h>
// -- ++ ǰ�á�����
int main()
{
	int a = 10;
	int b = a++; // ����++����ʹ����++
	printf("a = %d b = %d\n", a, b); // 11 10

	int c = 10;
	int v = ++c; // ǰ��
	printf("c =%d v = %d\n", c, v); // 11 11

	return 0;
}


#include <stdio.h>

int main()
{
	int a = (int)3.14; // (����) ǿ������ת�� 
	return 0;
}



// ��ϵ������  >  >=  <  <=  != ���ڲ��ԡ�����ȡ�  == ���ڲ��ԡ���ȡ�



// �߼�������  && �߼���  ||�߼���
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 5;

	int c = a && b; // ������Ϊ����Ϊ�� 
	printf("c = %d\n", c); // 0Ϊ�� ��0Ϊ��

	int e = a || b; // ֻҪ��һ��Ϊ����Ϊ��
	printf("e = %d\n", e);
	return 0;
}



//����������  exp1 ? exp2 : exp3; // ��ִ��exp1����Ϊ�棬ִ��exp2Ϊ�������ʽ�Ľ������Ϊ�٣�ִ��exp3Ϊ�������ʽ�Ľ��
#include <stdio.h>
//���������� ��Ŀ������
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;

	max = (a > b ? a : b);
	printf("max = %d\n", max);

	//if (a > b)
	//	max = a;
	//else
	//	max = b;

	return 0;
}



// ���ű��ʽ  exp1, exp2, exp3, ...expn



// �±����á��������úͽṹ��Ա  []  ()  .  ->
#include <stdio.h>

int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//int arr[10] = { 0 };
	//arr[4]; // [] - �±����ò�����

	int a = 10;
	int b = 20;
	int sum = add(a, b); // () - �������ò�����

	return 0;
}





// ���ùؼ���
// auto break case char const contine default do double else enumö��
// extern�����ⲿ���� float�����ȸ����� for goto��� if int long 
// register�Ĵ����ؼ��� return short signed�з��ŵ� sizeof�����С
// static��̬�� struct�ṹ��ؼ��� switch typedef���Ͷ��� union������/������ 
// unsigned void�� volatile whileѭ��    �������������ͻ

//auto int a = 10; // �ֲ�����-�Զ����� auto�Զ�ʡ��
// register - �Ĵ����ؼ���    register int a = 10; // �����a����ɼĴ������� �����������ж�
// signed - �з��ŵ�    int ����ı������з��ŵ�  signed int - signedʡ��    �޷��ţ�unsigned  ---unsigned int num = 1;�޷�����
// typedef - ���Ͷ���/�����ض���    unsigned int  u_int
// static - ��̬��


#include <stdio.h>

void test()
{
	int a = 1;
	a++;
	printf("a = %d\n", a); // 22222
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	return 0;
}


#include <stdio.h>

void test()
{
	static int a = 1; // a��һ����̬�ľֲ�����    
	// static�����������ξֲ��������ֲ��������������ڱ߳�
	a++;
	printf("a = %d\n", a); // 23456
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	return 0;
}


#include <stdio.h>

int main()
{
	// �½�һ����ad.c д��int g_val = 20  �������������
	// ������static ���޷�ʹ��    
	// static����ȫ�ֱ��� �ı��˱�����������
	// ��̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�� ����Դ�ļ����޷�ʹ����
	extern int g_val; // ectern �����ⲿ����
	printf("g_val = %d\n", g_val);
	return 0;
}