#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main() {
    int x = 0, i=0, j=0;
    scanf("%d", &x);
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
