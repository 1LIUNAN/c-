#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//排序题
//int main()
//{
//    int i, j, t, n;
//    float arr[100] = {0};
//    //float num = 0;
//    
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//        scanf("%.1f ", arr[i]);//输入完成
//    for (i = 0; i < n; i++)
//        for (j = 0; j < n - i; j++)
//            if (arr[j] < arr[j + 1])
//            {
//                t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//            }//最大
//    printf("%.2f ", arr[100-n]);
    //for (i = 0; i < n; i++)
    //    for (j = 0; j < n - i; j++)
    //        if (arr[j] < arr[j + 1])
    //        {
    //            t = arr[j];
    //            arr[j] = arr[j + 1];
    //            arr[j + 1] = t;
    //        }//最小
    //printf("%.2f ", arr[99]);

    //for (i = 0; i < n; i++)
    //    num += arr[i];
    //printf("%.2f", num / n);
    //return 0;

//}

//
//
//float count(float a, char ch, float b)
//{
//    if (ch == '+')
//    {
//        printf("%.4f%c%.4f=%.4f", a, ch, b, a + b);
//    }
//    else
//        if (ch == '-')
//        {
//            printf("%.4f%c%.4f=%.4f", a, ch, b, a - b);
//        }
//        else     if (ch == '*')
//        {
//            printf("%.4f%c%.4f=%.4f", a, ch, b, a * b);
//        }
//        else     if (ch == '/')
//        {
//            if (b != 0)
//                printf("%.4f%c%.4f=%.4f", a, ch, b, a / b);
//            else
//                printf("Wrong!Division by zero!");
//        }
//        else printf("Invalid operation!");
//    return 0;
//
//}
//int main()
//{
//    float a, b;
//    char ch;
//    while (scanf("%.1f%c%.1f", &a, &ch, &b) != EOF)
//        count(a, ch, b);
//
//}

//int main()
//{
//    int i;
//    int m = 0, n = 0;
//    int a[10] = { 0 };
//    for (i = 0; i < 10; i++)
//        scanf("%d ", &a[i]);
//    for (i = 0; i < 10; i++)
//    {
//        if (a[i] > 0)
//            n++;
//        else if (a[i] < 0)
//            m++;
//    }
//    printf("positive:%d\nnegative:%d", n, m);
//    return 0;
//
//}

//int main()
//{
//    int i;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        if (i % 10 == 9 || i % 100 / 10 == 9 || i / 100 % 10 == 9)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}


int main()
{
    int i, j, n,m;
    int num = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        m = 1;
        for (j = 1; j <= i; j++)
            m *= j;

        num += m;
    }
    printf("%d", num);
    return 0;
}



//#include<stdio.h>
//#define N 100
//int main()
//{
//    int i, n, j, t;
//    int a[N] = { 0 };
//    scanf("%d\n", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d ", &a[i]);
//    for (i = 0; i < n; i++)
//        for (j = 0; j < n - i; j++)
//        {
//            if (a[j] < a[j + 1])
//            {
//                t = a[j + 1];
//                a[j + 1] = a[j];
//                a[j] = t;
//            }
//        }
//    printf("%d", a[0]);
//    return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a[100];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    int max = a[0];
//    for (int j = 1; j < n; j++)
//    {
//        if (a[j] > max)
//            max = a[j];
//    }
//    printf("%d", max);
//    return 0;
//}