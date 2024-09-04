#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    float i = 0;

    scanf("%f", &i);
    switch ((int)i) {
    case 4:
        printf("scholarship");
        break;
    case 3:
        printf("next semester");
        break;
    case 2:
        printf("seasonal semester");
        break;
    case 1:
    case 0:
        printf("retake");
        break;


    }
    return 0;
}
