#include <stdio.h>
#include <string.h>  // �󳤶ȵ�ͷ�ļ� 
// ˫������������һ���ַ���Ϊ�ַ���    ������־��һ�� \0 ��ת���ַ� 

int main()
{
	char arr1[] = "abc";  //����
	// "abc" -- 'a' 'b' 'c' '\0' --'\0'�ַ����Ľ�����־
	char arr2[] = { 'a', 'b', 'c', 0};  //����0
	// 'a' 'b' 'c' '\0'
	printf("%s\n", arr1); //�����ӡ��s
	printf("%s\n", arr2);
	return 0;
}


int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', 0};
	printf("%d\n", strlen(arr1));// strlen - string lenth �����ַ�������
	printf("%d\n", strlen(arr2));
	return 0;
}


// ת���ַ� - �ı�ԭ������˼
//    \����ֹ��������ʺŽ���������ĸ��  \\��б�ܣ���ֹ�������ͳ�Ϊһ��ת�����з�  \b�˸��  \r�س�  \v��ֱ�Ʊ��  \ddd -- ddd����1-3���˽��Ƶ�����...  
int main()
{
	printf("abcn");
	printf("abc\n");

	printf("c:\test\32\test.c\n");
	printf("c:\\test\\32\\test.c\n");
	// \t - ˮƽ�Ʊ��    \\��б�ܣ���ֹ�������ͳ�Ϊһ��ת�����з�

	printf("%c\n", '\'');
	// ''��һ�Ե����� ��\ת��
	return 0;
}


//    \ddd -- ddd����1-3���˽��Ƶ�����
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));
	// \32��һ��ת���ַ� -- 
	// 32��2��8������    32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���Ϊascll��ֵ����Ӧ���ַ�
	// 32 - > 10������    26 -> ��Ϊascll��ֵ���������

	printf("%c\n", '\32');
    return 0;
}


//    \xdd -- dd��ʾ����ʮ����������
int main()
{
	printf("%c\n", '\x61');
	// ��ʮ��������61ת����ʮ������ -> 97    97��ascll����ϴ������a
	return 0;
}

   // \��û��x����8���ƣ���x����16���ƣ�\����һ��ת���ַ�


int main()
{
	int input = 0;
	printf("��\n");
	printf("whether?(1/0)>: ");
	scanf_s("%d, &input");
	if(input == 1)
		printf("��\n");
	else
		printf("��\n");
	return 0;
}