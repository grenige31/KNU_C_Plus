#include <stdio.h>

int main(void)
{
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		int res = 0;
		res = add(i, i + 1);
		printf("%d+%d = %d\n", i, i + 1, res);

	}
	return 0;
}
int add(int x, int y)
{
	int sum = 0;
	sum = x + y;
	return sum;
}
