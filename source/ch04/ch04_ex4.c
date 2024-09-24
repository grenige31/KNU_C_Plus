#define _CRT_SECURE_NO_WARNINGS
// 3의 배수인수 판단 
#include <stdio.h> 

int main(void)
{
	int num;
	printf("숫자를 입력하시오: ");
	scanf("%d", &num);

	if (num % 3 == 0)
	{
		printf("3의 배수임.\n", num);
	}
	else
	{
		printf("3의 배수 아님 \n", num);
	}
	return 0;
}
