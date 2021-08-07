#include<stdio.h>
int main()
{int i,fact;
    
    for(fact=1,i=3; i<8; i++)
    fact=fact*i;
    printf("factorial of %d is %d",i,fact);
    }