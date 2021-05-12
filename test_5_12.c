// ��������exec((v1, v2), (v3, v4), v5, v6);�У�ʵ�εĸ�����4
// ���ű��ʽ v2 v4 v5 v6
#include <stdio.h>

int main()
{
	int arr[2][3] = { 1, 2, 3, 4, 5, 6 };
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d", arr[i][j]); // 123
			                         // 456
		}
		printf("\n");
	}
	return 0;
}


// 1. ����һ���������� ���1. ����init��ʼ������Ϊ0  2.print()��ӡÿ��Ԫ��  3.reverse()�����������Ԫ������
#include <stdio.h>

void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// Init(arr, sz); // �������ʼ��Ϊ0
	Print(arr, sz); // ��ӡ
	Reverse(arr, sz);
	Print(arr, sz);

	return 0;
}


// 2. ������A�е����ݺ�����B�е����ݽ��н���
#include <stdio.h>

int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}


#include <stdio.h>

int main()
{
	int  arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr; // ��arrǿ��ת����short* ����2���ֽ� ��һ��2���ֽ�
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]); // 0 0 3 4 5
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int a = 0x11223344; // int�ĸ��ֽ� ���ŷ�44 33 22 11 ��ռһ���ֽ� 
	char* pc = (char*)&a; // char* *pc������ֻ�ܷ���һ���ֽ�
	*pc = 0;
	print("%x\n", a); // 11223300
	return 0;
}


#include <stdio.h>

int i; // ȫ�ֱ��� ����ʼ����Ĭ����0
int main()
{
	i--;
	if (i > sizeof(i)) // sizeof()-�������/������ռ�ڴ�Ĵ�С>=0 �޷�����
	{
		printf(">\n"); // >
		// �������޷�������� ��iת��Ϊ�޷�����
		// 10000000000000000000000000000001 -1
		// 11111111111111111111111111111110
		// 11111111111111111111111111111111 ����  ת��Ϊ�޷����� ���λ1����Чλ-����-ԭ������ͬ
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++; // c=8 b=7 a=8
	b += a++ + c; // b=23 a=9 ���ű��ʽ �����Ҽ��� ���һ���ǽ��
	printf("a = %d b = %d c = %d\n", a, b, c);
	return 0;
}


// 3. ͳ�ƶ�������1�ĸ���
#include <stdio.h>

int count_bit_one(unsigned int n) // �޷����� ���⸺��
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}

int count_bit_one(int n) // �ö����Ʋ����ж�
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			// -1
			// 10000000000000000000000000000001  -1ԭ��
			// 11111111111111111111111111111110  -1����
			// 11111111111111111111111111111111  -1����
			// 00000000000000000000000000000001  1
			count++;
		}
	}
	return count;
}

int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
// n = n&(n-1)
// n 13
// 1101 n
// 1100 n-1
// 1100 n = n&(n-1)
// 1011 n-1
// 1000 n = n&(n-1)
// 0111 n-1
// 0000 n = n&(n-1)

int main()
{
	int a = 0;
	scanf_s("%d", &a);
	// дһ��������a�Ķ����� �����룩��ʾ���м���1
	int count = count_bit_one(a);
	printf("count = %d\n", count);
	return 0;
}


// 4. ��������в�ͬλ�ĸ���
#include <stdio.h>

get_diff_bit(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf_s("%d%d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}


// 5. ��ӡ�����Ƶ�����λ��ż��λ  13579λ������λ 2468��ż��λ
#include <stdio.h>

void print(int m)
{
	int i = 0;
	print("����λ:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	print("ż��λ:\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int m = 0;
	scanf_s("%d", &m);
	print(m);
	return 0;
}


// 6. ��ָ���ӡ��������
#include <stdio.h>

void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	return 0;
}


int Fun(int n)
{
	if (n == 5)
		return 2; // ���ú���Fun(2) �����16
	else
		return 2 * Fun(n + 1);
	// Fun3- Fun4- Fun5-  
	// n== 5 ����2  2*2- 2*4- 2*8
}


// 7. ����9 ��ӡ9*9�˷��ھ��� ����n ��ӡn*n�˷��ھ���
#include <stdio.h>

print_table(n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j < i; j++)
		{
			printf("%d*%d=%-3d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	print_table(n);
	return 0;
}


// 8. �ַ������� ��дһ������reverse_string(char*string) ���ַ����е��ַ���������
#include <stdio.h>
#include <string.h>

void reverse_string(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;

	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef"; // fedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}