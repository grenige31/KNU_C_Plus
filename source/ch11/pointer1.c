#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int i = 3000;
	int *p=NULL;	

	p = &i;	
	

	printf("i = %d\n", i);	// ������ �� ���
	printf("&i = %u\n\n", &i);	// ������ �ּ� ���

	printf("p = %u\n", p);	// �������� �� ���
	printf("*p = %d\n", *p);	// �����͸� ���� ���� ���� �� ���

	return 0;
}	