#include <stdio.h>

int max(int x, int y)
{
	int n_max = 0;
	if (x > y)
		n_max= x;
	else
		n_max = y;
	return n_max;
}


int main(void)
{
	int x=1, y=15;
	int larger;
	larger = max(x, y);
	printf("더 큰값은 %d입니다. \n", larger);
	return 0;
}