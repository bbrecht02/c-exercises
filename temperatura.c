#include <stdio.h>

int main() {
    
    float c;
    float f;
    float convC;
    float convF;
    int usr;
    printf("Deseja converter em Celsius ou em Fahrenheit: (0 ou 1)");
    printf("\n");
    scanf("%d", &usr);
    if (usr == 0) {
        printf("Digite uma temperatura em Fahrenheit: ");
        printf("\n");
        scanf("%f", &f);
        convC = (f-32)/1.8;
        printf("conversao em Celsius:  %f", convC);
        printf("\n");    
    }
    if (usr == 1) {
        printf("Digite uma temperatura em Celsius: ");
        printf("\n");
        scanf("%f", &c);
        convF = (1.8 * c) + 32;
        printf("conversao em Fahrenheit %f", convF);
        printf("\n");
    }






    /* printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &c);
    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &f);
    convC = (f-32)/1.8;
    convF = (1.8 * c) + 32;
    printf("%f", convC);
    printf("\n");
    printf("%f", convF);
    printf("\n"); */
    

    return 0;
}