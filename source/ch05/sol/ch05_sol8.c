#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = n; i < 100; i = i + n) {
		printf("%d ", i);
		if (i % 10 == 0)
			break;
	}
    return 0;
}