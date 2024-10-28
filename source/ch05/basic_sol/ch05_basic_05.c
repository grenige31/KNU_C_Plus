#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int num;

    // 사용자로부터 입력 받기
    printf("10보다 작은 양수를 입력하세요: ");
    scanf("%d", &num);

    // 입력값이 10보다 작고 양수인지 확인
    if (num > 0 && num < 10) {
        for (int i = num; i <= 10; i++) {
            printf("%d ", i);
        }
    }
    else {
        printf("잘못된 입력입니다. 10보다 작은 양수를 입력하세요.");
    }

    return 0;
}