#include <stdio.h>

int main(void)
{
    int i = 10;
    int j = 20;
    int* p = NULL;
    
    printf("i = %d\n", i);// ������ �� ���
    printf("&i = %p\n\n", &i);// ������ �ּ� ���

    p = &i;
    printf("p = 0%p\n", p);// �������� �� ���
    printf("*p = %d\n", *p);// �����͸� ���� ���� ���� �� ���

    p = &j;
    printf("p = 0%p\n", p);// �������� �� ���
    printf("*p = %d\n", *p);// �����͸� ���� ���� ���� �� ���

    return 0;
}
