#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
       int score[] = { 1, 2, 3, 4, 5, 6 };
       int i, size;
 

       size = sizeof(score) / sizeof(score[0]);


       for(i = 0; i < size ; i++)
             printf("score[%d] = %d\n", i, score[i]);
       return 0;
 
}