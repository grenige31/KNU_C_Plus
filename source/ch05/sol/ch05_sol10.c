#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int i, j;
    int x = 0, n=1;
    scanf("%d", &x);

    int temp = 0;
    int count = 1;
    for (i = 0; i < x; i++)
    {
        
        for (j = 0; j < x; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
        
    }
    return 0;
}