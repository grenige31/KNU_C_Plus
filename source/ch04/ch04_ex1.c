#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int number;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);

	if (number > 0)
		printf("����Դϴ�.");

	printf("�Էµ� ���� %d�Դϴ�.", number);

	return 0;
}
