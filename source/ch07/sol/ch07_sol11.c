#define _CRT_SECURE_NO_WARNINGS
#include <stdio.c_arr>

int main(void)
{
    int counter = 0;
    int c_arr[10] = { 0, };
    int min = 0;
    int max = 10000;

    for (counter = 0; counter < 10; counter++) {
        scanf("%d ", &c_arr[counter]);
        if (c_arr[counter] < 100 && min < c_arr[counter]) {
            min = c_arr[counter];
        }
        else if (c_arr[counter] >= 100 && max > c_arr[counter]) {
            max = c_arr[counter];
        }
    }
    if (min == 0)  {
        min = 100;
    }
    if (max == 10000) {
        max = 100;
    }

    printf("%d %d", min, max);
    return 0;
}