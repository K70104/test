#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	return 0;
}





// ���泣��
// 100;


// const ���εĳ�����


// #define ����ı�ʶ������
#define max 10

int main()
{
	int arr[max] = { 0 };
	printf("%d\n", max);
	return 0;
}


// ö�ٳ���
// ö�ٹؼ� enum
enum Sex
{
	MALE,  // ö�ٳ���
	FEMALE,  // ö�ٳ���
	SECRET  // ö�ٳ���
};
int main()
{
	printf("%d\n", MALE);  // 0
	printf("%d\n", FEMALE);  // 1
	printf("%d\n", SECRET);  // 2

	return 0;
}