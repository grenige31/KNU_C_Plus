#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_reverse(int a[], int n);

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	print_reverse(a, 5);	

	return 0;
}

void print_reverse(int a[], int n)
{
	int *p = a + n;

	while(p-- > a)
		printf("%d\n", *p);
}
