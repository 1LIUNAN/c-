

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (a == 2)
//			printf("hehe\n");
//		else
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int num=4;
//	if (5 == num)//代码书写风格
//		/*if (num = 5)*/  //这样写错不会报错
//		printf("yes");
//	else printf("no");
//	return 0;
//}

//判断一个数是否为奇数

//#include<stdio.h>
//int main()
//{
//	int a;
	//for (a = 1; a % 2 != 0 && a <= 100;a++)
//	{
//		{
//		printf("%d\n", a);
//	
//		}	a++;
//	} 
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a;
	for (int a = 1; a <= 100; a += 2) //for (a = 1; a <= 100; a++)
	{
		//if (a % 2 != 0) 
			printf("%d ", a);
	}
	return 0;
}
