#define _CRT_SECURE_NO_WARNINGS
// 2�� ��� �̸鼭 3�� ����μ� �Ǵ� 
#include <stdio.h> 

int main(void)
{
	int num;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &num);

	if (num % 2 == 0 && num % 3 == 0)
	{
		printf("2�� ��� �̸鼭 3�� �����.\n", num);
	}
	else
	{
		printf("2�� ��� �̸鼭 3�� ��� �ƴ� \n", num);
	}


	return 0;
}
