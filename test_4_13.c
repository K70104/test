// ��֧���if��switch  ѭ�����while��for��do while
// һ��;��������һ�����  ;�����
#include <stdio.h> // if���

int main()
{
	int age = 10;
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 50)
		printf("׳��\n");

	return 0;
}
// ���һ������Ҫִ�ж������ �ô���� {}


#include <stdio.h>

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1) // ����else
		if (b == 2)
			printf("hello\n");
		else
			printf("haha\n"); // ����� ��ΪĬ��else�������δƥ���if��ƥ��
	return 0;
}
// ������ж��Ƿ���� �ѳ���д����� 5 == sum ����д��ɸ�ֵ=


#include <stdio.h> // �ж�һ�����Ƿ�Ϊ����

int main()
{
	int a = 8;
	if (a % 2 == 1)
		printf("����\n");
	else
		printf("ż��\n");
	return 0;
}


#include <stdio.h> // ���1-100����������

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;
	}
	//while(i<=100)
	//{
	//    if(i%2 == 1)
	//        printf("%d ", i);
	//    i++;
	//}
	return 0;
}



#include <stdio.h> // switch���

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case2:
		printf("���ڶ�\n");
		break;
	case3:
		printf("������\n");
		break;
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day) // switch�����������
	{
	case 1: // case�����γ������ʽ
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		break;
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}



// while
#include <stdio.h>

int main()
{
	// while(1)
	//     printf("hehe\n");  ��ѭ��

	int i = 1;
	while (i <= 10)
	{
		printf("%d", i);
		i++;
	}
	return 0; // 1234568910
}


#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			break;
		printf("%d", i);
		i++;
	}
	return 0; // 1234
}


// ��ѭ��������break ��ֹѭ�� 
// continue��ֹ����ѭ�� ֱ����ת��while���жϲ��� ������һ��ѭ��������ж�
#include <stdio.h>

int main()
{
	int i = 0;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;
		printf("%d", i);
	}
	return 0; // 1234678910
}



#include <stdio.h>

int main()
{
	int ch = getchar(); // getchar ����

	putchar(ch);
	printf("%c\n", ch); // putchar ��� ��printf������ͬ
	return 0;
}


#include <stdio.h>

int main()
{
	int ch = 0;
	// ����ʲô�����ʲô ֱ������ ctrl + z 
	// EOF - end of file�ļ�������־ -> -1
	while ((ch = getchar()) != EOF)
	{// getchar�����ַ����ch �ж��Ƿ����EOF �����������ӡ����
		putchar(ch);
	}
	return 0;
}


#include <stdio.h> // ����һ

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password); // �������� �������password����ֵ��
	// getchar(); // ��������ʣһ��'\n' ��ȡһ��'\n'
	while ((ch = getchar()) != '\n')
	{
		; // �������ַ���ȡ��� \n �ٽ�����һ��
	}
	printf("������(Y/N)��>");
	ret = getchar(); // Y/N
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	} // '\n' ��ASCII���ֵ��10
	return 0;
}


#include <stdio.h> // ����� ֻ��ӡASCII��0-9֮����ַ� �����ַ�

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}