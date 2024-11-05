#include <stdio.h>
#include <math.h>	// 이것을 반드시 포함하여야 한다. 

int main(void) {
	double result, value = 1.6;

	result = floor(value);		// result는 1.0이다. 
	printf("%lf \n", result);
	result = ceil(value);		// result는 2.0이다. 
	printf("%lf \n", result);


	printf("12.0의 절대값은 %f\n", fabs(12.0));
	printf("-12.0의 절대값은 %f\n", fabs(-12.0));

	return 0;
}