#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, result;
    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = x + y;
    printf("%d + %d = %d", x, y, result);

    result = x - y;		// 뺄셈 
    printf("%d - %d = %d", x, y, result);
    result = x * y;		// 곱셈 
    printf("%d + %d = %d", x, y, result);
    result = x / y;		// 나눗셈 
    printf("%d / %d = %d", x, y, result);
    result = x % y;		// 나머지 
    printf("%d %% %d = %d", x, y, result);
    return 0;
}


