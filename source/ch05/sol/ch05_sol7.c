#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main(void)
{
    int i = 0, j = 0, k = 0;

    scanf("%d", &i);

    for (k = 1; k <= i; k++) {
        if (k % 5 == 0)  j = j + k;
    }
    printf("%d", j);
}