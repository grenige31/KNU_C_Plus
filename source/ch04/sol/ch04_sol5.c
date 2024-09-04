#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    int c = 0;

    scanf("%C", &c);
    if (c == 'A') {
        printf("Excellent");
    }
    else if (c == 'B') {
        printf("Good");
    }
    else if (c == 'C') {
        printf("Usually");
    }
    else if (c == 'D') {
        printf("Effort");
    }
    else if (c == 'F') {
        printf("Failure");
    }
    else {
        printf("error");
    }

    return 0;
}
