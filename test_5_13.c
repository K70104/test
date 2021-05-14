// 结构体
#include <stdio.h>

// struct- 结构体关键字  Stu- 结构体标签  struct Stu- 结构体类型
struct Stu
{
	// 成员变量    定义一个结构类型-不占空间
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3; // s1, s2, s3 是三个全局的结构体变量

typedef struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; // typedef 把struct Stu重新起名    类型

int main()
{
	struct Stu s1; // 创建结构体变量  局部变量
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
	Stu s = { "李四", 40, "15598866745", "男" };
	// 打印结构体数据
	Print1(s);
	Print2(&s); // 首选print2函数
	return 0;
}


// 函数参数传过去：压栈操作
// 函数栈帧的创建和销毁

// 栈：先进后出 后进的先出
// 插入一个元素：压栈
// 删除一个元素：出栈
//
// 首选print2函数原因：函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候，
// 结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降。 
// 结论：结构体传参的时候，要传结构体的地址。