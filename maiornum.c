#include <stdio.h>

int main() { 
    
    int num1, num2, num3, maior, menor;
    

    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);
    printf("Digite o numero 3 : ");
    scanf("%d", &num3);

    if (num1 > num3) {
        if (num1 > num2) {
            maior = num1;
        }
    }
    if (num2 > num1) {
        if (num2 > num3) {
            maior = num2;
        }
    }
    if (num3 > num1) {
        if (num3 > num2) {
            maior = num3;
        }
    }
    if (num1 < num3) {
        if (num1 < num2) {
            menor = num1;
        }
    }
    if (num2 < num1) {
        if (num2 < num3) {
            menor = num2;
        }
    }
    if (num3 < num1) {
        if (num3 < num2) {
            menor = num3;
        }
    }



    printf("\n");
    printf("Maior Numero: %d", maior);
    printf("\n");
    printf("Menor Numero: %d", menor);
    printf("\n");
    

return 0;
}





