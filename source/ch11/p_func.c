#define _CRT_SECURE_NO_WARNINGS
// 포인터와 함수의 관계
#include <stdio.h>

void sub(int b[], int n);

int main(void)
{
	int a[3] = { 1,2,3 };
	
	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a, 3);
	printf("%d %d %d\n", a[0], a[1], a[2]);
	
	return 0;
}

void sub(int b[], int n)
{
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}
