#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int height = 0, weight = 0, obesity = 0;

    scanf("%d %d", &height, &weight);

    obesity = (weight + 100) - height;
    printf("%d\n", obesity);

    if (obesity > 0) {
        printf("Obesity");
    }

    return 0;
}
