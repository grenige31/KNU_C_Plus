#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i = 1, j = 0, t = 0;

    while (i != 0) {

        scanf("%d", &i);
        if (i != 0) {
            if (i % 3 != 0 && i % 5 != 0)
                j++;
        }
    }
    printf("%d", j);

    return 0;
    


}
