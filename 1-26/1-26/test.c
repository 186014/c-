#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//#define MAX 10
//
//Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//
//{
	/*int num1 = 10;
	int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	sum = Add(num1, num2);
		printf("sum = %d\n", sum);
		sum = Add(a, b);
		printf("sum = %d\n", sum);*/
		// /*
//	int line = 0;--
//	printf("�������");
//	while (line < 20000) {
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��offer\n,");*/
	/*
	int input = 0;
	printf("���뻪Ϊ\n");
	printf("��Ҫ�ú�ѧϰ��?(1/0)>: ");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer");
	else
		printf("������");*/

	/*printf("%c\n", '\x61'); 
	printf("%c\n",'\132');*/
	/*printf("%d\n", strlen("c:\test\32\test.c"));*/
	//printf("%s\n", "a\"");
	/*printf("c:\\test\\32\\test.c");*/
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));*/
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	
	/*enum Color {
		RED,
		YELLOW,
		BLUE
	};
	enum Color color = BLUE;
	color = YELLOW;
	printf("%d\n",RED);
	printf("%d\n",YELLOW);
	printf("%d\n",BLUE);
	printf("%d\n",color);
	*/
	/*int arr[MAX] = { 0 };
	printf("%d\n", MAX);*/
	/*const int n = 10;
	int arr[10] = { 0 }; ������n��n���Ǳ���ֻ�������г�����*/
	//int num = 2;
	//printf("%d\n", num);
	//num = 4;
	//printf("%d\n", num);
	//���泣��//
	//3.14;//
	//100;//
	//const-������ ��const�������εĳ�������ʾ�ñ������������ܱ���ֵ
	//const int num = 1��

//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		printf("% d\n", arr[i]); 
//	}
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//		
//
//	}
//
//	//printf("%d\n", arr[9]); �±���ʽ����Ԫ��
//int a = 5%2;
//printf("%d\n", a);

//	return 0;
//}
//int main()
//{/*
	//int a = 1;  ��λ������
	//int b = a << 2;
	//printf("%d\n", b);*/

	//int a = 3;  λ������ & | ^
	//int b = 5;
	//int c = a ^ b;
	//printf("%d\n", c);

	//int a = 10;  ���ϸ�ֵ�� += -=
	//a += 20;
	//printf("%d\n", a);
//
//	int a = 0;  ��Ŀ������
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
int main()
{
	int line = 0;
	for(line = 0;line<200;line++)
	{
		printf("%d\n", line);

	}
	if (line >= 200)
		printf("��offer");
	return 0;
}