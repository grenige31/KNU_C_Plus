#define _CRT_SECURE_NO_WARNINGS
//  �ݺ��� �̿��� ������ ���α׷�
#include <stdio.h>

int main(void)
{
	int sum;

	sum = 0;	
	for(int i = 1; i <= 10; i++)		// i�� 1���� 10���� ����
		sum += i;			// sum = sum + i;�� ����

	printf("1���� 10������ ������ ��= %d\n",sum);

	return 0;
}