#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("����� �Է��ϼ��� (0�� �Է��ϸ� ����): ");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;  // �Է°��� 0�̸� �ݺ��� ����
        }
        else if (num > 0) {
            sum += num;  // ����� ��� �տ� ���ϱ�
        }
        else {
            printf("����� �Է��ϼ���.\n");  // ����� �ƴ� ��� �޽��� ���
        }
    }

    printf("�Է¹��� ������� ��: %d\n", sum);

    return 0;
}
