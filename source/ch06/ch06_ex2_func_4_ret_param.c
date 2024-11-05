#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  print_5stars(int n)
{
	int i = 0;
	int sum = 0;

	for(i=0;i<n;i++){
		printf("*****\n");
	}
	sum = n * 5;
	return sum;	
}

int main(void)
{
	int num = 4;
	int res = 0;
	res=print_5stars(num);
	printf("%d", res);
	return 0;
}