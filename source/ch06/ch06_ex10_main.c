#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int max(int x, int y);
extern int max_np();

int n1 = 2;
int n2 = 3;

int main(void)
{
	int i = 4;
	int j = 5;
	int r_max = 0, r_max_np = 0;
	r_max = max(i, j);
	printf("%d\n", r_max);
	r_max_np = max_np();
	printf("%d\n", r_max_np);
	return 0;
}