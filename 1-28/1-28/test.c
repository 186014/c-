#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
struct Book {   
	char name[20];
	short price;
};
int main()
{struct Book book = {"C���Գ������",40 };
 struct Book* ph = &book;
 /*printf("�����ǣ�%s\n", (*ph).name); ��ָ������book
 printf("�۸��ǣ�%dԪ\n", (*ph).price);*/


 //printf("�۸��ǣ�%dԪ\n", ph->price); ָ��phָ��ľ��Ǳ���book
 //printf("�۸��ǣ�%s\n", ph->name);
 //
//.  �ṹ�����.��Ա
//-> �ṹ��ָ��->��Ա
// 
printf("������: %s\n", book.name);
printf("�۸���: %dԪ\n", book.price);
book.price = 20;
printf("�޸ĺ�ļ۸���: %dԪ\n",book.price);
strcpy(book.name, "c++");
printf("�޸ĺ��������: %s\n", book.name);
	return 0;
}