#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    int* p = NULL;
    
    printf("i = %d\n", i);// 변수의 값 출력
    printf("&i = %p\n\n", &i);// 변수의 주소 출력

    p = &i;
    printf("p = 0%p\n", p);// 포인터의 값 출력
    printf("*p = %d\n", *p);// 포인터를 통한 간접 참조 값 출력

    p = &j;
    printf("p = 0%p\n", p);// 포인터의 값 출력
    printf("*p = %d\n", *p);// 포인터를 통한 간접 참조 값 출력

    return 0;
}
