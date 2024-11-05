#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float num[6];
    float sum = 0;
    int i = 0, j = 0;
    for (i = 0; i < 6; i++) {
        scanf("%f", &num[i]);
    }
    for (j = 0; j < 6; j++) {
        sum += num[j];
    }
    printf("%.1f", sum / 6);
    return 0;
}