// �ṹ��
#include <stdio.h>

// struct- �ṹ��ؼ���  Stu- �ṹ���ǩ  struct Stu- �ṹ������
struct Stu
{
	// ��Ա����    ����һ���ṹ����-��ռ�ռ�
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3; // s1, s2, s3 ������ȫ�ֵĽṹ�����

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; // typedef ��struct Stu��������    ����

int main()
{
	struct Stu s1; // �����ṹ�����  �ֲ�����
	return 0;
}



#include <stdio.h>

struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe", {100, 'w', "hello world", 3.14}, arr};
	printf("%s\n", t.ch); // hehe
	printf("%s\n", t.s.arr); // hello world 
	printf("%If\n", t.s.d); // 3.140000
	printf("%s\n", t.pc); // hello bit
	return 0;
}



#include <stdio.h>

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("name: %d\n", ps->age);
	printf("name: %s\n", ps->tele);
	printf("name: %s\n", ps->sex);
}

int main()
{
	Stu s = { "����", 40, "15598866745", "��" };
	// ��ӡ�ṹ������
	Print1(s);
	Print2(&s); // ��ѡprint2����
	return 0;
}


// ������������ȥ��ѹջ����
// ����ջ֡�Ĵ���������

// ջ���Ƚ���� ������ȳ�
// ����һ��Ԫ�أ�ѹջ
// ɾ��һ��Ԫ�أ���ջ
//
// ��ѡprint2����ԭ�򣺺������ε�ʱ�򣬲�������Ҫѹջ�ģ��������һ���ṹ������ʱ��
// �ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½��� 
// ���ۣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��