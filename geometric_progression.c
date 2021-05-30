#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int calc_PG (int q, int n) {

    int a1 = 1;
    int count = 0;
    int an;

    if (n != 0) {

        an = pow(q,n);

        return an;
    }

    return a1;

}

int main(int argc, char const *argv[])
{
    
    if (argc != 3) {
        puts("numero de argumentos invalido, insira 2 inteiros");
        puts("inteiro 1 para razao, inteiro 2 para numero a ser calculado");
        exit(1);
    }

    int razao = atoi(argv[1]); 

    int n = atoi(argv[2]);


    int resul = calc_PG(razao, n);

    printf("a[%d] = %d\n", n ,resul);


    return 0;
}
