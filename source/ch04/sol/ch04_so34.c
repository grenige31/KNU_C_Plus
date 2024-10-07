#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    int i = 0, j = 0;

    scanf("%d %d", &i, &j);

    if (i < j) {
        printf("%d", j - i);
    }
    else {
        printf("%d", i - j);
    }

    return 0;
}
