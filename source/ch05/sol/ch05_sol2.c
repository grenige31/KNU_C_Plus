#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int i = 1, j = 0, t = 0;

    while (1) {
        printf("number? ");
        scanf("%d", &i);
        if (i == 0) {
            break;
        }
        if (i < 0)
            printf("negative number\r\n");
        else 
            printf("positive integer\r\n");
    }
    

    return 0;
}