#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    double f;

    f = 5 / 4;

    printf("%f\n", f);

    f = (double)5 / 4;
    printf("%f\n", f);

    f = 5.0 / 4;
    printf("%f\n", f);

    f = (double)5 / (double)4;
    printf("%f\n", f);

    i = 1.3 + 1.8;
    printf("%d\n", i);

    i = (int)1.3 + (int)1.8;

    printf("%d\n", i);
    return 0;
}
