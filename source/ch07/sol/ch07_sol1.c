#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // �ݺ� ��������� �ʱ�ȭ.
    float scores[6] = { 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
    int class1, class2;

    // �� �� ��ȣ�� �Է�.
    scanf("%d %d", &class1, &class2);

    
    float sum = scores[class1 - 1] + scores[class2 - 1];

    // ����� �Ҽ� ù° �ڸ����� ���.
    printf("%.1f\n", sum);

    return 0;
}
