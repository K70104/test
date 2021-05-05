// 数组
// type_t 数组的元素类型  arr_name 数组名  const_n 常量表达式，用来指定数组的大小  []里放常量
#include <stdio.h>

int main()
{
	int arr1[10] = { 1, 2, 3 }; // 不完全初始化 剩下的元素默认初始化为0
	char arr2[5] = { 'a', 'b' }; // 同上 b可换为98
	char arr3[5] = "ab"; // ok
	char arr[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(arr)); // 4
	// strlen和sizeof没有关联
	// strlen 是求字符串长度的 - 只能针对字符串求长度 - 库函数-使用头文件
	// sizeof 计算变量、数组、类型的大小 - 单位是字节 - 操作符-不需头文件

}


int main() // 一维数组
{   // []下标引用
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
		printf("&arr[%d] = %p\n", i, &arr[i]);// 数组再内存中是连续存放的
	}
	return 0;
}


int main() // 二维数组
{
	int arr[3][4] = { 1, 2, 3, 4 }; // 三行四列
	char ch[5][6];
	int arr[][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} }; // 只能省略行
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


// 数组作为函数参数
#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	// 确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// 每一趟冒泡排序
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
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }; //对arr进行排序 排成升序
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	// arr是数组 对它传参 实际传过去的是数组arr首元素的地址 arr[0]
	bubble_sort(arr, sz); // 冒泡排序函数
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include <stdio.h> // 优化

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1; // 假设这一趟要排序的数据已经有序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; // 本趟排序的数据其实不完全有序
			}
		}
		if (flag == 1) // 若一趟升序完成 直接break 如9 1 2 3 4 5 6 7 8 --第一趟 1 9 2 3 4 5 6 7 8 ... -- 1 2 3 4 5 6 7 8 9 第二趟判断后直接break
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


// 数组名是什么  数组名是数组首元素的地址（有两个例外）
#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	printf("%p\n", arr); // 首元素地址
	printf("%p\n", &arr[0]); // 首元素地址
	printf("%d\n", *arr); // 简引用 1
	return 0;
}
// 1. sizeof(数组名) - 数组名代表的是整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
// 2. &数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	printf("&p\n", arr); // 首元素地址
	printf("&p\n", &arr[0]); // 首元素地址
	printf("&p\n", &arr); // 数组的地址

	printf("&p\n", arr+1); // 加4
	printf("&p\n", &arr[0]+1); // 加4 
	printf("&p\n", &arr+1); // 加28 - 不是首元素地址，而是数组的地址，7个元素
}