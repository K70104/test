// forѭ��
/*for(���ʽ1; ���ʽ2�����ʽ3)    1-��ʼ�� 2-�����ж� 3-ѭ����������
	ѭ�����*/
#include <stdio.h> // ��forѭ����ӡ1-10����

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
// forѭ����12346789  whileѭ����1234��ѭ��
// ��Ҫ��forѭ�������޸�ѭ������ ������ѭ��
// ����ѭ�����Ʊ�����ȡֵ����ǰ�պ�����д��
// for(i=0; i<10; i++)  <- i<=9


// forѭ������
#include <stdio.h>

int main()
{
	// ����1
	for (; ;) // ��ʼ�����������жϽԿ�ʡ�ԡ�  ���ж�ʡ�ԣ��ж�������Ϊ������ѭ��
	{
		printf("hehe\n"); // ��ѭ��
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++) // ��ʡ�Գ�ʼ�� ��ӡ10�κ�j����10 ��ִ��  ��ʡ�ԣ�10*10=100��hehe
		{
			printf("hehe\n"); // 0 1 2 3 4 5 6 7 8 9 
		}
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n"); // 2��hehe
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++) // ѭ��0�� k=0��ֵ 0Ϊ�� ��ѭ�������Ƿ�0������ѭ��
		k++;
	return 0;
}


// do...whileѭ��
#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		printf("%d ", i); // do while��ӡ1-10
		i++;
	} while (i <= 10);
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i); // 1 2 3 4
		i++;
	} while (i <= 10);
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i); // 1 2 3 4 ��ѭ��
		i++;
	} while (i <= 10);
	return 0;
}


// ��ϰ
#include <stdio.h> // 1.����n�Ľ׳� 

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("ret = %d\n", ret);
	return 0;
}


#include <stdio.h> // 2.����1!+2!+3!+...+10!

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	// 1 + 2 + 6 = 9
	for (n = 1; n <= 3; n++)
	{
		ret = 1; // ÿ�γ�ʼ��
		for (i = 1; i <= n; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 0; // ��
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}


#include <stdio.h> // 3.��һ�����������в��Ҿ����ĳ������

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 ,6, 7, 8, 9, 10 };
	int k = 7; // ��arr�������ҵ�7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");
	return 0;
}


#include <stdio.h> // �۰���ҷ�/���ֲ��ҷ�

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7; // ��Ҫ�ҵ�Ԫ����7

	int sz = sizeof(arr) / sizeof(arr[0]); // ����Ԫ�صĸ���
	int left = 0; // ���±�
	int right = sz - 1; // ���±�

	while (left <= right)
	{
		int mid = (left + right) / 2; // mid - �м�Ԫ�ص��±�
		if (arr[mid] > k) // ���м�Ԫ�ر�Ҫ�ҵ�k��
		{
			right = mid - 1; // ��ʱ�����±�Ϊ�м��±��һ ���±겻��Ϊ0
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ����±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n"); // {1, 2, 3, 4, 5, 6, 8, 9, 10, 11}
	}
	return 0;
}


#include <stdio.h>// 4.��ʾ����ַ��������ƶ������м���
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	// Welcome to Canada
	// #################
	// W###############a
	// We#############da...
	char arr1[] = "Welcome to Canada";
	char arr2[] = "#################";
	int left = 0;
	// int right = sizeof(arr1) / sizeof(arr1[0]) - 2; // �硰abc��������\0һ��4��Ԫ�أ��±�ֱ�Ϊ0 1 2 3 ����2Ϊ�±���2
	int right = strlen(arr1) - 1; //strlen��Ԫ�ظ�����\0ֹͣ ���±�ֻҪ��1  ͷ�ļ�string

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); // ��Ϣһ�� 1000���� 1��  ͷ�ļ�windows.h 
		system("cls"); // ִ��ϵͳ�����һ������  cls - �����Ļ  ͷ�ļ�stdlib.h
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}


#include <stdio.h>// 5.ģ���û���½ ��������������ȷ��½�ɹ��������˳�����
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) // ������ == ���Ƚ������ַ����Ƿ���ȣ�Ӧʹ��һ���⺯��-strcmp  ͷ�ļ�string.h
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}