#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//成绩转换
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if (a > 100 || a < 0)
//        printf("F");
//    else
//        switch (a / 10)
//        {
//        case 10:
//        case 9:printf("A"); break;
//        case 8:printf("B"); break;
//        case 7:printf("C"); break;
//        case 6:printf("D"); break;
//        default:printf("E"); break;
//        }
//    return 0;
//}
//小乐乐是否被叫家长
//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if ((a + b + c) / 3 >= 60)
//        printf("NO");
//    else
//        printf("YES");
//    return 0;
//}
//冒泡排序
//int main()
//{
//    int i, j, t;
//    int a[4] = { 0 };
//    for (i = 0; i < 4; i++)
//        scanf("%d ", &a[i]);
//    for (i = 0; i < 4; i++)
//        for (j = 0; j < 4 - i; j++)
//            if (a[j] < a[j + 1])
//            {
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//    printf("%d", a[0]);
//    return 0;
//
//}


//输出规划后n行m列的矩阵，每个数的后面有一个空格。
int main()
{
    int n, m;
    int i, j;
    scanf("%d %d\n", &n, &m);
    int a[100] = { 0 };
    for (i = 0; i < m * n; i++)
        scanf("%d ", &a[i]);//输入
        //输出
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i * n + j]);
        printf("\n");
    }

    return 0;
}
