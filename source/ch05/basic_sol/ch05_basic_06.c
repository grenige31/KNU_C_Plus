#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2;

    // 사용자로부터 두 개의 양수를 입력 받기
    printf("첫 번째 양수를 입력하세요: ");
    scanf("%d", &num1);
    printf("두 번째 양수를 입력하세요(첫 번째보다 큰 수): ");
    scanf("%d", &num2);

    
    for (int i = num1; i <= num2; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
