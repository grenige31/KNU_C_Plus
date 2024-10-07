#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    float i = 0, j = 0;

    scanf("%f %f", &i, &j);

    if (i >= 4 && j >= 4) {
        printf("A");
    }
    else if (i >= 3 && j >= 3) {
        printf("B");
    }
    else {
        printf("C");
    }

    return 0;
}
