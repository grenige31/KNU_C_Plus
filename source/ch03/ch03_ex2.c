#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double x, y, result;

    printf("두개의 실수를 입력하세요: ");
    scanf("%lf %lf", &x, &y);

    result = x + y;		// 덧셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    result = x - y;		// 뺄셈 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    result = x * y;		// 곱하기 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    result = x / y; // 곱하기 연산을 하여서 결과를 result에 대입
    printf("%f / %f = %f", x, y, result);

    return 0;
}
