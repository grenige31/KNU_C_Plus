#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int number;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	if (number > 0)
		printf("양수입니다.");

	printf("입력된 값은 %d입니다.", number);

	return 0;
}
