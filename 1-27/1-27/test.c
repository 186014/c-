#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>
//int x;
//int y;
//int MAX(x, y) {    通过调用自定义函数MAX来比较两个数的大小
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max = MAX(num1, num2);
//	printf("较大数是: %d\n", max);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int max = 0;
//	scanf("%d%d", &x, &y);
//	max = x>y?x:y;
//		printf("较大数是: %d\n",max);
//	return 0;
//}
//int main()
//{
//
//
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//int main()
//{/*
	//int a = 0;
	//int b = ~a;
	//printf("%d\n", b);*/
	/*int a = 10; 
	int b = a++;    后置++
	printf("a=%d b=%d\n",a, b);*/
	//int a = 10;
	//int b = ++a;  前置++
	//printf("a=%d b=%d\n", a, b);
	/*int a =(int) 3.13;
	return 0;*/

//}




// !!!!!!!!!!!!!!重要 建议用监视功能观察运行过程
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = % d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	}
//	return 0;
//}
//extern int Add(int, int);
//int main()
//{
//	extern int val;
//	printf("val= %d\n", val);
//
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum= %d\n", sum);
//	return 0;
//
//}
//#define Max(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a,b);
//	printf("max= %d\n", max);
//	return 0;
//}
int main()
{
	//int a = 10;
	//int* p = &a;
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//*p = 90;
	//printf("%d\n", a);
	//

	char ch = 'a';
	char* da = &ch;
	*da = 'e';
	printf("%c\n", ch);
	printf("%p\n", ch);
	printf(" % d\n", sizeof(da));
	return 0;
}