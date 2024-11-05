#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int c_arr[100] = { 0, };
	int i = 0, j = 0, k = 0;
	int t = 0;

	for (i = 0; i < 100; i++) {
		scanf("%d", &c_arr[i]);
		if (c_arr[i] == 0)  break;
		k++;
	}
	printf("%d \n", k);
	for (i = 0; i < k; i++) {
		if (c_arr[i] & 1)  t = c_arr[i] * 2;
		else	t = c_arr[i] / 2;
		printf("%d ", t);
	}
	


    return 0;
}