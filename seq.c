#include <stdio.h>

int main() {

    int seq[10] = {};
    int cont = 1;
    //int cont02;
    int soma;
    //int len;

    printf("digite uma sequencia de inteiros: ");
    printf("\n");
    for (cont = 0; cont < 10; cont++) {
        scanf("%d", &seq[cont]);
    }
    
    printf("\n");
    for (cont = 0; cont < 10; cont++) {
        printf(" ");
        printf(" ");
        printf("%d", seq[cont]);
    }
    printf("\n");

   
    
    soma = seq[0] + seq[1] + seq[2] + seq[3] + seq[4] + seq[5] + seq[6] + seq[7] + seq[8] + seq[9];
    printf("%d", soma); 
    printf("\n");
    printf("%d", seq[0]);

 
    
    
    


    





}