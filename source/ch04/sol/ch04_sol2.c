#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main(void)
{
    int i = 0;

    scanf("%d", &i);
    if (i < 0) {
        printf("%d\n", i);
        printf("minus");

    }
    else {
        printf("%d\n", i);
    }

    return 0;
}


