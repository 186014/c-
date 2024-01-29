#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct Book {   
	char name[20];
	short price;
};
int main()
{struct Book book = {"C语言程序设计",40 };
 struct Book* ph = &book;
 /*printf("书名是：%s\n", (*ph).name); 用指针存变量book
 printf("价格是：%d元\n", (*ph).price);*/


 //printf("价格是：%d元\n", ph->price); 指针ph指向的就是变量book
 //printf("价格是：%s\n", ph->name);
 //
//.  结构体变量.成员
//-> 结构体指针->成员
// 
printf("书名是: %s\n", book.name);
printf("价格是: %d元\n", book.price);
book.price = 20;
printf("修改后的价格是: %d元\n",book.price);
strcpy(book.name, "c++");
printf("修改后的书名是: %s\n", book.name);
	return 0;
}