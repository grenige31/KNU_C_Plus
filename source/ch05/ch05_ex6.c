
#include <stdio.h> 
int main(void)
{
	int i = 0, j = 0, res=0;

	for (i = 2; i < 9; i++) 
	{
		for (j = 1; j < 9; j++)
		{
			res = i * j;
			printf("%d x %d = %d \t",i, j, res);
		}
		printf("\n");
	}
	return 0;
}
