#define _CRT_SECURE_NO_WARNINGS
// 사용자가 0을 입력할 때까지 숫자를 더한다. 
#include <stdio.h>
int main(void)
{
	int number, sum = 0;

	// 루프 몸체가 적어도 한번은 실행된다. 
	do
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);

	printf("숫자들의 합 = %d \n", sum);

	return 0;
}