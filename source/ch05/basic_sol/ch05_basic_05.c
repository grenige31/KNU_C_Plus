#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int num;

    // ����ڷκ��� �Է� �ޱ�
    printf("10���� ���� ����� �Է��ϼ���: ");
    scanf("%d", &num);

    // �Է°��� 10���� �۰� ������� Ȯ��
    if (num > 0 && num < 10) {
        for (int i = num; i <= 10; i++) {
            printf("%d ", i);
        }
    }
    else {
        printf("�߸��� �Է��Դϴ�. 10���� ���� ����� �Է��ϼ���.");
    }

    return 0;
}