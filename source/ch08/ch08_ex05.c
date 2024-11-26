#include <stdio.h>

void callByReference(int* x) {
    *x = 15;
    printf("Inside : x = %d\n", *x);
}

int main() {
    int i = 5;
    printf("Before call: i = %d\n", i);
    callByReference(&i);
    printf("After call: i = %d\n", i);
    return 0;
}