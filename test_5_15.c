// Debug - ���԰汾  ����������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
// Release - �����汾  ���и����Ż�ʹ�����ڴ����С�������ٶ��϶������ŵģ��Ա��û����õ�ʹ��

// VS���� ���Լ���
// F5-��������  ��F9���ʹ��

// F9 �л��ϵ�
#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	for (i = 0; i < 100; i++)
	{
		printf("%d ", 10 - 1); // F9�ϵ�
	}
	return 0;
}

// F10 �����    F11 ����䣨���뺯���ڲ�ʹ�ã�
// Shift+F11 ��������    Shift+F9 ���ټ���    Shift+F5 ֹͣ����
// F10���Ժ������  ����-����  1.���Ӵ���  2.�ڴ洰��-�۲��ڴ�仯��Ϣ  3.�����  4.�Ĵ���  5.���ö�ջ


#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0; // ���ձ��ֵĽ��
	int n = 0;
	int ret = 1; // ����n�Ľ׳�
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) 
	{
		int j = 0;
		ret = 1; // �����Ҵ��� ����ret��Ҫ��ʼ��Ϊ1 
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 0; // ��ѭ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// VC6.0 ������ <=10 ��ѭ��
	// gcc ������ <=11 ��ѭ��
	// VS2013 <= ��ѭ��
	for (i = 0; i <= 12; i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
}
// 1. ջ����Ĭ��ʹ�ã�
// ��ʹ�øߵ�ַ�Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ�
//
// 2. ���������±����������ַ���ɵ͵��߱仯
//
// ��ѭ��ԭ��main�����ڲ�������i��arr ���Ǿֲ����� ����ջ�� ��Ϊռ�ռ��ʹ��ϰ����1... ����i��arr���洴�� ����Ϊ2...
// arr����Խ�� ���п�����Խ��Ĺ���������i ���ڸı�����Ԫ�ص�ʱ�� Խ��ı��ʱ�� ���п��ܽ�i�ı�Ϊ0 ��ѭ��

// ������ѭ������	��Debug�汾�д���  ��Release�汾������
// Release���Ż� i��arr������



#include <stdio.h>

void my_strcpy(char* dest, char* src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src; // '0'
}

int main()
{
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2); // strcpy �ַ�������
	printf("%s\n", arr1);
	return 0;
}


// �Ż�4
#include <stdio.h>
#include <assert.h>
// �Ż�4 char
char* my_strcpy(char* dest, const char* src) // �Ż�3 const ����д�� src����Ҫ�ı䣬�ĵ���dest
{
	char* ret = dest;
	// �Ż�1
	assert(dest != NULL);// ����
	assert(src != NULL);// ����

	//�Ż�2
	// ��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++) // \0 ASCIIֵ��0 
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2); // strcpy �ַ�������
	printf("%s\n", arr1);
	return 0;
}



int main()
{
	const int num = 10;
	const int* p = &num;
	*p = 20; // err const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p��num����ֵ

	int* const p = &num;
	int n = 100;
	p = &n; // const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���

	printf("%d\n", num);
	return 0;
}



#include <stdio.h>
#include <assert.h>

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL); // ��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = len_strlen(arr);
	printf("%d\n", len);
	return 0;
}