#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n;
    int a;

    a = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}