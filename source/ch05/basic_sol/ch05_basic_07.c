#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // ����ڷκ��� 20 �̻��� ����� �Է� �ޱ�
    printf("20 �̻��� ����� �Է��ϼ���: ");
    scanf("%d", &num);

    // �Է°��� 20 �̻����� Ȯ��
    if (num >= 20) {
        for (int i = num; i >= 1; i--) {
            printf("%d ", i);
        }
    }
    else {
        printf("�߸��� �Է��Դϴ�. 20 �̻��� ����� �Է��ϼ���.");
    }

    return 0;
}
