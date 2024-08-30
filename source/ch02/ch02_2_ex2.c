
#include <stdio.h>

int main(void)
{
	//1. 변수 선언
	int x = 0;
	int y=1;
	printf("변수 선언 x=%d, y=%d\n", x, y);
	//2. 변수의 사용
	x = 10;
	y = 20;
	printf("변수 사용1 x=%d, y=%d\n", x, y);

	x = 100;
	y = 200;
	printf("변수 사용2 x=%d, y=%d\n", x, y);
	return 0;
}


