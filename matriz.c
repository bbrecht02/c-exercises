#include <stdio.h>


int main() {

    //declararando as matrizes
    int matriz01[3][3];
    int matriz02[3][3];
    int matriz03[3][3] = {{0}};
    int i;
    int j;
    int m;

    //pedindo os valores pro usuario
    printf("Digite os valores da matriz 01: ");
    printf("\n");
    //for i para linha e for j para coluna da matriz 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz01[i][j]);
        }

    }
    printf("Digite os valores da matriz 02: ");
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz02[i][j]);
        }
    }

    //imprimindo as matrizes
    printf("Matriz 01: ");
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf ("%d", matriz01[i][j]);
            printf(" ");
            
        }
    }
    printf("\n");
    printf("\n");
    printf("Matriz 02: ");
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for(j = 0; j < 3; j++) {
            printf ("%d", matriz02[i][j]);
            printf(" ");
        }
    }
    printf("\n");

    //multiplicando matrizes
    for (m = 0; m < 3; m++) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                matriz03[m][i] += matriz01[m][j] * matriz02[j][i];
                //printf(" %d ", matriz03[m][i]);
            }
        }
    }

    printf("\n");
    //imprimindo resultado
    printf("\n");
    printf("Matriz Resultado: ");
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf(" %d", matriz03[i][j]);
            printf(" ");
        }
    }
    printf("\n");

    return 0;

}


