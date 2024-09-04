#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    int i = 0, j = 0, k = 0;

    scanf("%d %d", &i, &j);

    k = (j + 100) - i;
    printf("%d\r\n", k);

    if (k > 0) {
        printf("Obesity");
    }

    return 0;
}
