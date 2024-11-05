#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i, j, o = 0, e = 0;
    int num[11];
    for (i = 0; i < 10; i++) {
        j = i + 1;
        scanf("%d ", &num[i]);
        if (j % 2 == 0)
            e += num[i];
        else
            o += num[i];
    }
    printf("odd : %d\n", o);
    printf("even : %d", e);
    return 0;
}