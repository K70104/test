#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int b = 100;
//	{
//		int a = 10;
//		printf("a = %d\n", a); // 10
//		printf("b = %d\n", b); // 100
//	}
//	printf("b = %d\n", b); // 100
//	return 0;
//}
//
//
//// �����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//
//
// 1. ���泣��
//int main()
//{
//	3.14; // ���������泣��
//
//}
//
//
// 2. const���εĵĳ�����
//int main()
//{
//	// һ���������ܱ��ı����Ǿ�˵���г����� - ���ܱ��ı������
//	const int a = 100;
//	a = 200;
//}
//
//
//int main()
//{
//	const int n = 100; // n���ǳ�����ֻ�Ǿ��г����ԣ����ܱ��޸ģ�n���Ǳ���
//	int arr[n] = { 0 }; // ERROR
//	return 0;
//}
//
//
// 3. #define ����ı�ʶ������
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("a = %d\n", a); // 100
//
//	// ����������
//	int arr[MAX] = { 0 };
//	return 0;
//}
//
//
// 4. ö�ٳ���  ö�٣�һһ�о�
// enum - ö�ٹؼ���
// enum Sex - ö������
//enum Sex
//{
//	// ö�ٵĿ���ȡֵ - ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE; // ��ʾ�Ա�ı���
//
//	printf("%d\n", MALE); 
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	// ö�ٳ���Ĭ�ϴ�0��ʼ���� 0 1 2
//	return 0;
//}
//
//
// ����ֵ���Ը��ģ�ö�ٳ������ܸ�
//enum Sex
//{
//	MALE = 3,
//	FEMALE = 7,
//	SECRET
//};
//
//int main()
//{
//	// MALE = 4; // ERROR
//}
//
//
// C99������һ�����䳤����
//int main()
//{
//	const int n = 3;
//	int arr[n] = { 0, 1, 2 }; // ��������֧��C99��׼�䳤����ʹ�ñ���ָ������
//	printf("%d", arr[0]);
//	printf("%d", arr[1]);
//	printf("%d", arr[2]);
//	return 0;
//}
//
//
// �ַ���
//int main()
//{
//	// char - �ַ�����
//	// 'a' - �ַ�:�е�����������
//	// "abcdef" - �ַ���:��˫���������һ���ַ�
//	"abcdef"; // �ַ�������ֵ
//
//	char ch[10] = "abcdef"; // ��abcdef��ʼ������ 
//	// �������߸��ַ�abcdef\0 ʣ�������ַ�Ĭ�Ϸ�\0 --abcdef\0\0\0\0
//	printf("%s\n", ch); // %s
//	return 0;
//}
//
//
//int main()
//{
//	char ch1[] = "abcdef";
//	printf("%s\n", ch1);
//
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	// �����ַ���ӡʱ��û��\0����ʱҪ���'\0'��������������
//	printf("%s\n", ch2);
//}
//
//
//#include <string.h>
//int main()
//{
//	char ch1[] = "abcdef";
//	printf("%d\n", strlen(ch1)); 
//	// stelen �⺯�� - ���ַ������ȵ� \0���ַ���������־ ���㳤�� �������6
//
//	char ch2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0' };
//	printf("%d\n", strlen(ch2));
//	return 0;
//}
//
//
