#include <stdio.h>
#include <math.h>	// �̰��� �ݵ�� �����Ͽ��� �Ѵ�. 

int main(void) {
	double result, value = 1.6;

	result = floor(value);		// result�� 1.0�̴�. 
	printf("%lf \n", result);
	result = ceil(value);		// result�� 2.0�̴�. 
	printf("%lf \n", result);


	printf("12.0�� ���밪�� %f\n", fabs(12.0));
	printf("-12.0�� ���밪�� %f\n", fabs(-12.0));

	return 0;
}