#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // 사용자로부터 양수를 입력 받기
    printf("양수를 입력하세요: ");
    scanf("%d", &num);

    // 입력값이 양수인지 확인
    if (num > 0 && num < 20) {
        for (int i = 20; i >= num; i--) {
            if (i % 3 == 0) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("잘못된 입력입니다. 20보다 작은 양수를 입력하세요.");
    }

    return 0;
}
