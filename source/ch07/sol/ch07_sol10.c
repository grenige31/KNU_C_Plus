#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int c_arr[10] = { 0, };
	int i = 0, j = 0, k = 0, h = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d ", &k);
		c_arr[k]++;
	}

	for (i = 0; i < 6; i++) {
		printf("%d : %d\n", i + 1, c_arr[i + 1]);
	}
    return 0;
}