#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // ����ڷκ��� ����� �Է� �ޱ�
    printf("����� �Է��ϼ���: ");
    scanf("%d", &num);

    // �Է°��� ������� Ȯ��
    if (num > 0 && num < 20) {
        for (int i = 20; i >= num; i--) {
            if (i % 3 == 0) {
                printf("%d ", i);
            }
        }
    }
    else {
        printf("�߸��� �Է��Դϴ�. 20���� ���� ����� �Է��ϼ���.");
    }

    return 0;
}
