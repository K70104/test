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


#include <stdio.h>// 5.模拟用户登陆 三次密码输入正确登陆成功，错误退出程序
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