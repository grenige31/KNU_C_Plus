#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int  print_5stars()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
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
	res=print_5stars();
	printf("%d", res);
	return 0;
}