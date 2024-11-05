#include <stdio.h>

void print_5stars(int n)
{
	int i = 0;
	for(i=0;i<n;i++){
		printf("*****\n");
	}
	
}

int main(void)
{
	int num = 4;
	print_5stars(4);
	
	return 0;
}