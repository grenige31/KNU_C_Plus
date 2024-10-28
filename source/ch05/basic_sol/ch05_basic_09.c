#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // 사용자로부터 5보다 큰 양수를 입력 받기
    printf("5보다 큰 양수를 입력하세요: ");
    scanf("%d", &num);

    // 입력값이 5보다 큰지 확인
    if (num > 5) {
        for (int i = 5; i <= num; i++) {
            if (i % 5 == 0) {
                printf("%d\n", i);
                break;  // 첫 번째 5의 배수를 출력한 후 반복문 종료
            }
        }
    }
    else {
        printf("잘못된 입력입니다. 5보다 큰 양수를 입력하세요.");
    }

    return 0;
}
