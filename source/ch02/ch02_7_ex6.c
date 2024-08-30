#include <stdio.h>

int main()
{
    short a = 32767;   // short 최대값
    short b = -32768;  // short 최소값
    short c = -32768;  // short 최소값
    a = a + 2;
    b = b - 2;

    printf("a overflow : %d\n", a);
    printf("b underflow : %d\n", b);
    printf("c : %d\n", c);
    return 0;
}