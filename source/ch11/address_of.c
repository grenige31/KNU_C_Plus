#define _CRT_SECURE_NO_WARNINGS
// �ּ� ������
#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ�: %p\n", &i);	// ���� i�� �ּ����
	printf("c�� �ּ�: %p\n", &c);	// ���� c�� �ּ����
	printf("f�� �ּ�: %p\n", &f);	// ���� f�� �ּ����

	return 0;
}
