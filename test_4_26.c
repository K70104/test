// ����
// type_t �����Ԫ������  arr_name ������  const_n �������ʽ������ָ������Ĵ�С  []��ų���
#include <stdio.h>

int main()
{
	int arr1[10] = { 1, 2, 3 }; // ����ȫ��ʼ�� ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	char arr2[5] = { 'a', 'b' }; // ͬ�� b�ɻ�Ϊ98
	char arr3[5] = "ab"; // ok
	char arr[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(arr)); // 4
	// strlen��sizeofû�й���
	// strlen �����ַ������ȵ� - ֻ������ַ����󳤶� - �⺯��-ʹ��ͷ�ļ�
	// sizeof ������������顢���͵Ĵ�С - ��λ���ֽ� - ������-����ͷ�ļ�

}


int main() // һά����
{   // []�±�����
	char arr[] = "abcdef";
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		printf("%c", arr[i]);
	}

	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr2) / sizeof(arr2[0]);
	int t = 0;
	for (t = 0; t < sz; t++)
	{
		printf("%d", arr2[t]);
		printf("&arr[%d] = %p\n", i, &arr[i]);// �������ڴ�����������ŵ�
	}
	return 0;
}


int main() // ��ά����
{
	int arr[3][4] = { 1, 2, 3, 4 }; // ��������
	char ch[5][6];
	int arr[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} }; // ֻ��ʡ����
}

int main()
{
	int arr[3][4] = { {1, 2, 3}, {4, 5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n"); // 1 2 3 0
	}	              // 4 5 0 0 
	return 0;	      // 0 0 0 0
}

int main()
{
	int arr[3][4] = { {1, 2, 3}, {4, 5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}


// ������Ϊ��������
#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	// ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if(arr[j] > arr[j + 1])
		    {
				int tmp = arr[j];
			    arr[j] = arr[j + 1];
			    arr[j + 1] = tmp;
		    }
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }; //��arr�������� �ų�����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	// arr������ �������� ʵ�ʴ���ȥ��������arr��Ԫ�صĵ�ַ arr[0]
	bubble_sort(arr, sz); // ð��������
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include <stdio.h> // �Ż�

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1; // ������һ��Ҫ����������Ѿ�����
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; // ���������������ʵ����ȫ����
			}
		}
		if (flag == 1) // ��һ��������� ֱ��break ��9 1 2 3 4 5 6 7 8 --��һ�� 1 9 2 3 4 5 6 7 8 ... -- 1 2 3 4 5 6 7 8 9 �ڶ����жϺ�ֱ��break
		{
			break;
		}
	}
	
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


// ��������ʲô  ��������������Ԫ�صĵ�ַ�����������⣩
#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	printf("%p\n", arr); // ��Ԫ�ص�ַ
	printf("%p\n", &arr[0]); // ��Ԫ�ص�ַ
	printf("%d\n", *arr); // ������ 1
	return 0;
}
// 1. sizeof(������) - ��������������������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
// 2. &�������������������������飬&��������ȡ��������������ĵ�ַ
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	printf("&p\n", arr); // ��Ԫ�ص�ַ
	printf("&p\n", &arr[0]); // ��Ԫ�ص�ַ
	printf("&p\n", &arr); // ����ĵ�ַ

	printf("&p\n", arr+1); // ��4
	printf("&p\n", &arr[0]+1); // ��4 
	printf("&p\n", &arr+1); // ��28 - ������Ԫ�ص�ַ����������ĵ�ַ��7��Ԫ��
}