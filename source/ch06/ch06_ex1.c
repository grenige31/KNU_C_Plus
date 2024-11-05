#include <stdio.h>

void print_star_world()
{
	int i;
	for(i = 0; i < 10; i++){
		printf("*");
	}
	printf("\nHello\n");
	printf("Welcome to my world\n");
	for (i = 0; i < 10; i++) {
		printf("*");
	}
	printf("\n\n");
}

int main(void)
{
	print_star_world();	
	print_star_world();
	print_star_world();
	return 0;
}