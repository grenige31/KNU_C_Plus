#include <stdio.h>
int x;
void sub();

int main(void)
{
    
    for (x=0; x < 10; x++){
        sub();
    }
}

void sub()
{
    
    for (x = 0; x < 10; x++){
        printf("*");
    }
    printf("\n");
}
