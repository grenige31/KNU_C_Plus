
#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
	int score_arr[ROWS][COLS] = { 
		{ 87, 98, 80, 76, 3 },
		{ 99, 89, 90, 90, 0 },
		{ 65, 68, 50, 49, 0 }
	};
	int i = 0, j = 0;

	//값 가져오기
	int arr_val= score_arr[1][4];
	printf("%d\n", arr_val);
	
	//값 변경
	score_arr[1][4] = 100;

	for (i = 0; i < ROWS; i++){
		for (j = 0; j < COLS; j++)
			printf("%d ", score_arr[i][j]);
		printf("\n");
	}
	return 0;
}