#include <stdio.h>

int main() {
    
    //declarando as variaveis 
    float c;
    float f;
    float convC;
    float convF;
    char usr;
    

    //inicio da execução 
    printf("Deseja converter em Celsius ou em Fahrenheit: (c ou f)");
    printf("\n");
    scanf("%s", &usr);


    //condionais 
    if (usr == 'c') {
        printf("Digite uma temperatura em Fahrenheit: ");
        printf("\n");
        scanf("%f", &f);
        //convertendo Fahrenheit em Celsius 
        convC = (f-32)/1.8;
        //imprimindo resultado / fim do programa
        printf("conversao em Celsius:  %f", convC);
        printf("\n");    
    }
    if (usr == 'f') {
        printf("Digite uma temperatura em Celsius: ");
        printf("\n");
        scanf("%f", &c);
        //convertendo Celsius em Fahrenheit
        convF = (1.8 * c) + 32;
        //imprimindo resultado / fim do programa
        printf("conversao em Fahrenheit %f", convF);
        printf("\n");
    }

    return 0;
}