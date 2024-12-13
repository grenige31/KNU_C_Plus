#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{

       int x=10, y=20;
       int *p;
       
       p = &x;

       printf("p = %d\n", p);
       printf("*p = %d\n\n", *p);
 
       p = &y;
       printf("p = %d\n", p);
       printf("*p = %d\n", *p);
 
       return 0;
}