#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
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
//2. ����������ʱ���������������������ݣ������⣩
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
//3.��10 �����������ֵ��
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
//4.�����������Ӵ�С�����
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



//5.�������������Լ����
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