#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int empty_arr[5] ;
    int scores[5] = { 3,6 };
    int i = 0;
    
    for (i = 0; i < 5; i++) {
        printf("empty_arr[%d] = %d\n", i, empty_arr[i]);
    }
 
    for (i = 0; i < 5; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }

    return 0;
}