#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2;

    // ����ڷκ��� �� ���� ����� �Է� �ޱ�
    printf("ù ��° ����� �Է��ϼ���: ");
    scanf("%d", &num1);
    printf("�� ��° ����� �Է��ϼ���(ù ��°���� ū ��): ");
    scanf("%d", &num2);

    
    for (int i = num1; i <= num2; i++) {
        printf("%d ", i);
    }
    
    return 0;
}
