#define _CRT_SECURE_NO_WARNINGS
// 포인터의 증감 연산
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