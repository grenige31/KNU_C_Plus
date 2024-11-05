#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n[10];
    int i, sum = 0, cnt = 0;
    double avg;
    for (i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        if ((i + 1) % 2 == 0)
            sum += n[i];
        else {
            avg += (double)n[i];
            cnt++;
        }
    }
    printf("sum : %d\navg : %.1lf", sum, avg / cnt);
    return 0;
}