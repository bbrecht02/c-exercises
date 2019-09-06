#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int a, b, aux, middle;

    puts("digite dois valores: ");
    scanf("%d %d", &a, &b);

    aux = a + b;
    middle = a + b / 2;

    puts("middle: ");
    printf("%d + %d = %d \n%d / 2 = %d\n",a , b, aux, aux, middle);


    
    return 0;
}
