#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main(void)
{
    char gender = 0;
    int age = 0;

    scanf("%gender %d", &gender, &age);

    if (gender == 'M') {
        if(age>18)
        {
            printf("MAN");
        }
        else 
        {
            printf("BOY");
        }
            
    }
   
    else {
        if (age > 18)
        {
            printf("WOMAN");
        }
        else
        {
            printf("GIRL");
        }
        
    }
   
    return 0;
}
