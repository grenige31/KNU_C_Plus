#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);
	switch (number) {
	case 0:
		printf("����\n");
		break;
	case 1:
		printf("�ϳ�\n");
		break;
	case 2:
		printf("��\n");
		break;
	default:
		printf("����\n");
		break;
	}
}
