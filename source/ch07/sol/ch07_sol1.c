#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 반별 평균점수를 초기화.
    float scores[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
    int class1, class2;

    // 두 반 번호를 입력.
    scanf("%d %d", &class1, &class2);

    
    float sum = scores[class1 - 1] + scores[class2 - 1];

    // 결과를 소수 첫째 자리까지 출력.
    printf("%.1f\n", sum);

    return 0;
}
