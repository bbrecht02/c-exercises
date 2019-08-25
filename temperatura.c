#include <stdio.h>

int main() {
    
    float c;
    float f;
    float convC;
    float convF;
    char usr;
    printf("Deseja converter em Celsius ou em Fahrenheit: (c ou f)");
    printf("\n");
    scanf("%s", &usr);
    if (usr == 'c') {
        printf("Digite uma temperatura em Fahrenheit: ");
        printf("\n");
        scanf("%f", &f);
        convC = (f-32)/1.8;
        printf("conversao em Celsius:  %f", convC);
        printf("\n");    
    }
    if (usr == 'f') {
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