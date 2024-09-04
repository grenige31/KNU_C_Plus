//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main(void)
{
	char c;
	int i;
	float f;

	c = 10000;//내림변환
	i = 1.23456 + 10;//내림변환
	f = 10 + 20;//올림변환
	printf("c = %d, i = %d, f = %f \n", c, i, f);
	return 0;
}
