#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//1. 给定两个整形变量的值，将两个值的内容进行交换。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	c = a;
//	a = b;
//	b = c;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("%d %d", num1, num2);
//	system("pause");
//	return 0;
//}
//3.求10 个整数中最大值。
//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int max = 0;
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		max = arr[0];
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}printf("max=%d", max);
//	system("pause");
//	return 0;
//}
//
//
//
//4.将三个数按从大到小输出。
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 0;
//	if (b > a)
//	{
//		d = a; 
//		a = b; 
//		b = d;
//	}
//	if (a < c)
//	{
//		d = a;
//		a = c;
//		c = d;
//	}
//	if (b < c)
//	{
//		d = b;
//		b = c;
//		c = d;
//	}
//	printf("%d %d %d", a, b, c);
//	system("pause");
//	return 0;
//}



//5.求两个数的最大公约数。
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	while (a%b)
	{
		int c = 0;
		c = a%b;
		a = b; 
		b = c;
	}
	printf("%d\n", b);
	system("pause");
	return 0;
}