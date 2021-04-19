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


// for循环
/*for(表达式1; 表达式2；表达式3)    1-初始化 2-条件判断 3-循环条件调整
	循环语句*/
#include <stdio.h> // 用for循环打印1-10数字

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}
// for循环：12346789  while循环：1234死循环
// 不要再for循环体内修改循环变量 避免死循环
// 建议循环控制变量的取值采用前闭后开区间写法
// for(i=0; i<10; i++)  <- i<=9


// for循环变种
#include <stdio.h>

int main()
{
	// 变种1
	for (; ;) // 初始化、调整、判断皆可省略。  但判断省略，判断条件恒为正，死循环
	{
		printf("hehe\n"); // 死循环
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
		for (; j < 10; j++) // 若省略初始化 打印10次后j还是10 不执行  不省略，10*10=100个hehe
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
		printf("hehe\n"); // 2个hehe
	}
	return 0;
}


#include <stdio.h>

int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++) // 循环0次 k=0赋值 0为假 不循环；若是非0则是死循环
		k++;
	return 0;
}


// do...while循环
#include <stdio.h>

int main()
{
	int i = 1;
	do
	{
		printf("%d ", i); // do while打印1-10
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
		printf("%d ", i); // 1 2 3 4 死循环
		i++;
	} while (i <= 10);
	return 0;
}


// 练习
#include <stdio.h> // 1.计算n的阶乘 

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


#include <stdio.h> // 2.计算1!+2!+3!+...+10!

int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	// 1 + 2 + 6 = 9
	for (n = 1; n <= 3; n++)
	{
		ret = 1; // 每次初始化
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
	int i = 0; // 简化
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


#include <stdio.h> // 3.在一个有序数组中查找具体的某个数字

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 ,6, 7, 8, 9, 10 };
	int k = 7; // 在arr数组中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标是：%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("找不到\n");
	return 0;
}


#include <stdio.h> // 折半查找法/二分查找法

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7; // 若要找的元素是7

	int sz = sizeof(arr) / sizeof(arr[0]); // 计算元素的个数
	int left = 0; // 左下标
	int right = sz - 1; // 右下标

	while (left <= right)
	{
		int mid = (left + right) / 2; // mid - 中间元素的下标
		if (arr[mid] > k) // 若中间元素比要找的k大
		{
			right = mid - 1; // 此时的右下标为中间下标减一 左下标不变为0
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n"); // {1, 2, 3, 4, 5, 6, 8, 9, 10, 11}
	}
	return 0;
}


#include <stdio.h>// 4.演示多个字符从两端移动，向中间汇聚
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
	// int right = sizeof(arr1) / sizeof(arr1[0]) - 2; // 如“abc”，加上\0一共4个元素，下标分别为0 1 2 3 ，减2为下标数2
	int right = strlen(arr1) - 1; //strlen求元素个数遇\0停止 求下标只要减1  头文件string

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000); // 休息一秒 1000毫秒 1秒  头文件windows.h 
		system("cls"); // 执行系统命令的一个函数  cls - 清空屏幕  头文件stdlib.h
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}


#include <stdio.h>// 模拟用户登陆 三次密码输入正确登陆成功，错误退出程序
#include <string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) // 不能用 == 来比较两个字符串是否相等，应使用一个库函数-strcmp  头文件string.h
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}