#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int data = 0x0A0B0C0D;
	char *pc;

	pc = (char *)&data;
	for (int i = 0; i < 4; i++) {
		printf("*(pc + %d) = %02X \n", i, *(pc + i));
	}


	return 0;
}