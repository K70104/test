// 分支语句if、switch  循环语句while、for、do while
// 一个;隔开就是一条语句  ;空语句
#include <stdio.h> // if语句

int main()
{
	int age = 10;
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");

	return 0;
}
// 如果一个条件要执行多条语句 用代码块 {}


#include <stdio.h>

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1) // 悬空else
		if (b == 2)
			printf("hello\n");
		else
			printf("haha\n"); // 不输出 因为默认else和最近的未匹配的if相匹配
	return 0;
}
// 如果来判断是否相等 把常量写在左边 5 == sum 避免写错成赋值=


#include <stdio.h> // 判断一个数是否为奇数

int main()
{
	int a = 8;
	if (a % 2 == 1)
		printf("奇数\n");
	else
		printf("偶数\n");
	return 0;
}


#include <stdio.h> // 输出1-100的所有奇数

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



#include <stdio.h> // switch语句

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case2:
		printf("星期二\n");
		break;
	case3:
		printf("星期三\n");
		break;
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day) // switch后必须是整形
	{
	case 1: // case后整形常量表达式
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
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
	//     printf("hehe\n");  死循环

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


// 在循环中遇到break 终止循环 
// continue终止本次循环 直接跳转到while的判断部分 进行下一次循环的入口判断
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
	int ch = getchar(); // getchar 输入

	putchar(ch);
	printf("%c\n", ch); // putchar 输出 与printf作用相同
	return 0;
}


#include <stdio.h>

int main()
{
	int ch = 0;
	// 输入什么就输出什么 直到输入 ctrl + z 
	// EOF - end of file文件结束标志 -> -1
	while ((ch = getchar()) != EOF)
	{// getchar输入字符存进ch 判断是否等于EOF 若不等于则打印出来
		putchar(ch);
	}
	return 0;
}


#include <stdio.h> // 代码一

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password); // 输入密码 并存放在password的数值中
	// getchar(); // 缓冲区还剩一个'\n' 读取一下'\n'
	while ((ch = getchar()) != '\n')
	{
		; // 把所有字符读取完毕 \n 再进行下一步
	}
	printf("请输入(Y/N)：>");
	ret = getchar(); // Y/N
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	} // '\n' 的ASCII码表值是10
	return 0;
}


#include <stdio.h> // 代码二 只打印ASCII码0-9之间的字符 数字字符

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