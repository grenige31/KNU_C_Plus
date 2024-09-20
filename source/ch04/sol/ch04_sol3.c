#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    int age = 0;

    scanf("%d", &age);
    if (age > 20) {
        printf("adult");
    }
    else {
        printf("%d years later\n", 20 - age);
    }

    return 0;
}
