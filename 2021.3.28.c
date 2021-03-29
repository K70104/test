#include <stdio.h>
#include <string.h>  // 求长度的头文件 
// 双引号引起来的一串字符称为字符串    结束标志是一个 \0 的转义字符 

int main()
{
	char arr1[] = "abc";  //数组
	// "abc" -- 'a' 'b' 'c' '\0' --'\0'字符串的结束标志
	char arr2[] = { 'a', 'b', 'c', 0};  //加上0
	// 'a' 'b' 'c' '\0'
	printf("%s\n", arr1); //数组打印用s
	printf("%s\n", arr2);
	return 0;
}


int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c', 0};
	printf("%d\n", strlen(arr1));// strlen - string lenth 计算字符串长度
	printf("%d\n", strlen(arr2));
	return 0;
}


// 转义字符 - 改变原来的意思
//    \？防止连续多个问号解析成三字母词  \\反斜杠，防止它被解释成为一个转义序列符  \b退格符  \r回车  \v垂直制表符  \ddd -- ddd代表1-3个八进制的数字...  
int main()
{
	printf("abcn");
	printf("abc\n");

	printf("c:\test\32\test.c\n");
	printf("c:\\test\\32\\test.c\n");
	// \t - 水平制表符    \\反斜杠，防止它被解释成为一个转义序列符

	printf("%c\n", '\'');
	// ''是一对单引号 加\转义
	return 0;
}


//    \ddd -- ddd代表1-3个八进制的数字
int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));
	// \32是一个转移字符 -- 
	// 32是2个8进制数    32作为8进制代表的那个十进制数字，作为ascll码值，对应的字符
	// 32 - > 10进制数    26 -> 作为ascll码值代表的数字

	printf("%c\n", '\32');
    return 0;
}


//    \xdd -- dd表示两个十六进制数字
int main()
{
	printf("%c\n", '\x61');
	// 把十六进制数61转换成十进制数 -> 97    97在ascll码表上代表的是a
	return 0;
}

   // \后没有x，是8进制；有x，是16进制；\后是一个转义字符


int main()
{
	int input = 0;
	printf("问\n");
	printf("whether?(1/0)>: ");
	scanf_s("%d, &input");
	if(input == 1)
		printf("是\n");
	else
		printf("否\n");
	return 0;
}