#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // ����ڷκ��� 10���� ū ����� �Է� �ޱ�
    printf("10���� ū ����� �Է��ϼ���: ");
    scanf("%d", &num);

    // �Է°��� 10���� ū�� Ȯ��
    if (num > 10) {
        for (int i = 1; i <= num; i++) {
            if (i % 6 == 0) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("�߸��� �Է��Դϴ�. 10���� ū ����� �Է��ϼ���.");
    }

    return 0;
}
