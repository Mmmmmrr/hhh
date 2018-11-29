#include <stdio.h>


int main()
{
	int i = 1;
	while (i<=10)
	{
		if (i == 5)
			continue;
		printf("%d", i);
		i++;
	}system("pause");
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d", i);
//		}
//	}system("pause");
//	return 0;
//}