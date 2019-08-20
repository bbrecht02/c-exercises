#include <stdio.h>


int main() {

    //declararando as matrizes
    int matriz01[3][3];
    int matriz02[3][3];
    int matriz03[3][3];
    int i;
    int j;

    //pedindo os valores pro usuario
    printf("digite os valores da matriz 01: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz01[i][j]);
        }

    }
    printf("digite os valores da matriz 02: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz02[i][j]);
        }
    }

    //imprimindo as matrizes
    printf("matriz 01: ");
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
    printf("matriz 02: ");
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for(j = 0; j < 3; j++) {
            printf ("%d", matriz02[i][j]);
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}