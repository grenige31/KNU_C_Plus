#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void)
{
	int x = 10, y = 10;

	printf("x=%d\n", x);
	printf("++x의 값=%d\n", ++x);
	printf("x=%d\n\n", x);

	printf("y=%d\n", y);
	printf("y++의 값=%d\n", y++);
	printf("y=%d\n", y);

	return 0;
}
