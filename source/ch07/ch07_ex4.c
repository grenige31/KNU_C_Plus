#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5

int main(void)
{
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {1, 2, 3, 4, 5};
	int c[SIZE];

	printf("%d -  %d\n", a,b);

	for(i = 0; i < SIZE ; i++) { //배열 값비교
		if ( a[i] != b[i] ) {
			printf("다릅니다.\n");
			break;
		}
	}
	for (i = 0; i < SIZE; i++){
		c[i] = b[i];
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d ", c[i]);
	}
	return 0;
}
