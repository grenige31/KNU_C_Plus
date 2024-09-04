#define _CRT_SECURE_NO_WARNINGS
// if 문을 사용하여 절대값을 구하는 프로그램 
#include <stdio.h> 

int main(void)
{
	int number;

	printf("정수를 입력하시오:");
	scanf("%d", &number);

	if (number < 0)
		number = -number;

	printf("절대값은 %d 입니다.\n", number);

	return 0;
}
