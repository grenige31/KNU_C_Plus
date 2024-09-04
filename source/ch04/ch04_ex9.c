#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;
	printf("정수를 입력하시오:");
	scanf("%d", &number);
	switch (number) {
	case 0:
		printf("없음\n");
		break;
	case 1:
		printf("하나\n");
		break;
	case 2:
		printf("둘\n");
		break;
	default:
		printf("많음\n");
		break;
	}
}
