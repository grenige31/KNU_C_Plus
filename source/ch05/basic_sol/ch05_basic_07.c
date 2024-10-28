#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // 사용자로부터 20 이상의 양수를 입력 받기
    printf("20 이상의 양수를 입력하세요: ");
    scanf("%d", &num);

    // 입력값이 20 이상인지 확인
    if (num >= 20) {
        for (int i = num; i >= 1; i--) {
            printf("%d ", i);
        }
    }
    else {
        printf("잘못된 입력입니다. 20 이상의 양수를 입력하세요.");
    }

    return 0;
}
