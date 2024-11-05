#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char ch_arr[6] = { 'J','U','N','G','O','L' };
    int i = 0, j = 0, k = 0;
    char t = 0;
    scanf("%ch_arr", &t);

    for (i = 0; i < 7; i++) {
        if (i >= 6)
            printf("none");
        else if (t == ch_arr[i]) {
            printf("%d ", i);
            break;
        }
    }
    return 0;
}