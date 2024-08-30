
#include <stdio.h>

int main(void)
{
	// 1-1. 정수 변수 선언 : 초기값을 0으로 설정
	int x = 0;
	int y = 0;
	//1-2. 실수 변수 선언 : 초기값을 0으로 설정
	double i = 0;
	double j = 0;
	// 2-1. 변수 사용 : 200, 300 으로 변경
	x = 200;
	y = 300;

	// 2-2. 변수 사용 : 1.2. 10.1 으로 변경
	i = 1.2;
	j = 10.1;

	//3-1. 정수 변수값 출력
	printf("%d , %d\n", x, y);
	//3-2. 실수 변수값 출력
	printf("%f , %f\n", i, j);
	return 0;
}
