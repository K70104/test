// ָ�� ָ����Ǳ�������ŵ�ַ�ı��� ָ����32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�
#include <stdio.h>

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0;
	
	char* pc = &a;
	*pc = 0;

	pritnf("%p\n", pa); // �ĸ��ֽڱ�Ϊ0
	pritnf("%p\n", pc); // һ���ֽڱ�Ϊ0
	return 0;
}
// ָ������壺1. ָ��Ľ�����
// ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
// int*p  *p �ܹ�����4���ֽ�
// char*p  *p �ܹ�����1���ֽ�
// double*p  *p �ܹ�����8���ֽ�


int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;

	printf("p\n", pa);
	printf("p\n", pa + 1); // ���ĸ��ֽ�

	printf("p\n", pc);
	printf("p\n", pc + 1); // ��һ���ֽ�
	return 0;
}
// 2. ָ��+-����
// ָ�����;����ˣ�ָ����һ����Զ��ָ��Ĳ�����
// int*p  p+1---4
// char*p  p+1---1
// double*p  p+1---8


#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int* p = arr; // arr������-��Ԫ�صĵ�ַ    �ĸ��ֽڶ���Ϊ0
	// char* p = arr; // ֻ��һ���ֽڱ�Ϊ0
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}
	return 0;
}


// Ұָ��
// Ұָ�����1. ָ��δ��ʼ��
#include <stdio.h>

int main()
{
	int a; // �ֲ���������ʼ����Ĭ�������ֵ
	int *p; // �ֲ���ָ��������ͱ���ʼ�����ֵ
	*p = 20;
	return 0;
}

// ����2. ָ��Խ�����
int main()
{
	int arr[10] = { 0 };
	int* p = arr; // arr����������Ԫ�ص�ַ ���p
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		// ��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
		// *p = i;
		// p++;
		*p++ = i; // ����++ ��ʹ����++ ��*p=i ��p++
	}
	return 0;
}

// ָ��ָ��Ŀռ��ͷ�
int* test()
{
	int a = 10; // �ֲ�������Χ�ڴ���������Χ����  ���ص�ַ����ַ������
	return &a;
}

int main()
{
	int* p = test();
	*p = 20;
	return 0;
}


// ��ι��Ұָ��
// 1. ָ���ʼ��
#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a; // ��ʼ��
	int* p = NULL; // NULL - ������ʶ��ָ�룬��ָ�븳ֵ
}

// 2. ����ָ��Խ��

// 3. ָ��ָ��ռ����ͷż�����NULL
int a = 10;
int* pa = &a;
int* p = NULL; // �������� �óɿ�ָ�� ʹ�䲻�ܷ���

// 4. ָ��ʹ��֮ǰ�����Ч��
if (pa ? = NULL)
{

}


// ָ������
// 1. ָ��+-����
#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr; // ��Ԫ�صĵ�ַ
	// int* p = arr[9];
	if (i = 0; i < sz; i++)
	{
		printf("%d ", *p);
		p++;
		// p-=2; // 10 8 6 4 2 
	}
	return 0;
}

#define N_VALUES 5
float values[N_VALUES];
float *vp;
// 2. ָ��Ĺ�ϵ����
for (vp = &values[0]; vp < &values[N_VALUES];)
{
	*vp++ = 0;
}

// 3. ָ��-ָ��
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n, &arr[9] - &arr[0]"); // Ԫ�ظ��� Ҫ���ַ-С��ַ
	return 0;
}


// strlen - ���ַ�������
// 1. �������ķ�ʽ
// 2. �ݹ�ķ�ʽ - ģ��ʵ����strlen
// 3. ָ��ķ�ʽ
#include <stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}


// 4. ָ��Ĺ�ϵ����
#define N_VALUES 5
float values[N_VALUES];
float* vp;
for (vp = &values[N_VALUES]; vp > &values[N_VALUES][0];)
{
	*--vp = 0; // �����õ�һ����ʽ
}

for (vp = &values[N_VALUES-1]; vp >= &values[N_VALUES][0]; vp--)
{
	*vp = 0; 
}
// ��׼�涨������ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�ñȽϣ�
// ���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�

