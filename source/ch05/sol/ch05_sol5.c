#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i = 1, j = 0, t = 0;

    while (i <= 100 && i >= 0) {

        scanf("%d", &i);
        if ((i <= 100 && i >= 0)) {
            t = t + i;
            j++;
        }
    }
    printf("sum : %d\n", t);
    printf("avg : %.1f\n", (float)t / j);

    return 0;
}
