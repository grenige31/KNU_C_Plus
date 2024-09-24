#include <stdio.h> 

int main(void)
{
	int i = 0, n=0, n_sum = 0;
	int n_limit = 40;

	for (i = 0; i <= 10; i++) 
	{
		n_sum = n_sum + i;
		if (n_sum > n_limit)
		{
			printf("%d\n", i);
			printf("%d\n", n_sum);
			break;
		}
	}	
}
