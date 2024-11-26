// 포인터와 배열의 관계 
#include <stdio.h> 

int main(void)
{
    int arr[] = { 10, 20, 30, 40, 50 };

    printf("arr = %p\n", arr);
    printf("*arr = %d\n", *arr);
    printf("*(arr+1) = %d\n", *(arr + 1));

    int* p = NULL;
    p = arr;
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    printf("*(p+1) = %d\n", *(p + 1));
    return 0;
}
