#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
       int scores[5] = { 31, 63, 62, 87, 14 };
       int i = 0;
       int arr_val = 0;
       
       arr_val = scores[2];//�迭�� ���� ����
       printf("arr_val=%d\n", arr_val);

       scores[3] = 100;//�迭�� �����ϱ�

       //�ݺ������� �迭�� Ȯ�� �����ϱ�
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