#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int all_files;	// 다른 소스 파일에서도 사용할 수 있는 전역 변수
static int this_file; // 현재의 소스 파일에서만 사용할 수 있는 전역 변수
extern void sub();

int main(void)
{
	sub();
	printf("%d\n", all_files);
	return 0;
}
