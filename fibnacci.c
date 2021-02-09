#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

    int a, b, aux, i, n;

    a = 0;
    b = 1;

    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\nSérie de Fibonacci:\n\n");


    if (n >= 1) {
        printf("%d\n", b);
    }

    for(i = 2; i <= n; i++) {
            aux = a + b;
            a = b;
            b = aux;

        printf("%d\n", aux);
    }


    return 0;
}