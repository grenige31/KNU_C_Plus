#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // 사용자로부터 10보다 큰 양수를 입력 받기
    printf("10보다 큰 양수를 입력하세요: ");
    scanf("%d", &num);

    // 입력값이 10보다 큰지 확인
    if (num > 10) {
        for (int i = 1; i <= num; i++) {
            if (i % 6 == 0) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("잘못된 입력입니다. 10보다 큰 양수를 입력하세요.");
    }

    return 0;
}
