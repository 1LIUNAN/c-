#define _CRT_SECURE_NO_WARNINGS 1
// #include<stdio.h>
//int main()
//{
//    printf("I lost my cellphone!");
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int t, a = 40, c = 212;
//    t = (-8 + 22) * a - 10 + c / 2;
//    printf("%d", t);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("远方很远，步履不停，未来可期。");
//	return 0;
//}

//空间大小
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int ));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
// 
//指针类型空间大小
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* ap = &a;
//	int* cp = &a;
//	printf("%p\n", ap);
//	printf("%p\n", ap+1);
//	printf("%p\n", cp);
//	printf("%p\n", cp+1);
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

#include<stdio.h>
int main()
{
	int arr[10] = { 10 };
	int* p = arr;
	for (int i = 0; i <= 9; i++)
	{
		*(p++) = i;
	}
	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}