#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int c_arr[100] ;
    int i = 0, j = 0, k = 0;
    int t = 0;

    for (i = 0; i < 100; i++) {
        scanf("%d", &c_arr[i]);
        if (c_arr[i] == 0)  break;
        if (c_arr[i] % 5 == 0) {
            k++;
            t = t + c_arr[i];
        }
    }


    printf("Multiples of 5 : %d\n", k);
    printf("sum : %d\n", t);
    printf("avg : %.1f\n", (float)t / k);
    return 0;
}