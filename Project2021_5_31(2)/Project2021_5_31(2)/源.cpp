#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int a, n,t;
//    while (scanf("%d %d", &a, &n) != EOF)
//    {
//        t = pow(a, n);
//        printf("%d\n",t);
//
//    }
//    return 0;
//}
//浮点数的精确度问题
//void count(float a, char ch, float b)
//{
//    if (ch == '+')
//    {
//        printf("%.4lf%c%.4lf=%.4lf", a, ch, b, a + b);
//    }
//    else  if (ch == '-')
//    {
//        printf("%.4lf%c%.4lf=%.4lf", a, ch, b, a - b);
//    }
//    else     if (ch == '*')
//    {
//        printf("%.4lf%c%.4lf=%.4lf", a, ch, b, (a * b));
//    }
//    else     if (ch == '/')
//    {
//        if (b != 0)
//            printf("%.4lf%c%.4lf=%.4lf", a, ch, b, a / b);
//        else
//            printf("Wrong!Division by zero!");
//    }
//    else printf("Invalid operation!");
//
//
//}
//int main()
//{
//    double a, b;
//    char ch;
//    while (scanf("%lf%c%lf", &a, &ch, &b) != EOF)
//    {
//        count(a, ch, b);
//    }
//}
//#include<stdio.h>
//排序题
//#include<stdio.h>
//#include <iostream>

//using namespace std;
//排序题
int main()
{
    int i, j, n;
    float arr[10];
    float num = 0;
    float max, min;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%f", &arr[i]);
  /*  for (i = 0; i < n; i++)
        printf("%f ", arr[i]);*/
   /* printf("\n");*/
    max = arr[0];
    min = arr[0];
    for (i = 1; i < n; i++)
        if (max < arr[i])
        {
            max = arr[i];
        }
    printf("%f\n", max);

    for (i = 1; i < n; i++)
        if (min > arr[i])
        {
            min = arr[i];
        }
    printf("%f\n", min);

    for (i = 0; i < n; i++)
    {
        num += arr[i];
    }
    printf("%f\n", num/n);
}

//#include<stdio.h>
//#include <iostream>
//
//using namespace std;
////排序题
//int main()
//{
//    int i, j, n;
//    float arr[10];
//    float num = 0;
//    float max, min;
//
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%f", &arr[i]);
//    for (i = 0; i < n; i++)
//        printf("%f ", arr[i]);
//    printf("\n");
//    max = arr[0];
//    min = arr[0];
//    for (i = 1; i < n; i++)
//        if (max < arr[i])
//        {
//            max = arr[i];
//        }
//    printf("%f\n", max);
//
//    for (i = 1; i < n; i++)
//        if (min > arr[i])
//        {
//            min = arr[i];
//        }
//    printf("%f\n", min);
//
//    for (i = 0; i < n; i++)
//    {
//        num += arr[i];
//    }
//    printf("%f\n", num);
//}