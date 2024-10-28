#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("양수를 입력하세요 (0을 입력하면 종료): ");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;  // 입력값이 0이면 반복문 종료
        }
        else if (num > 0) {
            sum += num;  // 양수인 경우 합에 더하기
        }
        else {
            printf("양수를 입력하세요.\n");  // 양수가 아닌 경우 메시지 출력
        }
    }

    printf("입력받은 양수들의 합: %d\n", sum);

    return 0;
}
