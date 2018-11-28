#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int init(int arr[5],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i]=i;
		printf("%d  ", arr[i]);
	}
}
int empty(int arr[5], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
		printf("%d  ", arr[i]);
	}
}
void reverse(int arr[5], int sz)
{
	int i = 0;
	int left = 0;
	int right = sz-1;
	for (i = 0; i < sz; i++)
	{
		while (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
		printf("%d  ", arr[i]);
	}
}
int main()
{
	int i = 0;
	int arr[5];
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("初始化数组： \n");
	init(arr,sz);
	printf("\n");
	printf("逆转数组为: \n");
	reverse(arr, sz);
	printf("\n");
	printf("清空数组： \n");
	empty(arr, sz);
	printf("\n");
	system("pause");
	return 0;
}




//判断闰年
//int Prime_num(int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % i == 0)
//			{
//				return 0;
//			}
//			if (j >= i)
//				return x;
//		}
//	}
//}
//int main()
//{
//	int x = 0;
//	int ret = 0;
//	scanf("%d", &x);
//	ret=Prime_num(x);
//	if (ret)
//	{
//		printf("%d是素数", x);
//	}
//	else
//	{
//		printf("%d不是素数", x);
//	}
//	system("pause");
//	return 0;
//}




//判断闰年
//int Run_year(int year)
//{
//		if (year %4 == 0 && year / 100 != 0)
//		{
//			return year;
//		}
//		else if (year / 400 == 0)
//		{
//			return year;
//		}
//		else
//			return 0;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret=Run_year(year);
//	if (ret)
//	{
//		printf("%d是闰年", year);
//	}
//	else
//		printf("%d不是闰年", year);
//	system("pause");
//	return 0;
//}




//函数交换两个数
//int Swap(int *x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 5;
//	int b = 2;
//	Swap(&a,&b);
//	printf("a=%d  b=%d", a, b);
//	system("pause");
//	return 0;
//}
//

//计算器函数调用
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 1;
//	int ret = 0;
//	int(*arr[5])(int x, int y) = { 0, Add, Sub, Mul, Div };
//	while (input)
//	{
//		printf("***************************\n");
//		printf("*****  1.Add   2.Sub  *****\n");
//		printf("*****  3.Mul   4.Div  *****\n");
//		printf("***************************\n");
//		printf("请选择类型：");
//		scanf("%d", &input);
//		if ((input<=4 && input>=1))
//		{
//			printf("请输入操作数： ");
//			scanf("%d%d", &x, &y);
//			ret = (*arr[input])(x, y);
//		}
//        else
//		    printf("输入有误\n");
//		printf("ret=%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}





//冒泡通用
//int cmp(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//void Swap(char*buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		*buf1++;
//		*buf2++;
//	}
//}
//void bubble_sort(void * base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp(((char*)base + (j*width)), ((char*)base + (j + 1)*width))>0)
//			{
//				Swap((char*)base +(j*width), (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10, 8, 7, 9, 4, 5, 3, 2, 1, 6 };
//	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d  ", arr[i]);
//	}printf("\n");
//	char arr1[] = { 'a', 'v', 's', 'm', 'p' };
//	bubble_sort(arr, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%c  ", arr1[i]);
//	}printf("\n");
//	system("pause");
//	return 0;
//}




//快排
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 9, 8, 4, 5, 7, 6, 2, 1, 3, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}system("pause");
//	printf("\n");
//	return 0;
//}


//乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int s = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			s = i*j;
//			printf("%d*%d=%2d  ", i, j, s);
//		}
//		printf("\n");
//	}	
//	
//	system("pause");
//	return 0;
//}