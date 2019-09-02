#include <stdio.h>

int main(void) 
{
    int matriz[10][10];
    int linha;
    int coluna;
    for (linha = 0; linha < 10; linha++)
    {
        for (coluna = 0; coluna < 10; coluna++)
        {
            scanf("%i",matriz[linha][coluna]);
        }
    }


    return 0;
}