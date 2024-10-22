#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, odd = 0, even = 0;
	while (1) {
		scanf("%d", &num);

		if (num == 0)
			break;

		if (num % 2 == 0) {
			even++;
		}
		else {
			odd++;
		} 
	}

	printf("odd : %d\neven : %d", odd, even);
	return 0;
}
