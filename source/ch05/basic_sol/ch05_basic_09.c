#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    // ����ڷκ��� 5���� ū ����� �Է� �ޱ�
    printf("5���� ū ����� �Է��ϼ���: ");
    scanf("%d", &num);

    // �Է°��� 5���� ū�� Ȯ��
    if (num > 5) {
        for (int i = 5; i <= num; i++) {
            if (i % 5 == 0) {
                printf("%d\n", i);
                break;  // ù ��° 5�� ����� ����� �� �ݺ��� ����
            }
        }
    }
    else {
        printf("�߸��� �Է��Դϴ�. 5���� ū ����� �Է��ϼ���.");
    }

    return 0;
}
