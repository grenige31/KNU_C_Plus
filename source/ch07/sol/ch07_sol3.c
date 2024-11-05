#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, j, sum = 0;
    int num[6];
    for (i = 0; i < 5; i++) {
        j = 1 + i;
        scanf("%d ", &num[i]);
        if (j == 1 || j == 3 || j == 5)
            sum += num[i];
    }
    printf("%d", sum);
	return 0;
}