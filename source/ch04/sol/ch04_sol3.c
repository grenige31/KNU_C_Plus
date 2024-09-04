#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    int i = 0;

    scanf("%d", &i);
    if (i > 20) {
        printf("adult");
    }
    else {
        printf("%d years later\r\n", 20 - i);
    }

    return 0;
}
