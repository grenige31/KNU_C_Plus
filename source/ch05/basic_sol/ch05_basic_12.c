#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("������ �Է��ϼ��� (0�� �Է��ϸ� ����): ");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;  // �Է°��� 0�̸� �ݺ��� ����
        }
        else if (num > 0) {
            count++;  // ����� ��� ī��Ʈ ����
        }
    }

    printf("�Է¹��� ����� ����: %d\n", count);

    return 0;
}
