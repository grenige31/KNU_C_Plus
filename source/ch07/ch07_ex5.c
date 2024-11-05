#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

int get_average(int scores[], int size);	// ①


int main(void)
{
	int scores[STUDENTS] = { 1, 2, 3, 4, 5 };
	int avg;

	avg = get_average(scores, STUDENTS);
	printf("평균은 %d입니다.\n", avg);

	return 0;
}
// 배열에 들어 있는 값들의 평균을 계산하는 함수
int get_average(int scores[], int size)		// ②
{
	int i;
	int sum = 0;


	for(i = 0; i < size; i++)
		sum += scores[i];

	return sum / size;
}
