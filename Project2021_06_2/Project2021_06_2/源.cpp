//计算N的阶乘
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n,i;
//	long long num = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		num *= i;
//	printf("%lld", num);
//	return 0;
//}

//计算1！+2！+3！+ ...+10!
//int main()
//{
//	int a,i, num, t;
//	num = 0;
//	for (a = 1; a <= 4; a++)
//	{t = 1;
//		for (i = 1; i <= a; i++)
//		
//		{
//			t *= i;
//		}
//	num += t;
//	}	
//	printf("%d", num);
//	return 0;
//
//
//}

//优化
int main()
{
	int a, i, num, t;
	num = 0;
	t = 1;
	for (a = 1; a <= 10; a++)
	{
		t *= a;
	num += t;
	}
	printf("%d", num);
	return 0;

}
