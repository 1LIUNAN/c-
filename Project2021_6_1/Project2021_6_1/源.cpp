#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n, i, j;
//    while (scanf("%d\n", &n) != EOF)
//    {
//        for (i = 0; i < n; i++)
//        { 
//            { printf("*");} 
//       printf("\n"); 
//        }
//        
//        for (j = n - i - 1; j >= 0; j--)
//            printf(" ");
//      
//
//    }
//
//    return 0;
//}

//查找数字
//#include<stdio.h>
//int main()
//{
//    int n, i, a;
//    int arr[100] = { 0 };
//    int count = 0;
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d ", &arr[i]);
//
//    scanf("%d", &a);
//    for (i = 0; i < n; i++)
//    {
//        if (a == arr[i])
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}
//求最大值


//#include<stdio.h>
//double max3(double m, double n, double t)
//{
//    if (m >= n && m >= t)
//        return m;
//    if (n >= m && n >= t)
//        return n;
//    if (t >= m && t >= n)
//        return t;
//}
//double max(double a, double b, double c)
//{
//    double y;
//    double q, e, r;
//    q = max3(a + b, b, c);
//   /* printf("q=%lf\n", q);*/
//    e = max3(a, b + c, c);
//    //printf("e=%lf\n", e);
//    r = max3(a, b, b + c);
//  /*  printf("r=%lf\n", r);*/
//
//    y =q / (e +r );
//   /* printf("y=%.2lf", y);*/
//    return y;
//   /* return 0;*/
//}
//int main()
//{
//  double a, b, c;
//    double m;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    m = max(a, b, c);
//    printf("%.2lf", m);
//    return 0;
//}


//#include<stdio.h>
//
//int max3(int a, int b, int c) {
//	int max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		max = c;
//	return max;
//}
//
//
//int main() {
//	int a, b, c;
//	double m;
//	scanf("%d %d %d", &a, &b, &c);
//	m = max3(a + b, b, c) * 1.0 / (max3(a, b + c, c) + max3(a, b, b + c));
//	printf("%.2lf", m);
//
//	return 0;
//}
//测试数组

//int main()
//{
//	int i, j;
//	int a[100][100];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			scanf("%d ",a[i][j]);
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//				printf("%d", a[i][j]);
//		printf("\n");
//
//	}
//}

//#include<stdio.h>
//int main()
//{
//    int n;
//    int t;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n < 12)
//            t = 2;
//        else  if (n % 12 == 11)
//            t = (n / 12) * 4;
//        else t = (n / 12) * 4 + 2;
//        printf("%d\n", t);
//    }
//    
//    return 0;
//
//}
//
//#include<stdio.h>
//int main()
//{
//    int hour, minute, k;
//    int m, h;
//    char ch;
//    scanf("%d%c%d %d", &hour, &ch, &minute, &k);
//        m = (minute + k) % 60;
//        h = hour + (minute + k) / 60;
//        if (h > 23)
//            h = h % 24;
//    printf("%02d%c%02d", h, ch, m);
//    return 0;
//
//}
//精度！！！
//#include<stdio.h>
//int main()
//{
//    int n, i;
//    int  num = 0;
//    scanf("%d", &n);
//
//    for (i = 1; i <= n; i++)
//        num += i;
//    printf("%d", num);
//    return 0;
//
////}
//
//#include<stdio.h>
//int main()
//{
//    double n, i;
//    double  num = 0;
//    scanf("%lf", &n);
//
//    for (i = 1; i <= n; i++)
//        num += i;
//    printf("%.0lf", num);
//    return 0;
//}
//逆序输出
//
//#include<stdio.h>
//int main()
//{
//    int a[10];
//    int t, i, j;
//    for (i = 0; i < 10; i++)
//        scanf("%d ", &a[i]);
//    //for (j = 0; j < 5; j++)
//    //{
//    //    t = a[j];
//    //    a[j] = a[9 - j];
//    //    a[9 - j] = t;
//    //}
//    for (int i = 9; i >=0; i--)
//        printf("%d ", a[i]);
//    return 0;
//
//}
//
//#include<stdio.h>
//int main()
//{
//    int a[10];
//    int t, i, j;
//    for (i = 0; i < 10; i++)
//        scanf("%d ", &a[i]);
//    for (j = 0; j < 5; j++)
//    {
//        t = a[j];
//        a[j] = a[9 - j];
//        a[9 - j] = t;
//    }
//    for (i = 0; i < 10; i++)
//        printf("%d ", a[i]);
//    return 0;
//
//}
//
//#include<stdio.h>
//int main()
//{
//    int a[100];
//    int n, i, j, max, min;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d ", &a[i]);
//    max = a[0];
//    min = a[0];
//    for (j = 1; j < n; j++)
//    {
//        if (max < a[j])
//            max = a[j];
//    }
//    for (j = 1; j < n; j++)
//    {
//        if (min > a[j])
//            min = a[j];
//    }
//    printf("%d", max - min);
//
//
//}
//求素数
////////////#include<stdio.h>
////////////int main()
////////////{
////////////    int i, j, count = 0;
////////////
////////////    for (i = 2; i <10; i++)
////////////    {
////////////      
////////////       for (j = 2; j<i; j++)
////////////        {
////////////            if (i % j == 0)
////////////                break;
////////////            count++;
////////////            break;
////////////        }
////////////       
////////////    }
////////////    printf("%d", count);
////////////}
//
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}

//密码输入过程中的getchar的使用
//int main()
//{
//	char ch=0;
//	char password[100] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	while (getchar() != '\n')
//	{
//		;
//	}
//	printf("请确认密码Y/N:");
//	ch = getchar();
//	if (ch == 'Y')
//		printf("确认完成；");
//	if (ch == 'N')
//		printf("放弃确认；");
//	printf("%s", password);
//	return 0;
//} 
////////////#include<stdio.h>
////////////int main()
////////////{
////////////	char ch = 0;
////////////	char password[100] = { 0 };
////////////	printf("请输入密码：");
////////////	gets(password);
////////////
////////////	printf("请确认密码Y/N:");
////////////	ch = getchar();
////////////	if (ch == 'Y')
////////////		printf("确认完成；");
////////////	if (ch == 'N')
////////////		printf("放弃确认；");
////////////	printf("%s", password);
////////////	return 0;
////////////}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}

//for循环的变种
//#include<stdio.h>
//int main()
//{//变种1
//	//for (;;)
//	//{
//	//	printf("hehe\n");
//	//}
////变种2
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x,y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//		for (; j < 10; j++)
//			printf("hehe\n");
//	return 0;
// 
//}