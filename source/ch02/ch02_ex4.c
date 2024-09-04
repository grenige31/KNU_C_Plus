#include <stdio.h>
int main(void)
{

	double radius = 1.2;	// 원의 반지름
	double area = 0;		// 원의 면적

	area = 3.141592 * radius * radius;
	printf("원의 면적: %f \n", area);

	return 0;
}
