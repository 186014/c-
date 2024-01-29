#define _CRT_SECURE_NO_WARNINGS 1 //忽视不安全警告，加在源文件的第一行

#include <stdio.h>


//int main()
//{
//	extern int g_acl;
//	printf("g_acl=%d\n", g_acl);
//	return 0;
//}

int main()
{
	int num1 = 1;
	int num2 = 2;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}


//int a = 20;//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//
//	char pi = 'B';//
//	printf("%c\n", pi);//
//	 
//	int age = 100;//
//	printf("%d\n", age);//
//	 
//	float f = 6.0;//
//	printf("%f\n", f);//
//
//	double h = 3.14;//
//	printf("%lf\n", h);//
//	
//	printf("%d\n", sizeof(char));//
//	printf("%d\n", sizeof(short));//
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof(long));//
//	printf("%d\n", sizeof(long long));//
//	printf("%d\n", sizeof(float));//
//	printf("%d\n", sizeof(double));//
//
//	return 0;//
//}//