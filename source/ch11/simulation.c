#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 0���� 99������ ����(�Ǽ�����)�� �߻��Ͽ� ũ�Ⱑ 3�� �迭 p�� �����Ѵ�. 
void getSensorData(double * p) 
{
	// ���⸦ �ۼ��Ѵ�. 
	p[0] = rand()%100;
	p[1] = rand()%100;
	p[2] = rand()%100;
	return;
}

int main(void)
{
	double sensorData[3];
	getSensorData(sensorData);

	printf("���� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[0]);
	printf("�߰� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[1]);
	printf("������ ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[2]);
	return 0;
} 