// 포인터와 함수의 관계
#include <stdio.h>

void sub(int p_arr[], int n);

int main(void)
{
    int arr[3] = { 1,2,3 };

    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    sub(arr, 3);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);

    return 0;
}

void sub(int p_arr[], int n)
{
    p_arr[0] = 4;
    p_arr[1] = 5;
    p_arr[2] = 6;
}
