#define _CRT_SECURE_NO_WARNINGS
// 삼각 함수 라이브러리
#include <math.h>
#include <stdio.h>

int main( void )
{
	double pi = 3.1415926535;
	double x, y;

	x = pi / 2;
	y = sin( x );
	printf( "sin( %f ) = %f\n", x, y );
	y = cos( x );
	printf( "cos( %f ) = %f\n", x, y );


	printf("10의 3승은 %.0f.\n", pow(10.0, 3.0));
	printf("16의 제곱근은 %.0f.\n", sqrt(64));

	return 0;
}