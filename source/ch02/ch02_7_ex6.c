#include <stdio.h>

int main()
{
    short a = 32767;   // short �ִ밪
    short b = -32768;  // short �ּҰ�
    short c = -32768;  // short �ּҰ�
    a = a + 2;
    b = b - 2;

    printf("a overflow : %d\n", a);
    printf("b underflow : %d\n", b);
    printf("c : %d\n", c);
    return 0;
}