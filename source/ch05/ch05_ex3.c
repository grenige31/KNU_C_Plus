#define _CRT_SECURE_NO_WARNINGS
// ����ڰ� 0�� �Է��� ������ ���ڸ� ���Ѵ�. 
#include <stdio.h>
int main(void)
{
	int number, sum = 0;

	// ���� ��ü�� ��� �ѹ��� ����ȴ�. 
	do
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);

	printf("���ڵ��� �� = %d \n", sum);

	return 0;
}