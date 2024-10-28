#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("정수를 입력하세요 (0을 입력하면 종료): ");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;  // 입력값이 0이면 반복문 종료
        }
        else if (num > 0) {
            count++;  // 양수인 경우 카운트 증가
        }
    }

    printf("입력받은 양수의 개수: %d\n", count);

    return 0;
}
