#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define SEC_PER_MINUTE 60  // 1분은 60초 

int main(void)
{
    int input, minute, second;

    printf("초를 입력하시요 : ");
    scanf("%d", &input);// 초단위의 시간을 읽는다. 
    minute = input / SEC_PER_MINUTE;  // 몇 분 
    second = input % SEC_PER_MINUTE; // 몇 초 

    printf("%d초는 %d분 %d초입니다. \n", input, minute, second);
    return 0;
}
