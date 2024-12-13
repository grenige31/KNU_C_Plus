#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 기울기와 y절편을계산
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope, float *yintercept)
{
	if( x1 == x2 ) 
		return -1;
	else 
	{
	  *slope = (float)(y2 - y1)/(float)(x2 - x1);
	  *yintercept = y1 - (*slope)*x1;
	  return 0;
	}
}
//
int main(void)
{
	float s, y;

	if( get_line_parameter(3, 3, 6, 6, &s, &y) == -1 )
		printf("에러\n");
	else 
		printf("기울기는 %f, y절편은 %f\n", s, y);

	return 0;
}
