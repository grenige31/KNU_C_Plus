#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
       int scores[5] = { 31, 63, 62, 87, 14 };
       int i = 0;
       int arr_val = 0;
       
       arr_val = scores[2];//배열값 가져 오기
       printf("arr_val=%d\n", arr_val);

       scores[3] = 100;//배열값 변경하기

       //반복문으로 배열값 확인 변경하기
       for(i = 0; i < 5; i++){
             printf("scores[%d] = %d\n", i, scores[i]);
       }

       for (i = 0; i < 5; i++) {
           scores[i] = i*10;
       }
       for (i = 0; i < 5; i++) {
           printf("scores[%d] = %d\n", i, scores[i]);
       }
    
       return 0;
}