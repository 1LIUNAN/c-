#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//̽��i++��*p++��
//int main()
//{
//	int arr[10] = { 5,5,5,5,5,5,5,5,5,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		*(p++ ) = i;
//		
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 5,5,5,5,5,5,5,5,5,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	for (int i = 0; i < sz;)
//	{
//		arr[i] = i++;
//
//	}
//	return 0;
//}

//ָ���ָ��
//int main()
//{
//	int arr[10] ={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//	int* ap = &arr[9];
//	int* cp = &arr[0];
//printf("%d", ap-cp);
//return 0;
//}

//���ַ������Ⱥ���strlen��ģ��ʵ��
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "asdfghhjk";
	int len = my_strlen(arr);
	printf("%d",len);
	return 0;
}