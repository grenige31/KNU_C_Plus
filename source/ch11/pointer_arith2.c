#define _CRT_SECURE_NO_WARNINGS
// �������� ���� ����
#include <stdio.h>


int main(void)
{
	int i = 10;
	int *pi = &i;

	printf("i = %d,  pi = %p\n", i, pi);
	(*pi)++;	

	printf("i = %d,  pi = %p\n", i, pi);
	printf("i = %d,  pi = %p\n", i, pi);
	*pi++;	
	printf("i = %d,  pi = %p\n", i, pi);

	return 0;
}