#include <stdio.h>

int main() {
    for (int i = 5; i <= 30; i++) {
        if (i % 4 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}