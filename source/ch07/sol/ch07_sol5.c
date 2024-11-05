#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n_arr[100];
    int i = 0, j = 0, k = 0;

    for (i = 0; i < 100; i++) {
        scanf("%d ", &n_arr[i]);
        j++;
        if (n_arr[i] == -1) break;
    }
    k = j - 2;

    if (j > 3) {
        j = j - 4;
    }
    else {
        j = 0;
    }
    for (i = j; i <= k; i++) {
        printf("%d ", n_arr[i]);
    }

    return 0;
    return 0;
}