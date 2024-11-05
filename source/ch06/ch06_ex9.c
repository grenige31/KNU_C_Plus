#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sub() {
	static int scount = 0;
	int acount = 0;
	printf("scount = %d\t", scount); 

	printf("acount = %d\n", acount); 
	scount++;
	acount++;

}

int main(void) { 
	sub();
	sub();
	sub();
	return 0;
}
