#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n = 0, counter = 0, sum = 0;

    while (1) {
        scanf("%d", &n);
        sum = sum + n;
        counter++;
        

        if (n >=100) {
            break;
        }
    }
    printf("%d\r\n", sum);
    printf("%f", (float)sum / counter);
    return 0;
}
